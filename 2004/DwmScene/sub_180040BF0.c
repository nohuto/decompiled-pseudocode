/*
 * XREFs of sub_180040BF0 @ 0x180040BF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C98D4 @ 0x1800C98D4 (sub_1800C98D4.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_180040BF0(__int64 a1, char a2)
{
  sub_1800C98D4();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
