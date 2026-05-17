/*
 * XREFs of _RtlpTimeFieldsToTimeNoLeapSeconds@8 @ 0x4B2DD021
 * Callers:
 *     _RtlpTimeFieldsToTime@12 @ 0x4B2DCF80 (_RtlpTimeFieldsToTime@12.c)
 * Callees:
 *     _RtlExtendedIntegerMultiply@12 @ 0x4B308450 (_RtlExtendedIntegerMultiply@12.c)
 */

char __fastcall RtlpTimeFieldsToTimeNoLeapSeconds(__int16 *a1, _QWORD *a2)
{
  __int16 v2; // ax
  unsigned int v3; // ebx
  __int16 v4; // di
  unsigned int v5; // esi
  int v7; // ecx
  int v8; // eax
  __int16 v9; // dx
  __int64 v11; // [esp-Ch] [ebp-38h]
  int v13; // [esp+10h] [ebp-1Ch]
  unsigned int v14; // [esp+14h] [ebp-18h]
  unsigned int v15; // [esp+18h] [ebp-14h]
  unsigned int v16; // [esp+1Ch] [ebp-10h]
  unsigned int v17; // [esp+20h] [ebp-Ch]

  v2 = a1[1];
  v3 = *a1;
  v4 = a1[2];
  v5 = v2 - 1;
  v13 = v4 - 1;
  v17 = a1[3];
  v16 = a1[4];
  v14 = a1[6];
  v15 = a1[5];
  if ( v2 < 1 || v4 < 1 || v3 - 1601 > 0x722A || v5 > 0xB )
    return 0;
  if ( !(v3 % 0x190) || v3 % 0x64 && (v3 & 3) == 0 )
  {
    v7 = word_4B2884F6[v5];
    v8 = LeapYearDaysPrecedingMonth[v5];
  }
  else
  {
    v7 = word_4B2887F2[v5];
    v8 = NormalYearDaysPrecedingMonth[v5];
  }
  if ( (__int16)v13 >= v7 - v8 || v17 > 0x17 || v16 > 0x3B || v15 > 0x3B || v14 > 0x3E7 )
    return 0;
  if ( (v3 - 1600) % 0x190 && (!((v3 - 1600) % 0x64) || (v3 & 3) != 0) )
    v9 = NormalYearDaysPrecedingMonth[v5];
  else
    v9 = LeapYearDaysPrecedingMonth[v5];
  v11 = v14
      + 1000 * (v15 + 60 * (v16 + 60 * v17))
      + 86400000LL * (int)(v13 + 365 * (v3 - 1601) + (v3 - 1601) / 0x190 - (v3 - 1601) / 0x64 + ((v3 - 1601) >> 2) + v9);
  *a2 = RtlExtendedIntegerMultiply(v11, HIDWORD(v11), 10000);
  return 1;
}
