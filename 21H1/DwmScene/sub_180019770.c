/*
 * XREFs of sub_180019770 @ 0x180019770
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018DC4 @ 0x180018DC4 (sub_180018DC4.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_180019770(_QWORD *a1, char a2)
{
  sub_180018DC4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
