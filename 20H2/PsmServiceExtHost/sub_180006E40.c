/*
 * XREFs of sub_180006E40 @ 0x180006E40
 * Callers:
 *     sub_180006D18 @ 0x180006D18 (sub_180006D18.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000FF28 @ 0x18000FF28 (sub_18000FF28.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 */

__int64 __fastcall sub_180006E40(__int64 a1)
{
  sub_18001E380(a1);
  sub_18000FF28(a1 - 64, 2LL);
  sub_1800093A0(a1, 0LL);
  sub_18001CC80(a1, 0LL);
  sub_18000A110(a1);
  return sub_18000F390();
}
