/*
 * XREFs of _lambda_8b25baf4e42159d6485b143ed09b1133_::_lambda_invoker_cdecl_ @ 0x1C00D1A30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C01A8D60 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01AAB04 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall lambda_8b25baf4e42159d6485b143ed09b1133_::_lambda_invoker_cdecl_(struct DEVICEINFO *const a1, void *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  struct CPTPProcessor *Processor; // rsi

  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
  {
    v3 = *((_QWORD *)a1 + 60);
    if ( *(_DWORD *)(v3 + 24) == 7 )
    {
      Processor = CPTPProcessorFactory::GetProcessor(a1);
      if ( !Processor )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
        v3 = *((_QWORD *)a1 + 60);
      }
      CPTPProcessor::UpdateEnvironment(Processor, 1LL, v3);
    }
  }
  return 1;
}
