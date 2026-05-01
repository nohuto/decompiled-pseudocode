/*
 * XREFs of sub_180045F44 @ 0x180045F44
 * Callers:
 *     sub_180045F38 @ 0x180045F38 (sub_180045F38.c)
 *     sub_180045FC3 @ 0x180045FC3 (sub_180045FC3.c)
 *     sub_180045FD5 @ 0x180045FD5 (sub_180045FD5.c)
 * Callees:
 *     sub_180043560 @ 0x180043560 (sub_180043560.c)
 */

__int64 __fastcall sub_180045F44(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180043560((__int64)&dword_1800AEBF8, v4);
  return v5(a1, a2, a3, a4);
}
