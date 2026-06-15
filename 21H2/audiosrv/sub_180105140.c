/*
 * XREFs of sub_180105140 @ 0x180105140
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 */

_QWORD *__fastcall sub_180105140(_QWORD *a1, char a2)
{
  *a1 = off_18014AD68;
  if ( (a2 & 1) != 0 )
    sub_180033A70(a1);
  return a1;
}
