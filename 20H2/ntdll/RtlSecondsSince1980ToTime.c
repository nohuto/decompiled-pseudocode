/*
 * XREFs of RtlSecondsSince1980ToTime @ 0x1800E6030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlSecondsSince1980ToTime(ULONG ElapsedSeconds, PLARGE_INTEGER Time)
{
  Time->QuadPart = 10000000 * (SecondsToStartOf1980 + ElapsedSeconds);
}
