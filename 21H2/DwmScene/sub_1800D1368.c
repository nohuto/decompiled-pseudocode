/*
 * XREFs of sub_1800D1368 @ 0x1800D1368
 * Callers:
 *     sub_1800344B0 @ 0x1800344B0 (sub_1800344B0.c)
 *     sub_180036E3C @ 0x180036E3C (sub_180036E3C.c)
 * Callees:
 *     unknown_libname_100 @ 0x180010C5C (unknown_libname_100.c)
 */

__int64 *__fastcall sub_1800D1368(__int64 *a1, int a2)
{
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  unknown_libname_100(a1, off_180213AB0[a2]);
  return a1;
}
