/*
 * XREFs of sub_18006C975 @ 0x18006C975
 * Callers:
 *     sub_18006C969 @ 0x18006C969 (sub_18006C969.c)
 *     sub_18006C9F4 @ 0x18006C9F4 (sub_18006C9F4.c)
 *     sub_18006CA06 @ 0x18006CA06 (sub_18006CA06.c)
 *     sub_18006CA18 @ 0x18006CA18 (sub_18006CA18.c)
 * Callees:
 *     sub_180046570 @ 0x180046570 (sub_180046570.c)
 */

__int64 __fastcall sub_18006C975(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180046570(
                                                                     (__int64)&RMCLIENT_dll_import_table,
                                                                     v4);
  return v5(a1, a2, a3, a4);
}
