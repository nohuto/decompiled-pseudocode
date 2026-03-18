/*
 * XREFs of PpmConvertTime @ 0x14033E54C
 * Callers:
 *     PpmPerfSnapDeliveredPerformance @ 0x140280140 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140280500 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmSnapPerformanceAccumulation @ 0x140280AC0 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x140281CF0 (PpmIdleExecuteTransition.c)
 *     PopGetIdleTimesCallback @ 0x14033E1F0 (PopGetIdleTimesCallback.c)
 *     PpmUpdateTimeAccumulation @ 0x14033E604 (PpmUpdateTimeAccumulation.c)
 *     PpmParkApplyPolicy @ 0x1403C1434 (PpmParkApplyPolicy.c)
 *     PpmApplyIdlePolicy @ 0x1403C4154 (PpmApplyIdlePolicy.c)
 *     PpmConvertTimeFrom @ 0x1403C8944 (PpmConvertTimeFrom.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x140564C3C (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140565E70 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x140566110 (PpmTraceExitLatency.c)
 *     PopCalculateCsSummary @ 0x14056E490 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x14056EA00 (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsResiliencyExit @ 0x14056F8E4 (PopDiagTraceCsResiliencyExit.c)
 *     PpmConvertTimeTo @ 0x140575588 (PpmConvertTimeTo.c)
 *     PpmGetThroughputInfoCallback @ 0x1405756A0 (PpmGetThroughputInfoCallback.c)
 *     PpmTranslateIdleAccounting @ 0x140575870 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x140575AB0 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmCheckInitProcessors @ 0x1407B4EB8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407B5080 (PpmRegisterPerfStates.c)
 *     PpmInitIdlePolicy @ 0x140A6F724 (PpmInitIdlePolicy.c)
 *     PopInitDripsWakeAccounting @ 0x140A7191C (PopInitDripsWakeAccounting.c)
 * Callees:
 *     RtlULongLongMult @ 0x14022B2AC (RtlULongLongMult.c)
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
