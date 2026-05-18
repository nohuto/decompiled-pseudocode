/*
 * XREFs of sub_18004681C @ 0x18004681C
 * Callers:
 *     sub_180027144 @ 0x180027144 (sub_180027144.c)
 * Callees:
 *     sub_1800D1C14 @ 0x1800D1C14 (sub_1800D1C14.c)
 */

_QWORD *__fastcall sub_18004681C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800D1C14();
  *a1 = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  result = a1;
  a1[18] = 0LL;
  return result;
}
