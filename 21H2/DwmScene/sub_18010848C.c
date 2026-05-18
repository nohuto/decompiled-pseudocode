/*
 * XREFs of sub_18010848C @ 0x18010848C
 * Callers:
 *     sub_180107B74 @ 0x180107B74 (sub_180107B74.c)
 * Callees:
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_1800E1280 @ 0x1800E1280 (sub_1800E1280.c)
 *     sub_1800E1408 @ 0x1800E1408 (sub_1800E1408.c)
 *     sub_18011C188 @ 0x18011C188 (sub_18011C188.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18010848C(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilerFrame::MarkerQueryData::`vftable';
  v4 = a1 + 8;
  sub_18011C188(a1 + 8, a2);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  sub_1800E1280(a1 + 32);
  sub_1800E1280(a1 + 216);
  sub_180067278(v4);
  sub_180067278(a2 + 8);
  sub_1800E1408(a1 + 32, (__int64 *)(a2 + 32));
  sub_1800E1408(a1 + 216, (__int64 *)(a2 + 216));
  sub_180067304(a2 + 8);
  sub_180067304(v4);
  return a1;
}
