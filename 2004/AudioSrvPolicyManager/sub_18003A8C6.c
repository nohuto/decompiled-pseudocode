/*
 * XREFs of sub_18003A8C6 @ 0x18003A8C6
 * Callers:
 *     sub_18003A8BA @ 0x18003A8BA (sub_18003A8BA.c)
 * Callees:
 *     sub_180039240 @ 0x180039240 (sub_180039240.c)
 */

__int64 __fastcall sub_18003A8C6(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180039240(
                                                                     (__int64)&OnDemandBrokerClient_dll_import_table,
                                                                     v4);
  return v5(a1, a2, a3, a4);
}
