/*
 * XREFs of sub_1800427F8 @ 0x1800427F8
 * Callers:
 *     sub_1800211CC @ 0x1800211CC (sub_1800211CC.c)
 * Callees:
 *     sub_1800C8860 @ 0x1800C8860 (sub_1800C8860.c)
 */

_QWORD *__fastcall sub_1800427F8(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800C8860(a1);
  *a1 = &Spectre::Engine::D3D11::HullShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
