/*
 * XREFs of sub_18001AB20 @ 0x18001AB20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001A184 @ 0x18001A184 (sub_18001A184.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18001AB20(__int64 a1, char a2)
{
  sub_18001A184(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 32LL);
  return a1;
}
