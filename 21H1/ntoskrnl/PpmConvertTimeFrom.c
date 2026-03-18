/*
 * XREFs of PpmConvertTimeFrom @ 0x1403C4F44
 * Callers:
 *     PopIdleWakeInitialize @ 0x1407B12D8 (PopIdleWakeInitialize.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x1407B13CC (PopIdleWakeConvertIntervalBucketsFrom.c)
 * Callees:
 *     PpmConvertTime @ 0x140205BBC (PpmConvertTime.c)
 */

ULONGLONG __fastcall PpmConvertTimeFrom(ULONGLONG a1, __int64 a2)
{
  return PpmConvertTime(a1, a2, PopQpcFrequency);
}
