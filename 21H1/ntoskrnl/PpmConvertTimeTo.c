/*
 * XREFs of PpmConvertTimeTo @ 0x140571508
 * Callers:
 *     PopDripsWatchdogUpdateMetrics @ 0x1408EB090 (PopDripsWatchdogUpdateMetrics.c)
 *     PopIdleWakeConvertIntervalBucketsTo @ 0x1408EFA64 (PopIdleWakeConvertIntervalBucketsTo.c)
 *     PopIdleWakeSourceAccountingToDiagnostic @ 0x1408EFF00 (PopIdleWakeSourceAccountingToDiagnostic.c)
 * Callees:
 *     PpmConvertTime @ 0x140205BBC (PpmConvertTime.c)
 */

ULONGLONG __fastcall PpmConvertTimeTo(ULONGLONG a1, ULONGLONG a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
