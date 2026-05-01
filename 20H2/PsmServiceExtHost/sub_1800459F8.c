/*
 * XREFs of sub_1800459F8 @ 0x1800459F8
 * Callers:
 *     sub_1800459EC @ 0x1800459EC (sub_1800459EC.c)
 * Callees:
 *     sub_180043560 @ 0x180043560 (sub_180043560.c)
 */

__int64 __fastcall sub_1800459F8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180043560((__int64)&dword_1800AEB38, v4);
  return v5(a1, a2, a3, a4);
}
