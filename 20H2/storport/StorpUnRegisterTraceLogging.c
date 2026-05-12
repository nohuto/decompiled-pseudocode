/*
 * XREFs of StorpUnRegisterTraceLogging @ 0x1C007BFDC
 * Callers:
 *     RaDeleteDriver @ 0x1C007A1A8 (RaDeleteDriver.c)
 * Callees:
 *     StorpUninitializePerfTelemetry @ 0x1C0057A98 (StorpUninitializePerfTelemetry.c)
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
    dword_1C0069058 = 0;
    EtwUnregister(v0);
    StorpUninitializePerfTelemetry();
    g_StorpTraceLoggingInitialized = 0;
  }
}
