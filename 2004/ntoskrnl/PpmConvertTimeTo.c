/*
 * XREFs of PpmConvertTimeTo @ 0x140571B58
 * Callers:
 *     PopDripsWatchdogUpdateMetrics @ 0x1408EC310 (PopDripsWatchdogUpdateMetrics.c)
 *     PopIdleWakeConvertIntervalBucketsTo @ 0x1408F0D54 (PopIdleWakeConvertIntervalBucketsTo.c)
 *     PopIdleWakeSourceAccountingToDiagnostic @ 0x1408F11F0 (PopIdleWakeSourceAccountingToDiagnostic.c)
 * Callees:
 *     PpmConvertTime @ 0x14029857C (PpmConvertTime.c)
 */

ULONGLONG __fastcall PpmConvertTimeTo(ULONGLONG a1, ULONGLONG a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
