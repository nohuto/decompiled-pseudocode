/*
 * XREFs of sub_180036700 @ 0x180036700
 * Callers:
 *     <none>
 * Callees:
 *     sub_180035740 @ 0x180035740 (sub_180035740.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_180036700(__int64 a1, char a2)
{
  sub_180035740(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 72LL);
  return a1;
}
