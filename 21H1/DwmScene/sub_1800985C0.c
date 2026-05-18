/*
 * XREFs of sub_1800985C0 @ 0x1800985C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008A530 @ 0x18008A530 (sub_18008A530.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800985C0(_QWORD *a1, char a2)
{
  *a1 = &Spectre::Engine::Bounds::`vftable';
  sub_18008A530(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
