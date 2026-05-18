/*
 * XREFs of sub_18003D6E0 @ 0x18003D6E0
 * Callers:
 *     sub_180021630 @ 0x180021630 (sub_180021630.c)
 * Callees:
 *     sub_180062180 @ 0x180062180 (sub_180062180.c)
 */

_QWORD *__fastcall sub_18003D6E0(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180062180(a1, 9LL, 4LL);
  a1[12] = 0LL;
  a1[13] = 0LL;
  *a1 = &Spectre::Engine::D3D11::RenderStateD3D11::`vftable';
  result = a1;
  a1[14] = 0LL;
  a1[15] = 0LL;
  a1[16] = 0LL;
  return result;
}
