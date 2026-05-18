/*
 * XREFs of sub_1800F9EF0 @ 0x1800F9EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F9BB8 @ 0x1800F9BB8 (sub_1800F9BB8.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800F9EF0(_QWORD *a1, char a2)
{
  sub_1800F9BB8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
