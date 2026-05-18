/*
 * XREFs of sub_1800DAF98 @ 0x1800DAF98
 * Callers:
 *     sub_1800DB3C4 @ 0x1800DB3C4 (sub_1800DB3C4.c)
 *     sub_1801282D2 @ 0x1801282D2 (sub_1801282D2.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800DAF98(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ViewportState::`vftable';
  *a1 = &Spectre::Engine::ViewportState::`vftable';
  return result;
}
