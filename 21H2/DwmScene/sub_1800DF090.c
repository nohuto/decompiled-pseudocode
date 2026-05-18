/*
 * XREFs of sub_1800DF090 @ 0x1800DF090
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DF014 @ 0x1800DF014 (sub_1800DF014.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DF090(_QWORD *a1, char a2)
{
  sub_1800DF014(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
