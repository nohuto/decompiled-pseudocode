/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_ad7bd321257e919ed278c75d322da1b6__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::Run @ 0x18001F890
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ad7bd321257e919ed278c75d322da1b6_::operator() @ 0x18001CF7C (_lambda_ad7bd321257e919ed278c75d322da1b6_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_ad7bd321257e919ed278c75d322da1b6__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_ad7bd321257e919ed278c75d322da1b6_::operator()((_QWORD *)(a1 + 8), a4);
  return (unsigned int)a3;
}
