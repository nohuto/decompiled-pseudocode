/*
 * XREFs of sub_180062B88 @ 0x180062B88
 * Callers:
 *     sub_18002C350 @ 0x18002C350 (sub_18002C350.c)
 * Callees:
 *     sub_18006215C @ 0x18006215C (sub_18006215C.c)
 */

_QWORD *__fastcall sub_180062B88(_QWORD *a1)
{
  sub_18006215C(a1, 10LL, 3LL);
  *a1 = &Spectre::Engine::DeviceFrameBuffer::`vftable';
  a1[12] = 0LL;
  a1[13] = 0LL;
  a1[14] = 0LL;
  a1[15] = 0LL;
  return a1;
}
