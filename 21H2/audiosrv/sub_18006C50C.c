/*
 * XREFs of sub_18006C50C @ 0x18006C50C
 * Callers:
 *     sub_18006C500 @ 0x18006C500 (sub_18006C500.c)
 *     sub_18006C58B @ 0x18006C58B (sub_18006C58B.c)
 *     sub_18006C59D @ 0x18006C59D (sub_18006C59D.c)
 *     sub_18006C5AF @ 0x18006C5AF (sub_18006C5AF.c)
 *     sub_18006C5C1 @ 0x18006C5C1 (sub_18006C5C1.c)
 *     sub_18006C5D3 @ 0x18006C5D3 (sub_18006C5D3.c)
 *     sub_18006C5E5 @ 0x18006C5E5 (sub_18006C5E5.c)
 *     sub_18006C5F7 @ 0x18006C5F7 (sub_18006C5F7.c)
 *     sub_18006CAB5 @ 0x18006CAB5 (sub_18006CAB5.c)
 * Callees:
 *     sub_180046570 @ 0x180046570 (sub_180046570.c)
 */

__int64 __fastcall sub_18006C50C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180046570((__int64)&dword_1801959A8, v4);
  return v5(a1, a2, a3, a4);
}
