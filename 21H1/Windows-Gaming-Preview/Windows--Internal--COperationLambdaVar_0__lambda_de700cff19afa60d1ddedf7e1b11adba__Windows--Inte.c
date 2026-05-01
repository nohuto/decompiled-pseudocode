/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_de700cff19afa60d1ddedf7e1b11adba__Windows::Internal::CNoResult_::Run @ 0x180031590
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_de700cff19afa60d1ddedf7e1b11adba_::operator() @ 0x18002C36C (_lambda_de700cff19afa60d1ddedf7e1b11adba_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_de700cff19afa60d1ddedf7e1b11adba__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        HSTRING a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 40);
  if ( (_DWORD)a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_de700cff19afa60d1ddedf7e1b11adba_::operator()((_QWORD *)(a1 + 8), a2);
  return (unsigned int)a3;
}
