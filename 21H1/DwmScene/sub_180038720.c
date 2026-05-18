/*
 * XREFs of sub_180038720 @ 0x180038720
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800386A8 @ 0x1800386A8 (sub_1800386A8.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_180038720(_QWORD *a1, char a2)
{
  sub_1800386A8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
