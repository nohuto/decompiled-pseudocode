/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_2a53bdf349f1cabe85dc2bb8886a879d__Windows::Internal::CBasicResult_unsigned_char_0___::Run @ 0x1800817C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2a53bdf349f1cabe85dc2bb8886a879d_::operator() @ 0x180080038 (_lambda_2a53bdf349f1cabe85dc2bb8886a879d_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_2a53bdf349f1cabe85dc2bb8886a879d__Windows::Internal::CBasicResult_unsigned_char_0___::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 24);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_2a53bdf349f1cabe85dc2bb8886a879d_::operator()((__int64 *)(a1 + 8), a4);
  return (unsigned int)a3;
}
