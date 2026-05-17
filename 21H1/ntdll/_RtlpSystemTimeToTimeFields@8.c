/*
 * XREFs of _RtlpSystemTimeToTimeFields@8 @ 0x4B2EABDC
 * Callers:
 *     _RtlpRegTziFormatToTzi@8 @ 0x4B2EABA6 (_RtlpRegTziFormatToTzi@8.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlpSystemTimeToTimeFields(_WORD *a1, _WORD *a2)
{
  __int16 result; // ax

  *a1 = *a2;
  a1[1] = a2[1];
  a1[7] = a2[2];
  a1[2] = a2[3];
  a1[3] = a2[4];
  a1[4] = a2[5];
  a1[5] = a2[6];
  result = a2[7];
  a1[6] = result;
  return result;
}
