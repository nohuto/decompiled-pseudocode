/*
 * XREFs of sub_180040F4C @ 0x180040F4C
 * Callers:
 *     sub_180021874 @ 0x180021874 (sub_180021874.c)
 * Callees:
 *     sub_1800CC344 @ 0x1800CC344 (sub_1800CC344.c)
 */

_QWORD *__fastcall sub_180040F4C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800CC344();
  *a1 = &Spectre::Engine::D3D11::VertexLayoutD3D11::`vftable';
  result = a1;
  a1[18] = 0LL;
  return result;
}
