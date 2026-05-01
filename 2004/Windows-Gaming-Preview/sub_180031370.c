/*
 * XREFs of sub_180031370 @ 0x180031370
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038510 @ 0x180038510 (sub_180038510.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_180031370(__int64 a1, char a2)
{
  sub_180038510();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 144LL);
  return a1;
}
