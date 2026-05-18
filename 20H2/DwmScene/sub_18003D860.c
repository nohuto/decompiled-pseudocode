/*
 * XREFs of sub_18003D860 @ 0x18003D860
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003D7B4 @ 0x18003D7B4 (sub_18003D7B4.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_18003D860(_QWORD *a1, char a2)
{
  sub_18003D7B4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
