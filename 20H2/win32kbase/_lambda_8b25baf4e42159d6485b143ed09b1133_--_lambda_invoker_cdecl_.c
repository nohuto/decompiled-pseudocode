/*
 * XREFs of _lambda_8b25baf4e42159d6485b143ed09b1133_::_lambda_invoker_cdecl_ @ 0x1C00D22E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C01A0C80 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01A2A24 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall lambda_8b25baf4e42159d6485b143ed09b1133_::_lambda_invoker_cdecl_(struct DEVICEINFO *const a1, void *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct CPTPProcessor *Processor; // rsi
  __int64 v7; // r8
  __int64 v8; // r9

  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
  {
    v3 = *((_QWORD *)a1 + 60);
    if ( *(_DWORD *)(v3 + 24) == 7 )
    {
      Processor = CPTPProcessorFactory::GetProcessor(a1);
      if ( !Processor )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v7, v8);
        v3 = *((_QWORD *)a1 + 60);
      }
      CPTPProcessor::UpdateEnvironment(Processor, 1LL, v3);
    }
  }
  return 1;
}
