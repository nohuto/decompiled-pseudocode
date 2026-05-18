/*
 * XREFs of sub_1801143B0 @ 0x1801143B0
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1801143B0(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Utils::ITimeProvider::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
