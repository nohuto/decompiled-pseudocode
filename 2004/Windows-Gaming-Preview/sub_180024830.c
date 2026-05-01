/*
 * XREFs of sub_180024830 @ 0x180024830
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023E18 @ 0x180023E18 (sub_180023E18.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

_QWORD *__fastcall sub_180024830(_QWORD *a1, char a2)
{
  sub_180023E18(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 224LL);
  return a1;
}
