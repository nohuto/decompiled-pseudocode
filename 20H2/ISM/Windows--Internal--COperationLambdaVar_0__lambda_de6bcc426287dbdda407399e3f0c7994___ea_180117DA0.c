/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_de6bcc426287dbdda407399e3f0c7994__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________::Run @ 0x180117DA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_de6bcc426287dbdda407399e3f0c7994_::operator() @ 0x180111844 (_lambda_de6bcc426287dbdda407399e3f0c7994_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_de6bcc426287dbdda407399e3f0c7994__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 16);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_de6bcc426287dbdda407399e3f0c7994_::operator()((__int64 *)(a1 + 8), a4);
  return (unsigned int)a3;
}
