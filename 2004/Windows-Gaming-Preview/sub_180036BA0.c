/*
 * XREFs of sub_180036BA0 @ 0x180036BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180035258 @ 0x180035258 (sub_180035258.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

_QWORD *__fastcall sub_180036BA0(_QWORD *a1, char a2)
{
  sub_180035258(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 136LL);
  return a1;
}
