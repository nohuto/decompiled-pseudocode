/*
 * XREFs of sub_1801110C0 @ 0x1801110C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18011102C @ 0x18011102C (sub_18011102C.c)
 */

_QWORD *__fastcall sub_1801110C0(_QWORD *a1, char a2)
{
  *a1 = &off_18014AF40;
  sub_18011102C((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
