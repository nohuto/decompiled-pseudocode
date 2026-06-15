/*
 * XREFs of sub_1800738E0 @ 0x1800738E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 */

_QWORD *__fastcall sub_1800738E0(_QWORD *a1, char a2)
{
  sub_180071C14(a1 + 1);
  *a1 = off_18014AD38;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
