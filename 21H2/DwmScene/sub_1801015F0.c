/*
 * XREFs of sub_1801015F0 @ 0x1801015F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180101584 @ 0x180101584 (sub_180101584.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1801015F0(_QWORD *a1, char a2)
{
  sub_180101584(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
