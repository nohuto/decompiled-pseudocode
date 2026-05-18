/*
 * XREFs of sub_180084360 @ 0x180084360
 * Callers:
 *     <none>
 * Callees:
 *     sub_180083830 @ 0x180083830 (sub_180083830.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180084360(_QWORD *a1, char a2)
{
  sub_180083830(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
