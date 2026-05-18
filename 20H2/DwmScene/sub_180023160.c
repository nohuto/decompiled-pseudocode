/*
 * XREFs of sub_180023160 @ 0x180023160
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800220E8 @ 0x1800220E8 (sub_1800220E8.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_180023160(_QWORD *a1, char a2)
{
  sub_1800220E8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
