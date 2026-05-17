/*
 * XREFs of RtlpTimeFieldsToTimeNoLeapSeconds @ 0x18005B174
 * Callers:
 *     RtlpTimeFieldsToTime @ 0x18005B070 (RtlpTimeFieldsToTime.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpTimeFieldsToTimeNoLeapSeconds(__int16 *a1, _QWORD *a2)
{
  int v2; // r10d
  unsigned int v3; // r8d
  int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // r9d
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  unsigned int v9; // esi
  unsigned int v10; // r11d
  int v12; // eax
  int v13; // ecx
  __int16 v14; // r8
  char result; // al

  v2 = a1[1];
  v3 = *a1;
  v4 = a1[2] - 1;
  v5 = a1[3];
  v6 = v2 - 1;
  v7 = a1[4];
  v8 = a1[5];
  v9 = a1[6];
  if ( a1[1] < 1 )
    return 0;
  if ( a1[2] < 1 )
    return 0;
  v10 = v3 - 1601;
  if ( v3 - 1601 > 0x722A || v6 > 0xB )
    return 0;
  if ( v3 == 400 * (v3 / 0x190) || v3 != 100 * (v3 / 0x64) && (v3 & 3) == 0 )
  {
    v12 = LeapYearDaysPrecedingMonth[v6];
    v13 = LeapYearDaysPrecedingMonth[v2];
  }
  else
  {
    v12 = NormalYearDaysPrecedingMonth[v6];
    v13 = NormalYearDaysPrecedingMonth[v2];
  }
  if ( (__int16)v4 >= v13 - v12 || v5 > 0x17 || v7 > 0x3B || v8 > 0x3B || v9 > 0x3E7 )
    return 0;
  if ( v3 - 1600 != 400 * ((v3 - 1600) / 0x190) && (v3 - 1600 == 100 * ((v3 - 1600) / 0x64) || (v3 & 3) != 0) )
    v14 = NormalYearDaysPrecedingMonth[v6];
  else
    v14 = LeapYearDaysPrecedingMonth[v6];
  result = 1;
  *a2 = 10000
      * (v9
       + 1000 * (v8 + 60 * (v7 + 60 * v5))
       + 86400000LL * (int)(v4 + (v10 >> 2) + v10 / 0x190 - v10 / 0x64 + 365 * v10 + v14));
  return result;
}
