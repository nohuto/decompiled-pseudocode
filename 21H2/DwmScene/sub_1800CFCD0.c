/*
 * XREFs of sub_1800CFCD0 @ 0x1800CFCD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D2A04 @ 0x1800D2A04 (sub_1800D2A04.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

_QWORD *__fastcall sub_1800CFCD0(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::VertexBuffer::`vftable';
  sub_1800D2A04(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
