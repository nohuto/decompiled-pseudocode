/*
 * XREFs of sub_180045888 @ 0x180045888
 * Callers:
 *     sub_18004587C @ 0x18004587C (sub_18004587C.c)
 *     sub_180045907 @ 0x180045907 (sub_180045907.c)
 *     sub_180045919 @ 0x180045919 (sub_180045919.c)
 *     sub_18004592B @ 0x18004592B (sub_18004592B.c)
 * Callees:
 *     sub_180043C50 @ 0x180043C50 (sub_180043C50.c)
 */

__int64 __fastcall sub_180045888(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180043C50((__int64)&dword_180057BE0, v4);
  return v5(a1, a2, a3, a4);
}
