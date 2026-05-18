/*
 * XREFs of sub_1800D57B8 @ 0x1800D57B8
 * Callers:
 *     sub_18012F9DD @ 0x18012F9DD (sub_18012F9DD.c)
 *     sub_18012FA28 @ 0x18012FA28 (sub_18012FA28.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800D57B8(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  *a1 = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  return result;
}
