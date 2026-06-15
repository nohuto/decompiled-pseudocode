/*
 * XREFs of sub_1800BC6FC @ 0x1800BC6FC
 * Callers:
 *     sub_180010670 @ 0x180010670 (sub_180010670.c)
 *     sub_180012550 @ 0x180012550 (sub_180012550.c)
 *     sub_180020090 @ 0x180020090 (sub_180020090.c)
 *     sub_180054490 @ 0x180054490 (sub_180054490.c)
 *     sub_1800BC404 @ 0x1800BC404 (sub_1800BC404.c)
 *     sub_1800D2600 @ 0x1800D2600 (sub_1800D2600.c)
 *     sub_18012E520 @ 0x18012E520 (sub_18012E520.c)
 * Callees:
 *     sub_1800BC5E0 @ 0x1800BC5E0 (sub_1800BC5E0.c)
 */

__int64 sub_1800BC6FC(int a1, int a2, int a3, int a4, const char *a5, ...)
{
  int v6; // [rsp+20h] [rbp-38h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  return sub_1800BC5E0(a1, a2, a3, a4, v6, retaddr, 1, a4, (__int64)a5, (__int64)va);
}
