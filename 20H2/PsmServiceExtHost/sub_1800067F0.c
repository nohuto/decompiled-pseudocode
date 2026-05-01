/*
 * XREFs of sub_1800067F0 @ 0x1800067F0
 * Callers:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_180005750 @ 0x180005750 (sub_180005750.c)
 *     sub_180006018 @ 0x180006018 (sub_180006018.c)
 *     sub_1800062C8 @ 0x1800062C8 (sub_1800062C8.c)
 *     sub_1800065A4 @ 0x1800065A4 (sub_1800065A4.c)
 *     sub_1800066B0 @ 0x1800066B0 (sub_1800066B0.c)
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 *     sub_180046950 @ 0x180046950 (sub_180046950.c)
 *     sub_18007D3AC @ 0x18007D3AC (sub_18007D3AC.c)
 *     sub_18007DF84 @ 0x18007DF84 (sub_18007DF84.c)
 *     sub_18007EB50 @ 0x18007EB50 (sub_18007EB50.c)
 * Callees:
 *     sub_1800468FC @ 0x1800468FC (sub_1800468FC.c)
 */

_BOOL8 __fastcall sub_1800067F0(__int64 a1, int a2)
{
  _BOOL8 result; // rax
  __int64 v4; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  result = 0;
  if ( (*(_QWORD *)(a1 + 648) & 0x10000000000LL) == 0 )
  {
    sub_1800468FC(a1, &v6, &v5);
    if ( ((v6 & 0x80u) == 0 || (v5 & 0x80u) != 0) && ((v6 & 0x100) == 0 || (v5 & 0x100) != 0) )
    {
      v4 = *(_QWORD *)(a1 + 648);
      if ( (v4 & 0x800000000LL) == 0 && ((v4 & 0x40000000000LL) == 0 || (v4 & 0x30000) == 0) )
        return 1;
    }
  }
  return result;
}
