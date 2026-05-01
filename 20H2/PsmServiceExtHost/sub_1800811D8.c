/*
 * XREFs of sub_1800811D8 @ 0x1800811D8
 * Callers:
 *     sub_18007AA80 @ 0x18007AA80 (sub_18007AA80.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18007FA28 @ 0x18007FA28 (sub_18007FA28.c)
 */

__int64 __fastcall sub_1800811D8(__int64 a1)
{
  int *v2; // rsi
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rcx

  sub_1800093A0(*(_QWORD *)(a1 + 80), 0);
  v2 = (int *)(a1 + 544);
  v3 = *(_DWORD *)(a1 + 544);
  if ( (v3 & 1) != 0 )
  {
    v4 = -1073740682;
  }
  else if ( *(_BYTE *)(a1 + 548) == 4 )
  {
    v4 = -1073741275;
  }
  else if ( (v3 & 8) != 0 )
  {
    v4 = -1058275327;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 80);
    *v2 = v3 | 1;
    sub_18000A110(v5);
    v4 = sub_18007FA28(*(_QWORD *)(a1 + 88));
    sub_1800093A0(*(_QWORD *)(a1 + 80), 0);
    *v2 &= ~1u;
    if ( v4 >= 0 )
      v4 = 0;
  }
  sub_18000A110(*(_QWORD *)(a1 + 80));
  RtlWakeAddressAll(a1 + 544);
  return (unsigned int)v4;
}
