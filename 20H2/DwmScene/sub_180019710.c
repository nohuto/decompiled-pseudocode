/*
 * XREFs of sub_180019710 @ 0x180019710
 * Callers:
 *     sub_180120829 @ 0x180120829 (sub_180120829.c)
 * Callees:
 *     sub_1800B1228 @ 0x1800B1228 (sub_1800B1228.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_180019710(__int64 a1, char a2)
{
  sub_1800B1228();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
