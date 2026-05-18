/*
 * XREFs of sub_180034190 @ 0x180034190
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033BA0 @ 0x180033BA0 (sub_180033BA0.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180034190(_QWORD *a1, char a2)
{
  sub_180033BA0(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
