/*
 * XREFs of sub_1800D57C4 @ 0x1800D57C4
 * Callers:
 *     sub_18012FAAF @ 0x18012FAAF (sub_18012FAAF.c)
 * Callees:
 *     sub_1800E12F4 @ 0x1800E12F4 (sub_1800E12F4.c)
 *     sub_18011C1A0 @ 0x18011C1A0 (sub_18011C1A0.c)
 */

void **__fastcall sub_1800D57C4(_QWORD *a1)
{
  void **result; // rax

  sub_1800E12F4(a1 + 27);
  sub_1800E12F4(a1 + 4);
  sub_18011C1A0(a1 + 1);
  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  *a1 = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  return result;
}
