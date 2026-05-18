/*
 * XREFs of sub_1800407CC @ 0x1800407CC
 * Callers:
 *     sub_180021708 @ 0x180021708 (sub_180021708.c)
 * Callees:
 *     sub_18009B0C8 @ 0x18009B0C8 (sub_18009B0C8.c)
 */

_QWORD *__fastcall sub_1800407CC(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18009B0C8();
  *a1 = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  result = a1;
  a1[23] = 0LL;
  return result;
}
