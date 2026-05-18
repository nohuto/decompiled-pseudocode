/*
 * XREFs of sub_180041CE0 @ 0x180041CE0
 * Callers:
 *     sub_1800218E0 @ 0x1800218E0 (sub_1800218E0.c)
 * Callees:
 *     sub_1800C8860 @ 0x1800C8860 (sub_1800C8860.c)
 *     memset @ 0x18011E09A (memset.c)
 */

_QWORD *__fastcall sub_180041CE0(_QWORD *a1)
{
  _QWORD *result; // rax

  memset(a1, 0, 0x68uLL);
  sub_1800C8860(a1);
  *a1 = &Spectre::Engine::D3D11::VertexShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
