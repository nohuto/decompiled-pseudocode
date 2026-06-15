/*
 * XREFs of sub_18006B69B @ 0x18006B69B
 * Callers:
 *     sub_18006B68F @ 0x18006B68F (sub_18006B68F.c)
 *     sub_18006BC6E @ 0x18006BC6E (sub_18006BC6E.c)
 *     sub_18006BC80 @ 0x18006BC80 (sub_18006BC80.c)
 *     sub_18006BC92 @ 0x18006BC92 (sub_18006BC92.c)
 * Callees:
 *     sub_180046570 @ 0x180046570 (sub_180046570.c)
 */

__int64 __fastcall sub_18006B69B(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180046570((__int64)&PROPSYS_dll_import_table, v4);
  return v5(a1, a2, a3, a4);
}
