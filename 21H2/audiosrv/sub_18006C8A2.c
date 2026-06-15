/*
 * XREFs of sub_18006C8A2 @ 0x18006C8A2
 * Callers:
 *     sub_18006C896 @ 0x18006C896 (sub_18006C896.c)
 *     sub_18006C921 @ 0x18006C921 (sub_18006C921.c)
 *     sub_18006C933 @ 0x18006C933 (sub_18006C933.c)
 *     sub_18006C945 @ 0x18006C945 (sub_18006C945.c)
 *     sub_18006C957 @ 0x18006C957 (sub_18006C957.c)
 * Callees:
 *     sub_180046570 @ 0x180046570 (sub_180046570.c)
 */

__int64 __fastcall sub_18006C8A2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180046570((__int64)&DEVOBJ_dll_import_table, v4);
  return v5(a1, a2, a3, a4);
}
