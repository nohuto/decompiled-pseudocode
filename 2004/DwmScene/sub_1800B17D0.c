/*
 * XREFs of sub_1800B17D0 @ 0x1800B17D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CAB4C @ 0x1800CAB4C (sub_1800CAB4C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800B17D0(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::DepthBufferGeneric::`vftable';
  sub_1800CAB4C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
