/*
 * XREFs of sub_1800C8ED0 @ 0x1800C8ED0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C8B20 @ 0x1800C8B20 (sub_1800C8B20.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800C8ED0(_QWORD *a1, char a2)
{
  sub_1800C8B20(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
