/*
 * XREFs of sub_1800CA400 @ 0x1800CA400
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CD134 @ 0x1800CD134 (sub_1800CD134.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800CA400(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::VertexBuffer::`vftable';
  sub_1800CD134(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
