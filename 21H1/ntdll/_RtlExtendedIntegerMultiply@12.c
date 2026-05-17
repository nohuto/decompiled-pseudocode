/*
 * XREFs of _RtlExtendedIntegerMultiply@12 @ 0x4B308450
 * Callers:
 *     _RtlpTimeFieldsToTimeNoLeapSeconds@8 @ 0x4B2DD021 (_RtlpTimeFieldsToTimeNoLeapSeconds@8.c)
 *     _RtlSecondsSince1970ToTime@8 @ 0x4B344D70 (_RtlSecondsSince1970ToTime@8.c)
 *     _RtlSecondsSince1980ToTime@8 @ 0x4B344DB0 (_RtlSecondsSince1980ToTime@8.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlExtendedIntegerMultiply(__int64 a1, int a2)
{
  int v2; // esi
  int v3; // ecx

  v2 = HIDWORD(a1) ^ a2;
  if ( a1 < 0 )
    a1 = -a1;
  if ( a2 < 0 )
    a2 = -a2;
  v3 = a1 * a2;
  if ( v2 < 0 )
    return -v3;
  return v3;
}
