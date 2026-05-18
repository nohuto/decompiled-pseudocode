/*
 * XREFs of sub_1800B7170 @ 0x1800B7170
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D1D48 @ 0x1800D1D48 (sub_1800D1D48.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_1800B7170(__int64 a1, char a2)
{
  sub_1800D1D48(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
