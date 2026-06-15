/*
 * XREFs of sub_1800EA77C @ 0x1800EA77C
 * Callers:
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     unknown_libname_302 @ 0x1800EA490 (unknown_libname_302.c)
 *     sub_1800EDDB4 @ 0x1800EDDB4 (sub_1800EDDB4.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

LPVOID *__fastcall sub_1800EA77C(LPVOID *a1)
{
  CoTaskMemFree(a1[1]);
  a1[1] = 0LL;
  sub_18006A148(a1);
  return a1;
}
