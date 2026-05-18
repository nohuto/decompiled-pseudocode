/*
 * XREFs of sub_1800424C0 @ 0x1800424C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C8A9C @ 0x1800C8A9C (sub_1800C8A9C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_1800424C0(__int64 a1, char a2)
{
  sub_1800C8A9C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
