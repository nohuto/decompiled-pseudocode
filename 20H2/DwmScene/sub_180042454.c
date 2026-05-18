/*
 * XREFs of sub_180042454 @ 0x180042454
 * Callers:
 *     sub_180021088 @ 0x180021088 (sub_180021088.c)
 * Callees:
 *     sub_1800C8860 @ 0x1800C8860 (sub_1800C8860.c)
 */

_QWORD *__fastcall sub_180042454(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_1800C8860(a1);
  *a1 = &Spectre::Engine::D3D11::DomainShaderD3D11::`vftable';
  result = a1;
  a1[13] = 0LL;
  return result;
}
