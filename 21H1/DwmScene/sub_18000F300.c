/*
 * XREFs of sub_18000F300 @ 0x18000F300
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018F84 @ 0x180018F84 (sub_180018F84.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_18000F300(__int64 a1, char a2)
{
  sub_180018F84();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
