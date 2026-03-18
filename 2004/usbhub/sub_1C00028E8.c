/*
 * XREFs of sub_1C00028E8 @ 0x1C00028E8
 * Callers:
 *     sub_1C000FE00 @ 0x1C000FE00 (sub_1C000FE00.c)
 * Callees:
 *     sub_1C0003610 @ 0x1C0003610 (sub_1C0003610.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

__int64 __fastcall sub_1C00028E8(__int64 a1, int a2, int a3)
{
  __int64 v6; // rsi
  signed __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // r9
  __int64 v10; // r10
  int v11; // r11d
  __int64 v12; // rdx
  __int64 v13; // r10

  v6 = sub_1C000F050(a1);
  v7 = sub_1C0004060(a1, a2, a1, 1649439603, a3);
  result = sub_1C000FD80(
             a1,
             0x10000,
             1213419563,
             _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 3312), v7, 0LL),
             v7);
  if ( v9 )
  {
    sub_1C000FD80(a1, v11, 1213419570, v9, v10);
    return sub_1C0003610(a1, v12, v13);
  }
  return result;
}
