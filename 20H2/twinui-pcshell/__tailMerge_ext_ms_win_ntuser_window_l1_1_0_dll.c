/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_window_l1_1_0_dll @ 0x18008FF45
 * Callers:
 *     __imp_load_IsIconic @ 0x18008FF39 (__imp_load_IsIconic.c)
 *     __imp_load_GetWindowPlacement @ 0x180090122 (__imp_load_GetWindowPlacement.c)
 *     __imp_load_EnumThreadWindows @ 0x180090146 (__imp_load_EnumThreadWindows.c)
 *     __imp_load_SetWindowsHookExW @ 0x18009016A (__imp_load_SetWindowsHookExW.c)
 *     __imp_load_UnhookWindowsHookEx @ 0x18009017C (__imp_load_UnhookWindowsHookEx.c)
 *     __imp_load_CallNextHookEx @ 0x18009018E (__imp_load_CallNextHookEx.c)
 *     __imp_load_GetWindowInfo @ 0x1800902BB (__imp_load_GetWindowInfo.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088920 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_window_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_window_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
