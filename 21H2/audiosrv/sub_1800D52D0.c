/*
 * XREFs of sub_1800D52D0 @ 0x1800D52D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800D4FEC @ 0x1800D4FEC (sub_1800D4FEC.c)
 */

_QWORD *__fastcall sub_1800D52D0(_QWORD *a1, char a2)
{
  sub_1800D4FEC(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
