/*
 * XREFs of sub_1800B18A0 @ 0x1800B18A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CC478 @ 0x1800CC478 (sub_1800CC478.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_1800B18A0(__int64 a1, char a2)
{
  sub_1800CC478(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
