/*
 * XREFs of sub_1C0041094 @ 0x1C0041094
 * Callers:
 *     sub_1C003DF14 @ 0x1C003DF14 (sub_1C003DF14.c)
 *     sub_1C003E6C4 @ 0x1C003E6C4 (sub_1C003E6C4.c)
 *     sub_1C003E9F8 @ 0x1C003E9F8 (sub_1C003E9F8.c)
 *     sub_1C003EC70 @ 0x1C003EC70 (sub_1C003EC70.c)
 *     sub_1C003EF34 @ 0x1C003EF34 (sub_1C003EF34.c)
 *     sub_1C003F208 @ 0x1C003F208 (sub_1C003F208.c)
 *     sub_1C003F498 @ 0x1C003F498 (sub_1C003F498.c)
 *     sub_1C003F948 @ 0x1C003F948 (sub_1C003F948.c)
 *     sub_1C003FC88 @ 0x1C003FC88 (sub_1C003FC88.c)
 *     sub_1C003FF9C @ 0x1C003FF9C (sub_1C003FF9C.c)
 *     sub_1C004028C @ 0x1C004028C (sub_1C004028C.c)
 *     sub_1C0040574 @ 0x1C0040574 (sub_1C0040574.c)
 *     sub_1C0040864 @ 0x1C0040864 (sub_1C0040864.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C00317D8 @ 0x1C00317D8 (sub_1C00317D8.c)
 */

LONG __fastcall sub_1C0041094(__int64 a1, unsigned int a2)
{
  _DWORD *v3; // rax
  struct _KEVENT *v4; // rax

  sub_1C000FD80(a1, 32, 1095774509, 0LL, a2);
  v3 = sub_1C000F050(a1);
  sub_1C00317D8(a1, (__int64)(v3 + 434));
  v4 = (struct _KEVENT *)sub_1C000F050(a1);
  return KeSetEvent(v4 + 205, 0, 0);
}
