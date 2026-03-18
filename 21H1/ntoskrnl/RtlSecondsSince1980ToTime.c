/*
 * XREFs of RtlSecondsSince1980ToTime @ 0x14057F880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlSecondsSince1980ToTime(ULONG ElapsedSeconds, PLARGE_INTEGER Time)
{
  Time->QuadPart = 10000000 * (SecondsToStartOf1980 + ElapsedSeconds);
}
