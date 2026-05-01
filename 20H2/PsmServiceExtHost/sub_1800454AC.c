/*
 * XREFs of sub_1800454AC @ 0x1800454AC
 * Callers:
 *     sub_1800454A0 @ 0x1800454A0 (sub_1800454A0.c)
 *     sub_1800455B6 @ 0x1800455B6 (sub_1800455B6.c)
 *     sub_1800455C8 @ 0x1800455C8 (sub_1800455C8.c)
 *     sub_1800455DA @ 0x1800455DA (sub_1800455DA.c)
 * Callees:
 *     sub_180043560 @ 0x180043560 (sub_180043560.c)
 */

__int64 __fastcall sub_1800454AC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180043560((__int64)&dword_1800AEA58, v4);
  return v5(a1, a2, a3, a4);
}
