/*
 * XREFs of sub_18003D238 @ 0x18003D238
 * Callers:
 *     sub_1800212CC @ 0x1800212CC (sub_1800212CC.c)
 * Callees:
 *     sub_1800C8860 @ 0x1800C8860 (sub_1800C8860.c)
 *     memset @ 0x18011E09A (memset.c)
 */

_QWORD *__fastcall sub_18003D238(_QWORD *a1)
{
  _QWORD *result; // rax

  memset(a1, 0, 0x68uLL);
  sub_1800C8860(a1);
  *a1 = &Spectre::Engine::D3D11::PixelShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
