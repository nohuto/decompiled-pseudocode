/*
 * XREFs of sub_1800475B0 @ 0x1800475B0
 * Callers:
 *     sub_1800271B0 @ 0x1800271B0 (sub_1800271B0.c)
 * Callees:
 *     sub_1800CE130 @ 0x1800CE130 (sub_1800CE130.c)
 *     memset @ 0x18012396A (memset.c)
 */

_QWORD *__fastcall sub_1800475B0(_QWORD *a1)
{
  _QWORD *result; // rax

  memset(a1, 0, 0x68uLL);
  sub_1800CE130(a1);
  *a1 = &Spectre::Engine::D3D11::VertexShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
