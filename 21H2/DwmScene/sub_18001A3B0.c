/*
 * XREFs of sub_18001A3B0 @ 0x18001A3B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A0B14 @ 0x1800A0B14 (sub_1800A0B14.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_18001A3B0(__int64 a1, char a2)
{
  sub_1800A0B14();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
