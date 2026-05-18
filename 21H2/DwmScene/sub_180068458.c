/*
 * XREFs of sub_180068458 @ 0x180068458
 * Callers:
 *     sub_180031C20 @ 0x180031C20 (sub_180031C20.c)
 * Callees:
 *     sub_180067A2C @ 0x180067A2C (sub_180067A2C.c)
 */

_QWORD *__fastcall sub_180068458(_QWORD *a1)
{
  sub_180067A2C(a1, 10LL, 3LL);
  *a1 = &Spectre::Engine::DeviceFrameBuffer::`vftable';
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  return a1;
}
