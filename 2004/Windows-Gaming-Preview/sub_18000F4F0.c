/*
 * XREFs of sub_18000F4F0 @ 0x18000F4F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012000 @ 0x180012000 (sub_180012000.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18000F4F0(__int64 a1, char a2)
{
  sub_180012000();
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 144LL);
  return a1;
}
