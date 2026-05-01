/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_5419d15aea592e4e2e8a2c756ed1e634__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::Run @ 0x18001F8D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_5419d15aea592e4e2e8a2c756ed1e634_::operator() @ 0x18001C86C (_lambda_5419d15aea592e4e2e8a2c756ed1e634_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_5419d15aea592e4e2e8a2c756ed1e634__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 40);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_5419d15aea592e4e2e8a2c756ed1e634_::operator()((_QWORD *)(a1 + 8), a4);
  return (unsigned int)a3;
}
