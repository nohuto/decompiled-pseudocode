/*
 * XREFs of sub_180028A90 @ 0x180028A90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180046958 @ 0x180046958 (sub_180046958.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_180028A90(__int64 a1, char a2)
{
  sub_180046958();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
