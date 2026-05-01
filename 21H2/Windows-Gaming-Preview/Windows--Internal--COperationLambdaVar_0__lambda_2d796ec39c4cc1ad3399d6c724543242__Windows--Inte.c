/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_2d796ec39c4cc1ad3399d6c724543242__Windows::Internal::CNoResult_::Run @ 0x180031550
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2d796ec39c4cc1ad3399d6c724543242_::operator() @ 0x18002C6A0 (_lambda_2d796ec39c4cc1ad3399d6c724543242_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_2d796ec39c4cc1ad3399d6c724543242__Windows::Internal::CNoResult_::Run(
        __int64 a1,
        HSTRING a2,
        int a3)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 32);
  if ( (_DWORD)a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_2d796ec39c4cc1ad3399d6c724543242_::operator()((_QWORD *)(a1 + 8), a2);
  return (unsigned int)a3;
}
