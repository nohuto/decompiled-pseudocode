/*
 * XREFs of sub_1800D97C0 @ 0x1800D97C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D9744 @ 0x1800D9744 (sub_1800D9744.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800D97C0(_QWORD *a1, char a2)
{
  sub_1800D9744(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
