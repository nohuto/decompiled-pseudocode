/*
 * XREFs of sub_18004609C @ 0x18004609C
 * Callers:
 *     sub_180026FD8 @ 0x180026FD8 (sub_180026FD8.c)
 * Callees:
 *     sub_1800A0998 @ 0x1800A0998 (sub_1800A0998.c)
 */

_QWORD *__fastcall sub_18004609C(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800A0998();
  *a1 = &Spectre::Engine::D3D11::SamplerD3D11::`vftable';
  result = a1;
  a1[23] = 0LL;
  return result;
}
