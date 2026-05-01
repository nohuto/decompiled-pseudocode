/*
 * XREFs of sub_180045949 @ 0x180045949
 * Callers:
 *     sub_18004593D @ 0x18004593D (sub_18004593D.c)
 * Callees:
 *     sub_180043C50 @ 0x180043C50 (sub_180043C50.c)
 */

__int64 __fastcall sub_180045949(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180043C50((__int64)&dword_180057C00, v4);
  return v5(a1, a2, a3, a4);
}
