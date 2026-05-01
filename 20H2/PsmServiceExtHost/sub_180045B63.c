/*
 * XREFs of sub_180045B63 @ 0x180045B63
 * Callers:
 *     sub_180045B57 @ 0x180045B57 (sub_180045B57.c)
 *     sub_180045C38 @ 0x180045C38 (sub_180045C38.c)
 *     sub_180045C4A @ 0x180045C4A (sub_180045C4A.c)
 *     sub_180045C5C @ 0x180045C5C (sub_180045C5C.c)
 * Callees:
 *     sub_180043560 @ 0x180043560 (sub_180043560.c)
 */

__int64 __fastcall sub_180045B63(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180043560((__int64)&dword_1800AEB78, v4);
  return v5(a1, a2, a3, a4);
}
