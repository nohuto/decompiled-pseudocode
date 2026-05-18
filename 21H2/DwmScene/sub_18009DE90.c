/*
 * XREFs of sub_18009DE90 @ 0x18009DE90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008FE00 @ 0x18008FE00 (sub_18008FE00.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_18009DE90(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::Bounds::`vftable';
  sub_18008FE00(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
