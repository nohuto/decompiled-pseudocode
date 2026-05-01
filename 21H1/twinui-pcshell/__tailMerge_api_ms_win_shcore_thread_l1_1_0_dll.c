/*
 * XREFs of __tailMerge_api_ms_win_shcore_thread_l1_1_0_dll @ 0x18008E17C
 * Callers:
 *     __imp_load_SHSetThreadRef @ 0x18008E170 (__imp_load_SHSetThreadRef.c)
 *     __imp_load_GetProcessReference @ 0x18008E1FB (__imp_load_GetProcessReference.c)
 *     __imp_load_SetProcessReference @ 0x18008E20D (__imp_load_SetProcessReference.c)
 *     __imp_load_SHCreateThread @ 0x18008E21F (__imp_load_SHCreateThread.c)
 *     __imp_load_SHGetThreadRef @ 0x18008E2D4 (__imp_load_SHGetThreadRef.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088700 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_shcore_thread_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_shcore_thread_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
