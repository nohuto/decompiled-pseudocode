/*
 * XREFs of _RtlSecondsSince1970ToTime@8 @ 0x4B344D70
 * Callers:
 *     <none>
 * Callees:
 *     _RtlExtendedIntegerMultiply@12 @ 0x4B308450 (_RtlExtendedIntegerMultiply@12.c)
 */

void __cdecl RtlSecondsSince1970ToTime(ULONG ElapsedSeconds, PLARGE_INTEGER Time)
{
  int v2; // edx

  Time->LowPart = RtlExtendedIntegerMultiply(
                    ((unsigned int)SecondsToStartOf1970 | 0x200000000LL) + ElapsedSeconds,
                    10000000);
  Time->HighPart = v2;
}
