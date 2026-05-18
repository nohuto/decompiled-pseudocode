/*
 * XREFs of sub_18001A470 @ 0x18001A470
 * Callers:
 *     <none>
 * Callees:
 *     sub_180022C1C @ 0x180022C1C (sub_180022C1C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_18001A470(__int64 a1, char a2)
{
  sub_180022C1C();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
