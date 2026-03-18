/*
 * XREFs of _lambda_8a7876a6fd1a6f48c562081de69d6664_::_lambda_invoker_cdecl_ @ 0x1C00D19E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C01A8D60 (-GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z.c)
 *     ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C01CC62C (-TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall lambda_8a7876a6fd1a6f48c562081de69d6664_::_lambda_invoker_cdecl_(struct DEVICEINFO *const a1, void *a2)
{
  __int64 v2; // rcx
  struct CPTPProcessor *Processor; // rbx

  if ( (*((_DWORD *)a1 + 50) & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)a1 + 60) + 24LL) == 7 )
  {
    Processor = CPTPProcessorFactory::GetProcessor(a1);
    if ( !Processor )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    PTPEngineTraceProducer::TraceEnvironment(
      *((PTPEngineTraceProducer **)Processor + 64),
      (const struct PTPEnvironment *)(*((_QWORD *)Processor + 64) + 40LL));
  }
  return 1;
}
