/*
 * XREFs of _RtlpRegTziFormatToTzi@8 @ 0x4B2EABA6
 * Callers:
 *     _RtlpCheckDynamicTimeZoneInformation@8 @ 0x4B2EAAF0 (_RtlpCheckDynamicTimeZoneInformation@8.c)
 * Callees:
 *     _RtlpSystemTimeToTimeFields@8 @ 0x4B2EABDC (_RtlpSystemTimeToTimeFields@8.c)
 */

void __fastcall RtlpRegTziFormatToTzi(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  *a1 = *a2;
  a1[21] = a2[1];
  a1[42] = a2[2];
  RtlpSystemTimeToTimeFields(a1 + 17, a2 + 3);
  JUMPOUT(0x4B2EABDC);
}
