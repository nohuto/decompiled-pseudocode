/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_5733d5035a874d27ce3bcb89134ebdd6__Windows::Internal::CNoResult_::Run @ 0x180056540
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_5733d5035a874d27ce3bcb89134ebdd6_::operator() @ 0x1800545B4 (_lambda_5733d5035a874d27ce3bcb89134ebdd6_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_5733d5035a874d27ce3bcb89134ebdd6__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 16);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_5733d5035a874d27ce3bcb89134ebdd6_::operator()((__int64 *)(a1 + 8));
  return (unsigned int)a3;
}
