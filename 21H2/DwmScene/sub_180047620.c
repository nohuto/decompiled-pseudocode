/*
 * XREFs of sub_180047620 @ 0x180047620
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CE758 @ 0x1800CE758 (sub_1800CE758.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_180047620(__int64 a1, char a2)
{
  sub_1800CE758(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
