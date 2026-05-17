/*
 * XREFs of _RtlSecondsSince1970ToTime@8 @ 0x4B344D70
 * Callers:
 *     <none>
 * Callees:
 *     _RtlExtendedIntegerMultiply@12 @ 0x4B308450 (_RtlExtendedIntegerMultiply@12.c)
 */

int __stdcall RtlSecondsSince1970ToTime(unsigned int a1, int *a2)
{
  int result; // eax
  int v3; // edx

  result = RtlExtendedIntegerMultiply(((unsigned int)SecondsToStartOf1970 | 0x200000000LL) + a1, 10000000);
  *a2 = result;
  a2[1] = v3;
  return result;
}
