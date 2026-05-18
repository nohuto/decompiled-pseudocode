/*
 * XREFs of sub_180067D90 @ 0x180067D90
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_180067D90(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::IVisitable::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
