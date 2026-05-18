/*
 * XREFs of sub_1800DFBC0 @ 0x1800DFBC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DFA78 @ 0x1800DFA78 (sub_1800DFA78.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DFBC0(_QWORD *a1, char a2)
{
  sub_1800DFA78(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
