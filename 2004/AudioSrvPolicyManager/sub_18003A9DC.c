/*
 * XREFs of sub_18003A9DC @ 0x18003A9DC
 * Callers:
 *     sub_18003A9D0 @ 0x18003A9D0 (sub_18003A9D0.c)
 *     sub_18003AAB0 @ 0x18003AAB0 (sub_18003AAB0.c)
 *     sub_18003AAC2 @ 0x18003AAC2 (sub_18003AAC2.c)
 * Callees:
 *     sub_180039240 @ 0x180039240 (sub_180039240.c)
 */

__int64 __fastcall sub_18003A9DC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180039240((__int64)&dword_18004BF10, v4);
  return v5(a1, a2, a3, a4);
}
