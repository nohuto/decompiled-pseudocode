/*
 * XREFs of sub_18007D960 @ 0x18007D960
 * Callers:
 *     sub_18007FFAC @ 0x18007FFAC (sub_18007FFAC.c)
 * Callees:
 *     sub_180005700 @ 0x180005700 (sub_180005700.c)
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180017EA0 @ 0x180017EA0 (sub_180017EA0.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 */

__int64 __fastcall sub_18007D960(__int64 a1)
{
  sub_18001E380();
  while ( *(char *)(a1 + 1184) < 0 || *(char *)(a1 + 1180) >= 0 )
    sub_180005700((__int64)&unk_1800B4210, a1 + 1168, 0LL);
  sub_18000F390();
  sub_1800093A0(a1, 0);
  *(_QWORD *)(a1 + 648) &= ~0x20000000000000uLL;
  sub_180017EA0(a1);
  sub_18000A110(a1);
  return RtlWakeAddressAll(a1 + 648);
}
