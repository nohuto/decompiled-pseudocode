/*
 * XREFs of sub_180037030 @ 0x180037030
 * Callers:
 *     <none>
 * Callees:
 *     sub_180036BDC @ 0x180036BDC (sub_180036BDC.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

_QWORD *__fastcall sub_180037030(_QWORD *a1, char a2)
{
  sub_180036BDC(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 224LL);
  return a1;
}
