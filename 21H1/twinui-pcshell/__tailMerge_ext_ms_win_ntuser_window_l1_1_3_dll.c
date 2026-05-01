/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_window_l1_1_3_dll @ 0x18008F9F5
 * Callers:
 *     __imp_load_GetLastActivePopup @ 0x18008F9E9 (__imp_load_GetLastActivePopup.c)
 *     __imp_load_SetWindowPlacement @ 0x18008FC6F (__imp_load_SetWindowPlacement.c)
 *     __imp_load_GetProcessDefaultLayout @ 0x18008FC93 (__imp_load_GetProcessDefaultLayout.c)
 *     __imp_load_IsZoomed @ 0x18008FCFF (__imp_load_IsZoomed.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088700 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_window_l1_1_3_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_window_l1_1_3_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
