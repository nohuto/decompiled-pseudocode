/*
 * XREFs of sub_1C003D1D8 @ 0x1C003D1D8
 * Callers:
 *     sub_1C003BD90 @ 0x1C003BD90 (sub_1C003BD90.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001A550 @ 0x1C001A550 (sub_1C001A550.c)
 */

__int64 __fastcall sub_1C003D1D8(__int64 a1)
{
  int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r11

  sub_1C000FD80(a1, 8, 1381192818, 0LL, 0LL);
  return sub_1C001A550(v3, v2, v1 + 11);
}
