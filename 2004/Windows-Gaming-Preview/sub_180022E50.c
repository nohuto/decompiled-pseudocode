/*
 * XREFs of sub_180022E50 @ 0x180022E50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180021F60 @ 0x180021F60 (sub_180021F60.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_180022E50(__int64 a1, char a2)
{
  sub_180021F60(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 72LL);
  return a1;
}
