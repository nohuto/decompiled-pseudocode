/*
 * XREFs of sub_180102BBC @ 0x180102BBC
 * Callers:
 *     sub_1801022A4 @ 0x1801022A4 (sub_1801022A4.c)
 * Callees:
 *     sub_1800619A8 @ 0x1800619A8 (sub_1800619A8.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_1800DB9B0 @ 0x1800DB9B0 (sub_1800DB9B0.c)
 *     sub_1800DBB38 @ 0x1800DBB38 (sub_1800DBB38.c)
 *     sub_1801168B8 @ 0x1801168B8 (sub_1801168B8.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180102BBC(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilerFrame::MarkerQueryData::`vftable';
  v4 = a1 + 8;
  sub_1801168B8(a1 + 8, a2);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  sub_1800DB9B0(a1 + 32);
  sub_1800DB9B0(a1 + 216);
  sub_1800619A8(v4);
  sub_1800619A8(a2 + 8);
  sub_1800DBB38(a1 + 32, (__int64 *)(a2 + 32));
  sub_1800DBB38(a1 + 216, (__int64 *)(a2 + 216));
  sub_180061A34(a2 + 8);
  sub_180061A34(v4);
  return a1;
}
