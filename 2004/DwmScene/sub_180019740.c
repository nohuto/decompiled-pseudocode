/*
 * XREFs of sub_180019740 @ 0x180019740
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009B244 @ 0x18009B244 (sub_18009B244.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_180019740(__int64 a1, char a2)
{
  sub_18009B244();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
