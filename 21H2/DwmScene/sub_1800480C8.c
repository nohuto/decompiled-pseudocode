/*
 * XREFs of sub_1800480C8 @ 0x1800480C8
 * Callers:
 *     sub_180026A9C @ 0x180026A9C (sub_180026A9C.c)
 * Callees:
 *     sub_1800CE130 @ 0x1800CE130 (sub_1800CE130.c)
 */

_QWORD *__fastcall sub_1800480C8(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800CE130(a1);
  *a1 = &Spectre::Engine::D3D11::HullShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
