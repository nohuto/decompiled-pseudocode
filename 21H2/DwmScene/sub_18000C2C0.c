/*
 * XREFs of sub_18000C2C0 @ 0x18000C2C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C1CC @ 0x18000C1CC (sub_18000C1CC.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_18000C2C0(__int64 a1, char a2)
{
  sub_18000C1CC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
