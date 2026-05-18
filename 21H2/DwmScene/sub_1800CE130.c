/*
 * XREFs of sub_1800CE130 @ 0x1800CE130
 * Callers:
 *     sub_180042B08 @ 0x180042B08 (sub_180042B08.c)
 *     sub_1800475B0 @ 0x1800475B0 (sub_1800475B0.c)
 *     sub_18004798C @ 0x18004798C (sub_18004798C.c)
 *     sub_180047D24 @ 0x180047D24 (sub_180047D24.c)
 *     sub_1800480C8 @ 0x1800480C8 (sub_1800480C8.c)
 * Callees:
 *     sub_180067A50 @ 0x180067A50 (sub_180067A50.c)
 */

__int64 __fastcall sub_1800CE130(__int64 a1)
{
  sub_180067A50(a1);
  *(_BYTE *)(a1 + 96) = 0;
  *(_QWORD *)a1 = &Spectre::Engine::DeviceShader::`vftable';
  return a1;
}
