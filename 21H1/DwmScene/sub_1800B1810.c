/*
 * XREFs of sub_1800B1810 @ 0x1800B1810
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C98E0 @ 0x1800C98E0 (sub_1800C98E0.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_1800B1810(__int64 a1, char a2)
{
  sub_1800C98E0(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
