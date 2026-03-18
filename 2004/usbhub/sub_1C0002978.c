/*
 * XREFs of sub_1C0002978 @ 0x1C0002978
 * Callers:
 *     sub_1C000C0F0 @ 0x1C000C0F0 (sub_1C000C0F0.c)
 *     sub_1C000D970 @ 0x1C000D970 (sub_1C000D970.c)
 *     sub_1C003BD90 @ 0x1C003BD90 (sub_1C003BD90.c)
 * Callees:
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

__int64 __fastcall sub_1C0002978(__int64 a1, __int64 a2)
{
  int v4; // r9d
  int v5; // eax
  unsigned int v6; // r10d

  sub_1C000F050(a1);
  sub_1C000FD80(a1, 2048, 1346458174, 0, 0LL);
  v5 = sub_1C0002AF0(a1, a2, (unsigned int)(v4 + 8));
  sub_1C000FD80(a1, 2048, 1346458172, 0, v5);
  return v6;
}
