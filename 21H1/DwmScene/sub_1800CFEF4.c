/*
 * XREFs of sub_1800CFEF4 @ 0x1800CFEF4
 * Callers:
 *     sub_18012A197 @ 0x18012A197 (sub_18012A197.c)
 * Callees:
 *     sub_1800DBA24 @ 0x1800DBA24 (sub_1800DBA24.c)
 *     sub_1801168D0 @ 0x1801168D0 (sub_1801168D0.c)
 */

void **__fastcall sub_1800CFEF4(_QWORD *a1)
{
  void **result; // rax

  sub_1800DBA24(a1 + 27);
  sub_1800DBA24(a1 + 4);
  sub_1801168D0(a1 + 1);
  result = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  *a1 = &Spectre::Engine::GpuProfilerFrame::ITimeSpanMarker::`vftable';
  return result;
}
