/*
 * XREFs of sub_18004637C @ 0x18004637C
 * Callers:
 *     sub_180046370 @ 0x180046370 (sub_180046370.c)
 *     sub_1800463FB @ 0x1800463FB (sub_1800463FB.c)
 * Callees:
 *     sub_180043560 @ 0x180043560 (sub_180043560.c)
 */

__int64 __fastcall sub_18004637C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180043560((__int64)&dword_1800AEC78, v4);
  return v5(a1, a2, a3, a4);
}
