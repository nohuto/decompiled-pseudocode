/*
 * XREFs of sub_180031C20 @ 0x180031C20
 * Callers:
 *     sub_180026F6C @ 0x180026F6C (sub_180026F6C.c)
 * Callees:
 *     sub_180068458 @ 0x180068458 (sub_180068458.c)
 */

_QWORD *__fastcall sub_180031C20(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180068458();
  *a1 = &Spectre::Engine::D3D11::RenderTargetD3D11::`vftable';
  result = a1;
  a1[16] = 0LL;
  return result;
}
