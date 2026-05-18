/*
 * XREFs of sub_180038474 @ 0x180038474
 * Callers:
 *     sub_1800267A8 @ 0x1800267A8 (sub_1800267A8.c)
 * Callees:
 *     sub_18006D70C @ 0x18006D70C (sub_18006D70C.c)
 */

_QWORD *__fastcall sub_180038474(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_18006D70C();
  *a1 = &Spectre::Engine::D3D11::CommandListD3D11::`vftable';
  result = a1;
  a1[18] = 0LL;
  a1[19] = 0LL;
  return result;
}
