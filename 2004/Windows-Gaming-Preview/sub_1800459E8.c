/*
 * XREFs of sub_1800459E8 @ 0x1800459E8
 * Callers:
 *     sub_1800459DC @ 0x1800459DC (sub_1800459DC.c)
 * Callees:
 *     sub_180043C50 @ 0x180043C50 (sub_180043C50.c)
 */

__int64 __fastcall sub_1800459E8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180043C50((__int64)&dword_180057C20, v4);
  return v5(a1, a2, a3, a4);
}
