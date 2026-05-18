/*
 * XREFs of sub_1800CABE0 @ 0x1800CABE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CAA68 @ 0x1800CAA68 (sub_1800CAA68.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 *__fastcall sub_1800CABE0(__int64 *a1, char a2)
{
  sub_1800CAA68(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
