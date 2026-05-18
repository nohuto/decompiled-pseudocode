/*
 * XREFs of sub_1800197D0 @ 0x1800197D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018F20 @ 0x180018F20 (sub_180018F20.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_1800197D0(__int64 a1, char a2)
{
  sub_180018F20(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
