/*
 * XREFs of sub_1800DB128 @ 0x1800DB128
 * Callers:
 *     sub_1800DB3C4 @ 0x1800DB3C4 (sub_1800DB3C4.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800DB128(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ScissorState::`vftable';
  *a1 = &Spectre::Engine::ScissorState::`vftable';
  return result;
}
