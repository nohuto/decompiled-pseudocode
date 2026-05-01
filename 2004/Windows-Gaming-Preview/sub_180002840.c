/*
 * XREFs of sub_180002840 @ 0x180002840
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000287C @ 0x18000287C (sub_18000287C.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_180002840(__int64 a1, char a2)
{
  sub_18000287C();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 200LL);
  return a1;
}
