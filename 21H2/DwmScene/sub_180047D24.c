/*
 * XREFs of sub_180047D24 @ 0x180047D24
 * Callers:
 *     sub_180026958 @ 0x180026958 (sub_180026958.c)
 * Callees:
 *     sub_1800CE130 @ 0x1800CE130 (sub_1800CE130.c)
 */

_QWORD *__fastcall sub_180047D24(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800CE130(a1);
  *a1 = &Spectre::Engine::D3D11::DomainShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
