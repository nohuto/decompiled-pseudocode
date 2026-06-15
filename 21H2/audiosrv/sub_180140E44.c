/*
 * XREFs of sub_180140E44 @ 0x180140E44
 * Callers:
 *     sub_1800753B0 @ 0x1800753B0 (sub_1800753B0.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_180140DD4 @ 0x180140DD4 (sub_180140DD4.c)
 */

_QWORD *__fastcall sub_180140E44(_QWORD *a1, char a2)
{
  sub_180140DD4(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
