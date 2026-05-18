/*
 * XREFs of sub_18004798C @ 0x18004798C
 * Callers:
 *     sub_1800269C4 @ 0x1800269C4 (sub_1800269C4.c)
 * Callees:
 *     sub_1800CE130 @ 0x1800CE130 (sub_1800CE130.c)
 */

_QWORD *__fastcall sub_18004798C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800CE130(a1);
  *a1 = &Spectre::Engine::D3D11::GeometryShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
