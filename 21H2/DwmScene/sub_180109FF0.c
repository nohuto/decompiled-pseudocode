/*
 * XREFs of sub_180109FF0 @ 0x180109FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180109DA0 @ 0x180109DA0 (sub_180109DA0.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180109FF0(_QWORD *a1, char a2)
{
  sub_180109DA0(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
