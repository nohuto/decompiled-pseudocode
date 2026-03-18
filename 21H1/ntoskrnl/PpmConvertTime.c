/*
 * XREFs of PpmConvertTime @ 0x140205BBC
 * Callers:
 *     PpmUpdateTimeAccumulation @ 0x140205150 (PpmUpdateTimeAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x140205860 (PopGetIdleTimesCallback.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x14026E720 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14026EAE0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmSnapPerformanceAccumulation @ 0x14026F0A0 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x1402702D0 (PpmIdleExecuteTransition.c)
 *     PpmParkApplyPolicy @ 0x1403BEE24 (PpmParkApplyPolicy.c)
 *     PpmApplyIdlePolicy @ 0x1403C0B24 (PpmApplyIdlePolicy.c)
 *     PpmConvertTimeFrom @ 0x1403C4F44 (PpmConvertTimeFrom.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x140560C0C (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140561E40 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x1405620E0 (PpmTraceExitLatency.c)
 *     PopCalculateCsSummary @ 0x14056A410 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x14056A980 (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsResiliencyExit @ 0x14056B864 (PopDiagTraceCsResiliencyExit.c)
 *     PpmConvertTimeTo @ 0x140571508 (PpmConvertTimeTo.c)
 *     PpmGetThroughputInfoCallback @ 0x140571620 (PpmGetThroughputInfoCallback.c)
 *     PpmTranslateIdleAccounting @ 0x1405717F0 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x140571A30 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmCheckInitProcessors @ 0x1407A4778 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407A4940 (PpmRegisterPerfStates.c)
 *     PpmInitIdlePolicy @ 0x140A68A74 (PpmInitIdlePolicy.c)
 *     PopInitDripsWakeAccounting @ 0x140A6ADB0 (PopInitDripsWakeAccounting.c)
 * Callees:
 *     RtlULongLongMult @ 0x1402C1CCC (RtlULongLongMult.c)
 */

ULONGLONG __fastcall PpmConvertTime(ULONGLONG a1, __int64 a2, ULONGLONG a3)
{
  ULONGLONG v4; // r10
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r11
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  pullResult = 0LL;
  v4 = a1;
  if ( a1 && a2 && a2 != a3 )
  {
    if ( RtlULongLongMult(a1, a3, &pullResult) < 0 )
      return a3 * (v6 / v7) + a3 * (v6 % v7) / v7;
    else
      return pullResult / v7;
  }
  return v4;
}
