/*
 * XREFs of sub_18006BF28 @ 0x18006BF28
 * Callers:
 *     sub_18006BF1C @ 0x18006BF1C (sub_18006BF1C.c)
 *     sub_18006BFA7 @ 0x18006BFA7 (sub_18006BFA7.c)
 * Callees:
 *     sub_180046570 @ 0x180046570 (sub_180046570.c)
 */

__int64 __fastcall sub_18006BF28(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180046570((__int64)&dword_180195908, v4);
  return v5(a1, a2, a3, a4);
}
