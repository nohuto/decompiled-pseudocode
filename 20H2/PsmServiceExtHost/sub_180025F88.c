/*
 * XREFs of sub_180025F88 @ 0x180025F88
 * Callers:
 *     sub_180026CFC @ 0x180026CFC (sub_180026CFC.c)
 *     sub_180029BA8 @ 0x180029BA8 (sub_180029BA8.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180026040 @ 0x180026040 (sub_180026040.c)
 *     sub_18002606C @ 0x18002606C (sub_18002606C.c)
 */

__int64 __fastcall sub_180025F88(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  sub_18002606C(&v7);
  sub_18001E380();
  sub_180026040(a1);
  sub_18000F390();
  sub_1800093A0((__int64)a1, 0);
  v2 = a1[81];
  if ( (v2 & 0x2000000000000LL) != 0 )
    a1[127] = v7;
  else
    a1[126] = v7;
  v3 = v2 | 0x2000000000000000LL;
  a1[81] = v3 | 0x1000000000000000LL;
  sub_18000A110((__int64)a1);
  if ( (v3 & 0x1000000000000000LL) != 0 )
  {
    sub_18001E380();
    if ( a1[74]-- == 1LL )
      sub_18000A1AC((__int64)(a1 - 8), v5);
    sub_18000F390();
  }
  return sub_180023D30(*(_QWORD *)(a1[97] + 88LL));
}
