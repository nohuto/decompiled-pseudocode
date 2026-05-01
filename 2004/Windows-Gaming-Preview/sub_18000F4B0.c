/*
 * XREFs of sub_18000F4B0 @ 0x18000F4B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000CDD4 @ 0x18000CDD4 (sub_18000CDD4.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18000F4B0(__int64 a1, char a2)
{
  sub_18000CDD4(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 72LL);
  return a1;
}
