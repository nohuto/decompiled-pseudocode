/*
 * XREFs of sub_1800E0868 @ 0x1800E0868
 * Callers:
 *     sub_1800E0C94 @ 0x1800E0C94 (sub_1800E0C94.c)
 *     sub_18012DBEA @ 0x18012DBEA (sub_18012DBEA.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800E0868(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ViewportState::`vftable';
  *a1 = &Spectre::Engine::ViewportState::`vftable';
  return result;
}
