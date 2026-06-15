/*
 * XREFs of sub_1800CE080 @ 0x1800CE080
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800CDBA8 @ 0x1800CDBA8 (sub_1800CDBA8.c)
 */

_QWORD *__fastcall sub_1800CE080(_QWORD *a1, char a2)
{
  sub_1800CDBA8(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
