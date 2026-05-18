/*
 * XREFs of sub_180040840 @ 0x180040840
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800407F8 @ 0x1800407F8 (sub_1800407F8.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_180040840(_QWORD *a1, char a2)
{
  sub_1800407F8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
