/*
 * XREFs of sub_1800DADC0 @ 0x1800DADC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DAD10 @ 0x1800DAD10 (sub_1800DAD10.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DADC0(_QWORD *a1, char a2)
{
  sub_1800DAD10(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
