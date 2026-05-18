/*
 * XREFs of sub_1800B70A0 @ 0x1800B70A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D041C @ 0x1800D041C (sub_1800D041C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800B70A0(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::DepthBufferGeneric::`vftable';
  sub_1800D041C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
