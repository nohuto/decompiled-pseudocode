/*
 * XREFs of sub_18006B1A4 @ 0x18006B1A4
 * Callers:
 *     sub_18006B198 @ 0x18006B198 (sub_18006B198.c)
 *     sub_18006BC38 @ 0x18006BC38 (sub_18006BC38.c)
 *     sub_18006BCA4 @ 0x18006BCA4 (sub_18006BCA4.c)
 *     sub_18006BCB6 @ 0x18006BCB6 (sub_18006BCB6.c)
 *     sub_18006BCC8 @ 0x18006BCC8 (sub_18006BCC8.c)
 * Callees:
 *     sub_180046570 @ 0x180046570 (sub_180046570.c)
 */

__int64 __fastcall sub_18006B1A4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180046570((__int64)&dword_1801957A8, v4);
  return v5(a1, a2, a3, a4);
}
