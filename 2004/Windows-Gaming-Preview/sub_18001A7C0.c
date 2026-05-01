/*
 * XREFs of sub_18001A7C0 @ 0x18001A7C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019324 @ 0x180019324 (sub_180019324.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18001A7C0(__int64 a1, char a2)
{
  sub_180019324(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 40LL);
  return a1;
}
