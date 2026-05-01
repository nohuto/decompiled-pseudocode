/*
 * XREFs of sub_180045660 @ 0x180045660
 * Callers:
 *     sub_180045654 @ 0x180045654 (sub_180045654.c)
 *     sub_1800456DF @ 0x1800456DF (sub_1800456DF.c)
 * Callees:
 *     sub_180043560 @ 0x180043560 (sub_180043560.c)
 */

__int64 __fastcall sub_180045660(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180043560((__int64)&dword_1800AEA98, v4);
  return v5(a1, a2, a3, a4);
}
