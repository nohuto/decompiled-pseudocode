/*
 * XREFs of sub_18001A350 @ 0x18001A350
 * Callers:
 *     <none>
 * Callees:
 *     sub_180096EA4 @ 0x180096EA4 (sub_180096EA4.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_18001A350(__int64 a1, char a2)
{
  sub_180096EA4();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
