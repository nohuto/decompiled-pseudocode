/*
 * XREFs of PpmConvertTimeFrom @ 0x1403C8944
 * Callers:
 *     PopIdleWakeInitialize @ 0x1407C2C78 (PopIdleWakeInitialize.c)
 *     PopIdleWakeConvertIntervalBucketsFrom @ 0x1407C2D6C (PopIdleWakeConvertIntervalBucketsFrom.c)
 * Callees:
 *     PpmConvertTime @ 0x14033E54C (PpmConvertTime.c)
 */

ULONGLONG __fastcall PpmConvertTimeFrom(ULONGLONG a1, __int64 a2)
{
  return PpmConvertTime(a1, a2, PopQpcFrequency);
}
