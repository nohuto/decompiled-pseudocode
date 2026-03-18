/*
 * XREFs of sub_1C0031390 @ 0x1C0031390
 * Callers:
 *     sub_1C000DC30 @ 0x1C000DC30 (sub_1C000DC30.c)
 *     sub_1C003CBD8 @ 0x1C003CBD8 (sub_1C003CBD8.c)
 *     sub_1C003D4C8 @ 0x1C003D4C8 (sub_1C003D4C8.c)
 * Callees:
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

__int64 __fastcall sub_1C0031390(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  int v4; // r9d
  int v5; // eax
  unsigned int v6; // r10d

  sub_1C000F050((__int64)a1);
  sub_1C000FD80((__int64)a1, 2048, 1111774014, 0LL, 0LL);
  v5 = sub_1C0002AF0(a1, a2, v4 + 11);
  sub_1C000FD80((__int64)a1, 2048, 1111774012, 0LL, v5);
  return v6;
}
