/*
 * XREFs of sub_1C003D9B0 @ 0x1C003D9B0
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
 *     sub_1C0031714 @ 0x1C0031714 (sub_1C0031714.c)
 */

__int64 __fastcall sub_1C003D9B0(__int64 a1, unsigned int a2, _BYTE *a3)
{
  __int64 v3; // rbx
  _DWORD *v6; // rax
  int v7; // esi
  _DWORD *v8; // rax
  int v9; // eax
  __int64 v10; // r10

  v3 = a2;
  sub_1C000FD80(a1, 32, 1095774507, 0LL, a2);
  v6 = sub_1C000F050(a1);
  v7 = 0;
  KeWaitForSingleObject(v6 + 1230, Executive, 0, 0, 0LL);
  v8 = sub_1C000F050(a1);
  v9 = sub_1C0031714(a1, (__int64)(v8 + 434), 11, v3, 1);
  v10 = v9;
  *a3 = 1;
  if ( v9 != 5 )
  {
    if ( v9 == 6 )
      sub_1C000FD80(a1, 32, 1095774563, 0LL, v3);
    v7 = -1073741810;
  }
  sub_1C000FD80(a1, 32, 1095774497, v7, v10);
  return (unsigned int)v7;
}
