/*
 * XREFs of _RtlpTimeToTimeFieldsNoLeapSeconds@8 @ 0x4B2DCDB3
 * Callers:
 *     _RtlpTimeToTimeFields@12 @ 0x4B2DCCE0 (_RtlpTimeToTimeFields@12.c)
 * Callees:
 *     _ElapsedDaysToYears@4 @ 0x4B2DCEDF (_ElapsedDaysToYears@4.c)
 *     _RtlExtendedMagicDivide@20 @ 0x4B3083C0 (_RtlExtendedMagicDivide@20.c)
 */

unsigned int __fastcall RtlpTimeToTimeFieldsNoLeapSeconds(_DWORD *a1, _WORD *a2)
{
  __int64 v3; // rax
  int v4; // esi
  int v5; // edi
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  __int16 v8; // ax
  __int16 v9; // bx
  unsigned int v10; // eax
  unsigned int result; // eax
  unsigned int v12; // et2
  unsigned int v13; // [esp+Ch] [ebp-10h]
  int v15; // [esp+14h] [ebp-8h]
  unsigned int v16; // [esp+18h] [ebp-4h]

  v3 = RtlExtendedMagicDivide(*a1, a1[1], Magic10000, -776530088, 13);
  v4 = v3;
  v5 = RtlExtendedMagicDivide(v3, HIDWORD(v3), Magic86400000, -958967573, 26);
  v13 = v4 - 86400000 * v5;
  a2[7] = (v5 + 1) % 7u;
  v16 = ElapsedDaysToYears(v5);
  v6 = v16 + 1;
  v7 = -365 * v16 - v16 / 0x190 - (v16 >> 2) + v5 + v16 / 0x64;
  if ( (v16 + 1) % 0x190 && (!(v6 % 0x64) || (v6 & 3) != 0) )
  {
    v15 = (unsigned __int8)NormalYearDayToMonth[v7];
    v8 = NormalYearDaysPrecedingMonth[v15];
  }
  else
  {
    v15 = (unsigned __int8)LeapYearDayToMonth[v7];
    v8 = LeapYearDaysPrecedingMonth[v15];
  }
  v9 = v7 - v8;
  v10 = v13 / 0x3E8 / 0x3C;
  *a2 = v16 + 1601;
  a2[1] = v15 + 1;
  a2[2] = v9 + 1;
  v12 = v10 % 0x3C;
  result = v10 / 0x3C;
  a2[6] = v13 % 0x3E8;
  a2[5] = v13 / 0x3E8 % 0x3C;
  a2[3] = result;
  a2[4] = v12;
  return result;
}
