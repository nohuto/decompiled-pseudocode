/*
 * XREFs of PpmConvertTimeTo @ 0x140575588
 * Callers:
 *     PopDripsWatchdogUpdateMetrics @ 0x1408F1F20 (PopDripsWatchdogUpdateMetrics.c)
 *     PopIdleWakeConvertIntervalBucketsTo @ 0x1408F6964 (PopIdleWakeConvertIntervalBucketsTo.c)
 *     PopIdleWakeSourceAccountingToDiagnostic @ 0x1408F6E00 (PopIdleWakeSourceAccountingToDiagnostic.c)
 * Callees:
 *     PpmConvertTime @ 0x14033E54C (PpmConvertTime.c)
 */

ULONGLONG __fastcall PpmConvertTimeTo(ULONGLONG a1, ULONGLONG a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
