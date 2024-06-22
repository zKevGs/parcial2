#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main(){

char seleccion;
string respuesta, respuesta2, respuesta3;

int Ma[5][2]{

    {1, 2500},
    {2, 3500},
    {3, 4500},
    {4, 5000},
    {5, 1500},

};

for (int i = 0; i<5; i++){
    for (int j = 0; j<2; j++){
        cout << Ma[i][j] << " " << endl;
    }
}

cout << "seleccione una bicicleta: ";
cin >> seleccion;

switch (seleccion){
case '1':
    cout << "la bicicleta es rodado 12 y es para ninios";
    break;
case '2':
    cout << "la bicicleta es usada, rodado 23 y es rosa";
    break;
case '3':
    cout << "la bicicleta es rodado 23 y es con canasto";
    break;
case '4':
    cout << "la bicicleta es roraro 16 y es deportiva";
    break;
case '5':
    cout << "la bicicleta es rorado 23 y es una bmx";
    break;

}
cout << endl;

cout << "quiere volver al menu anterior? ";
cin >> respuesta;

while(respuesta == "si"){
    cout << "seleccione una bicicleta: ";
cin >> seleccion;

switch (seleccion){
case '1':
    cout << "la bicicleta es rodado 12 y es para ninios";
    cout << endl;
    break;
case '2':
    cout << "la bicicleta es usada, rodado 23 y es rosa"<< endl;
    break;
case '3':
    cout << "la bicicleta es rodado 23 y es con canasto"<< endl;
    break;
case '4':
    cout << "la bicicleta es roraro 16 y es deportiva"<< endl;
    break;
case '5':
    cout << "la bicicleta es rorado 23 y es una bmx"<< endl;
    break;

}

cout << endl;

cout  <<"quiere volver al menu anterior? ";
cin >> respuesta;
}
cout << "desea salir del programa? ";
cin >> respuesta3;

if (respuesta3 == "no"){
    cout << "desea comprar la bicicleta seleccionada con anterioridad? ";
cin >> respuesta2;

if (respuesta2 == "si"){
    cout << "compra exitosa";

}
}



return 0;
}
