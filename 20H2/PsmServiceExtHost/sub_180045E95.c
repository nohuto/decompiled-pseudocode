/*
 * XREFs of sub_180045E95 @ 0x180045E95
 * Callers:
 *     sub_180045E89 @ 0x180045E89 (sub_180045E89.c)
 *     sub_180045F14 @ 0x180045F14 (sub_180045F14.c)
 *     sub_180045F26 @ 0x180045F26 (sub_180045F26.c)
 * Callees:
 *     sub_180043560 @ 0x180043560 (sub_180043560.c)
 */

__int64 __fastcall sub_180045E95(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180043560((__int64)&dword_1800AEBD8, v4);
  return v5(a1, a2, a3, a4);
}
