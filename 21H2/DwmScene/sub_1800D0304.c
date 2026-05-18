/*
 * XREFs of sub_1800D0304 @ 0x1800D0304
 * Callers:
 *     sub_18003E910 @ 0x18003E910 (sub_18003E910.c)
 *     sub_1800F967C @ 0x1800F967C (sub_1800F967C.c)
 * Callees:
 *     sub_180067A2C @ 0x180067A2C (sub_180067A2C.c)
 */

_QWORD *__fastcall sub_1800D0304(_QWORD *a1)
{
  _QWORD *result; // rax

  sub_180067A2C(a1, 7LL, 3LL);
  *a1 = &Spectre::Engine::DeviceDepthBuffer::`vftable';
  result = a1;
  a1[12] = 0LL;
  a1[13] = 0LL;
  return result;
}
