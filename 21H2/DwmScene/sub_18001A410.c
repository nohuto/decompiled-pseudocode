/*
 * XREFs of sub_18001A410 @ 0x18001A410
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800198CC @ 0x1800198CC (sub_1800198CC.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_18001A410(__int64 a1, char a2)
{
  sub_1800198CC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
