/*
 * XREFs of PpmConvertTimeFrom @ 0x1403C5EB4
 * Callers:
 *     PopIdleWakeInitialize @ 0x1407B4448 (PopIdleWakeInitialize.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x1407B453C (PopIdleWakeConvertIntervalBucketsFrom.c)
 * Callees:
 *     PpmConvertTime @ 0x14029857C (PpmConvertTime.c)
 */

ULONGLONG __fastcall PpmConvertTimeFrom(ULONGLONG a1, __int64 a2)
{
  return PpmConvertTime(a1, a2, PopQpcFrequency);
}
