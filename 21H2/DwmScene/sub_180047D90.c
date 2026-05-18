/*
 * XREFs of sub_180047D90 @ 0x180047D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CE36C @ 0x1800CE36C (sub_1800CE36C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_180047D90(__int64 a1, char a2)
{
  sub_1800CE36C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
