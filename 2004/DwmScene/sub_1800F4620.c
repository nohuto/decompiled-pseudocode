/*
 * XREFs of sub_1800F4620 @ 0x1800F4620
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F42E8 @ 0x1800F42E8 (sub_1800F42E8.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800F4620(_QWORD *a1, char a2)
{
  sub_1800F42E8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
