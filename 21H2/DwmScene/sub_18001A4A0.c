/*
 * XREFs of sub_18001A4A0 @ 0x18001A4A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009F15C @ 0x18009F15C (sub_18009F15C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_18001A4A0(__int64 a1, char a2)
{
  sub_18009F15C();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
