/*
 * XREFs of sub_1800CF178 @ 0x1800CF178
 * Callers:
 *     sub_1800CF738 @ 0x1800CF738 (sub_1800CF738.c)
 *     sub_1800CFBB4 @ 0x1800CFBB4 (sub_1800CFBB4.c)
 * Callees:
 *     sub_180067A2C @ 0x180067A2C (sub_180067A2C.c)
 */

_QWORD *__fastcall sub_1800CF178(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  sub_180067A2C(a1, a2, a3);
  *a1 = &Spectre::Engine::DeviceArrayBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  return result;
}
