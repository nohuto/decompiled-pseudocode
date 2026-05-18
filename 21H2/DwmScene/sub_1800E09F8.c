/*
 * XREFs of sub_1800E09F8 @ 0x1800E09F8
 * Callers:
 *     sub_1800E0C94 @ 0x1800E0C94 (sub_1800E0C94.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800E09F8(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ScissorState::`vftable';
  *a1 = &Spectre::Engine::ScissorState::`vftable';
  return result;
}
