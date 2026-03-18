/*
 * XREFs of PpmConvertTime @ 0x14029857C
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x1402156D0 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140215A90 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmSnapPerformanceAccumulation @ 0x140216050 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x140217280 (PpmIdleExecuteTransition.c)
 *     PopGetIdleTimesCallback @ 0x140298220 (PopGetIdleTimesCallback.c)
 *     PpmUpdateTimeAccumulation @ 0x14033F30C (PpmUpdateTimeAccumulation.c)
 *     PpmParkApplyPolicy @ 0x1403BFDB4 (PpmParkApplyPolicy.c)
 *     PpmApplyIdlePolicy @ 0x1403C19E4 (PpmApplyIdlePolicy.c)
 *     PpmConvertTimeFrom @ 0x1403C5EB4 (PpmConvertTimeFrom.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x14056125C (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140562490 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x140562730 (PpmTraceExitLatency.c)
 *     PopCalculateCsSummary @ 0x14056AA60 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x14056AFD0 (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsResiliencyExit @ 0x14056BEB4 (PopDiagTraceCsResiliencyExit.c)
 *     PpmConvertTimeTo @ 0x140571B58 (PpmConvertTimeTo.c)
 *     PpmGetThroughputInfoCallback @ 0x140571C70 (PpmGetThroughputInfoCallback.c)
 *     PpmTranslateIdleAccounting @ 0x140571E40 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x140572080 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmCheckInitProcessors @ 0x1407A6EC8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407A7090 (PpmRegisterPerfStates.c)
 *     PpmInitIdlePolicy @ 0x140A68EF4 (PpmInitIdlePolicy.c)
 *     PopInitDripsWakeAccounting @ 0x140A6B010 (PopInitDripsWakeAccounting.c)
 * Callees:
 *     RtlULongLongMult @ 0x1402FE7AC (RtlULongLongMult.c)
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
