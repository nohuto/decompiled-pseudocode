/*
 * XREFs of _lambda_8a7876a6fd1a6f48c562081de69d6664_::_lambda_invoker_cdecl_ @ 0x1C00D2300
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C01A3000 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C01C66AC (-TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall lambda_8a7876a6fd1a6f48c562081de69d6664_::_lambda_invoker_cdecl_(struct DEVICEINFO *const a1, void *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct CPTPProcessor *Processor; // rbx
  __int64 v5; // r8
  __int64 v6; // r9

  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)a1 + 60) + 24LL) == 7 )
  {
    Processor = CPTPProcessorFactory::GetProcessor(a1);
    if ( !Processor )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v5, v6);
    PTPEngineTraceProducer::TraceEnvironment(
      *((PTPEngineTraceProducer **)Processor + 64),
      (const struct PTPEnvironment *)(*((_QWORD *)Processor + 64) + 40LL));
  }
  return 1;
}
