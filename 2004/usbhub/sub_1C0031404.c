/*
 * XREFs of sub_1C0031404 @ 0x1C0031404
 * Callers:
 *     sub_1C003CBD8 @ 0x1C003CBD8 (sub_1C003CBD8.c)
 *     sub_1C003D4C8 @ 0x1C003D4C8 (sub_1C003D4C8.c)
 *     sub_1C004204C @ 0x1C004204C (sub_1C004204C.c)
 *     sub_1C0044420 @ 0x1C0044420 (sub_1C0044420.c)
 * Callees:
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 */

__int64 __fastcall sub_1C0031404(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v6; // eax
  unsigned int v7; // r10d

  v3 = a3;
  sub_1C000F050((__int64)a1);
  sub_1C000FD80((__int64)a1, 2048, 1346458174, v3, a2);
  *(_DWORD *)(a2 + 128) = v3;
  v6 = sub_1C0002AF0(a1, a2, 7);
  sub_1C000FD80((__int64)a1, 2048, 1346458172, 0LL, v6);
  return v7;
}
