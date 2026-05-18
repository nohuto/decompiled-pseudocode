/*
 * XREFs of sub_180028A00 @ 0x180028A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800277E8 @ 0x1800277E8 (sub_1800277E8.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_180028A00(__int64 a1, char a2)
{
  sub_1800277E8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
