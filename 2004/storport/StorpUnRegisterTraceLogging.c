/*
 * XREFs of StorpUnRegisterTraceLogging @ 0x1C007AADC
 * Callers:
 *     RaDeleteDriver @ 0x1C0078CA0 (RaDeleteDriver.c)
 * Callees:
 *     StorpUninitializePerfTelemetry @ 0x1C0056BD4 (StorpUninitializePerfTelemetry.c)
 */

void StorpUnRegisterTraceLogging()
{
  REGHANDLE v0; // rcx

  if ( g_StorpTraceLoggingInitialized == 1 )
  {
    KeCancelTimer(&g_StorpTraceLoggingHierarchicalResetTimer);
    KeCancelTimer(&g_StorpTraceLoggingDailyTimer);
    if ( g_StorpTraceLoggingPerformanceEnabled || g_StorpTraceLoggingErrorDataEnabled )
      KeCancelTimer(&g_StorpTraceLoggingPerformanceTimer);
    if ( g_StorpTraceLoggingDeviceHealthEnabled )
      KeCancelTimer(&g_StorpTraceLoggingDeviceHealthTimer);
    v0 = RegHandle;
    RegHandle = 0LL;
    dword_1C0068058 = 0;
    EtwUnregister(v0);
    StorpUninitializePerfTelemetry();
    g_StorpTraceLoggingInitialized = 0;
  }
}
