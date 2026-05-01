/*
 * XREFs of sub_180022CC0 @ 0x180022CC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020BA0 @ 0x180020BA0 (sub_180020BA0.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_180022CC0(__int64 a1, char a2)
{
  sub_180020BA0(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 72LL);
  return a1;
}
