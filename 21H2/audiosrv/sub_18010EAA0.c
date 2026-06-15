/*
 * XREFs of sub_18010EAA0 @ 0x18010EAA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1801106E0 @ 0x1801106E0 (sub_1801106E0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18010EAA0(_QWORD *a1, char a2)
{
  *a1 = &off_18014ADF8;
  if ( a1[3] )
    sub_1801106E0();
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
