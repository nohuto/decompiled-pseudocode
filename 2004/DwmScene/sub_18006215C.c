/*
 * XREFs of sub_18006215C @ 0x18006215C
 * Callers:
 *     sub_18003866C @ 0x18003866C (sub_18003866C.c)
 *     sub_180062B88 @ 0x180062B88 (sub_180062B88.c)
 *     sub_180099368 @ 0x180099368 (sub_180099368.c)
 *     sub_1800C98A8 @ 0x1800C98A8 (sub_1800C98A8.c)
 *     sub_1800CAA34 @ 0x1800CAA34 (sub_1800CAA34.c)
 *     sub_1800F3E30 @ 0x1800F3E30 (sub_1800F3E30.c)
 * Callees:
 *     sub_180062180 @ 0x180062180 (sub_180062180.c)
 */

_QWORD *__fastcall sub_18006215C(_QWORD *a1, __int64 a2, __int64 a3)
{
  sub_180062180(a1, a2, a3);
  *a1 = &Spectre::Engine::DeviceBuffer::`vftable';
  return a1;
}
