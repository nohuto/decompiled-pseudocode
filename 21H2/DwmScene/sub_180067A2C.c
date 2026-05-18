/*
 * XREFs of sub_180067A2C @ 0x180067A2C
 * Callers:
 *     sub_18003DF3C @ 0x18003DF3C (sub_18003DF3C.c)
 *     sub_180068458 @ 0x180068458 (sub_180068458.c)
 *     sub_18009EC38 @ 0x18009EC38 (sub_18009EC38.c)
 *     sub_1800CF178 @ 0x1800CF178 (sub_1800CF178.c)
 *     sub_1800D0304 @ 0x1800D0304 (sub_1800D0304.c)
 *     sub_1800F9700 @ 0x1800F9700 (sub_1800F9700.c)
 * Callees:
 *     sub_180067A50 @ 0x180067A50 (sub_180067A50.c)
 */

_QWORD *__fastcall sub_180067A2C(_QWORD *a1, __int64 a2, __int64 a3)
{
  sub_180067A50(a1, a2, a3);
  *a1 = &Spectre::Engine::DeviceBuffer::`vftable';
  return a1;
}
