/*
 * XREFs of sub_180097160 @ 0x180097160
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D2A04 @ 0x1800D2A04 (sub_1800D2A04.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_180097160(__int64 a1, char a2)
{
  sub_1800D2A04();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
