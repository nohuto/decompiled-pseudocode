/*
 * XREFs of ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C01A8D60
 * Callers:
 *     _lambda_8a7876a6fd1a6f48c562081de69d6664_::_lambda_invoker_cdecl_ @ 0x1C00D19E0 (_lambda_8a7876a6fd1a6f48c562081de69d6664_--_lambda_invoker_cdecl_.c)
 *     _lambda_8b25baf4e42159d6485b143ed09b1133_::_lambda_invoker_cdecl_ @ 0x1C00D1A30 (_lambda_8b25baf4e42159d6485b143ed09b1133_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

struct CPTPProcessor *__fastcall CPTPProcessorFactory::GetProcessor(struct DEVICEINFO *a1)
{
  struct CPTPProcessor *result; // rax

  result = (struct CPTPProcessor *)*((_QWORD *)a1 + 60);
  if ( result )
    return (struct CPTPProcessor *)*((_QWORD *)result + 125);
  return result;
}
