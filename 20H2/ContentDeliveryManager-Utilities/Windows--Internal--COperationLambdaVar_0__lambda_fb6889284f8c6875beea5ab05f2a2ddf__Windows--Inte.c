/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_fb6889284f8c6875beea5ab05f2a2ddf__Windows::Internal::CNoResult_::Run @ 0x180056130
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_fb6889284f8c6875beea5ab05f2a2ddf_::operator() @ 0x180053D44 (_lambda_fb6889284f8c6875beea5ab05f2a2ddf_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_fb6889284f8c6875beea5ab05f2a2ddf__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        int a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 16);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_fb6889284f8c6875beea5ab05f2a2ddf_::operator()((__int64 *)(a1 + 8));
  return (unsigned int)a3;
}
