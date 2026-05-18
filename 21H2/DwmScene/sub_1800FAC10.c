/*
 * XREFs of sub_1800FAC10 @ 0x1800FAC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FAB10 @ 0x1800FAB10 (sub_1800FAB10.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800FAC10(_QWORD *a1, char a2)
{
  sub_1800FAB10(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
