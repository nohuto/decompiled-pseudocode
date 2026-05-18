/*
 * XREFs of sub_180043FF0 @ 0x180043FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043F08 @ 0x180043F08 (sub_180043F08.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180043FF0(_QWORD *a1, char a2)
{
  sub_180043F08(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
