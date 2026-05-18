/*
 * XREFs of sub_180048130 @ 0x180048130
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CE38C @ 0x1800CE38C (sub_1800CE38C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_180048130(__int64 a1, char a2)
{
  sub_1800CE38C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
