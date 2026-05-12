/*
 * XREFs of StorpTraceLoggingTelemetryTimerDpcRoutine @ 0x1C000C900
 * Callers:
 *     <none>
 * Callees:
 *     StorpLogStatistics @ 0x1C000C5E0 (StorpLogStatistics.c)
 */

void __fastcall StorpTraceLoggingTelemetryTimerDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int16 v5; // di
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _KDPC *v9; // rbx
  __int64 v10; // rdx
  struct _KTIMER *v11; // rcx
  __int64 v12; // rdx
  ULONG v13; // r9d

  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = v6 * (int)KeQueryTimeIncrement();
  v9 = &g_StorpTraceLoggingPerformanceTimerDpc;
  v10 = v7 / 10000000;
  *(_QWORD *)&g_SystemUptime_s = v7 / 10000000;
  if ( Dpc == &g_StorpTraceLoggingPerformanceTimerDpc )
  {
    if ( g_StorpTraceLoggingPerformanceEnabled )
      v5 = 4;
    if ( g_StorpTraceLoggingErrorDataEnabled )
      v5 |= 0x10u;
    StorpLogStatistics(v5 | 0x60, v10, v7, v8);
    v11 = &g_StorpTraceLoggingPerformanceTimer;
    v12 = -g_StorpTraceLoggingPerformancePeriod;
    v13 = 300000;
    goto LABEL_4;
  }
  v9 = &g_StorpTraceLoggingDeviceHealthTimerDpc;
  if ( Dpc == &g_StorpTraceLoggingDeviceHealthTimerDpc )
  {
    StorpLogStatistics(0x80u, v10, v7, v8);
    v11 = &g_StorpTraceLoggingDeviceHealthTimer;
    v12 = -g_StorpTraceLoggingDeviceHealthPeriod;
    v13 = 300000;
LABEL_4:
    KeSetCoalescableTimer(v11, (LARGE_INTEGER)v12, 0, v13, v9);
    return;
  }
  v9 = &g_StorpTraceLoggingHierarchicalResetTimerDpc;
  if ( Dpc == &g_StorpTraceLoggingHierarchicalResetTimerDpc )
  {
    StorpLogStatistics(3u, v10, v7, v8);
    v12 = -138000000000LL;
    v11 = &g_StorpTraceLoggingHierarchicalResetTimer;
    v13 = 300000;
    goto LABEL_4;
  }
  v9 = &g_StorpTraceLoggingDailyTimerDpc;
  if ( Dpc == &g_StorpTraceLoggingDailyTimerDpc )
  {
    StorpLogStatistics(8u, v10, v7, v8);
    v12 = -864000000000LL;
    v11 = &g_StorpTraceLoggingDailyTimer;
    v13 = 900000;
    goto LABEL_4;
  }
}
