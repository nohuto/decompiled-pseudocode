/*
 * XREFs of sub_180039DB0 @ 0x180039DB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800021C0 @ 0x1800021C0 (sub_1800021C0.c)
 */

_QWORD *__fastcall sub_180039DB0(_QWORD *a1, char a2)
{
  *a1 = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1800021C0(a1);
  return a1;
}
