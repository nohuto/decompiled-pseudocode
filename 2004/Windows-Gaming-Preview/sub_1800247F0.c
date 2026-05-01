/*
 * XREFs of sub_1800247F0 @ 0x1800247F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023ED8 @ 0x180023ED8 (sub_180023ED8.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

_QWORD *__fastcall sub_1800247F0(_QWORD *a1, char a2)
{
  sub_180023ED8(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 224LL);
  return a1;
}
