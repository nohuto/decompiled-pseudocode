/*
 * XREFs of sub_18003D2B0 @ 0x18003D2B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C8ACC @ 0x1800C8ACC (sub_1800C8ACC.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_18003D2B0(__int64 a1, char a2)
{
  sub_1800C8ACC(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
