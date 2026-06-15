/*
 * XREFs of sub_180073850 @ 0x180073850
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     sub_1801343A0 @ 0x1801343A0 (sub_1801343A0.c)
 */

_QWORD *__fastcall sub_180073850(_QWORD *a1, char a2)
{
  sub_180071C14(a1 + 8);
  sub_1801343A0(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
