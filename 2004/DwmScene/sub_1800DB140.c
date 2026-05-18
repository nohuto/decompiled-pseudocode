/*
 * XREFs of sub_1800DB140 @ 0x1800DB140
 * Callers:
 *     <none>
 * Callees:
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DB140(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::ScissorState::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
