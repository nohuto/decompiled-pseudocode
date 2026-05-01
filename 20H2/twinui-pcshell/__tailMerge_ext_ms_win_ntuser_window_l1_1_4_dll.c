/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_window_l1_1_4_dll @ 0x18008FFD0
 * Callers:
 *     __imp_load_SwitchToThisWindow @ 0x18008FFC4 (__imp_load_SwitchToThisWindow.c)
 *     __imp_load_HungWindowFromGhostWindow @ 0x18009004F (__imp_load_HungWindowFromGhostWindow.c)
 *     __imp_load_CanBrokerForceForeground @ 0x180090061 (__imp_load_CanBrokerForceForeground.c)
 *     __imp_load_ShowWindowAsync @ 0x1800900FE (__imp_load_ShowWindowAsync.c)
 *     __imp_load_GhostWindowFromHungWindow @ 0x180090110 (__imp_load_GhostWindowFromHungWindow.c)
 *     __imp_load_SetWindowArrangement @ 0x1800901A0 (__imp_load_SetWindowArrangement.c)
 *     __imp_load_RegisterWindowArrangementCallout @ 0x1800901B2 (__imp_load_RegisterWindowArrangementCallout.c)
 *     __imp_load_UpdateWindowTrackingInfo @ 0x1800901C4 (__imp_load_UpdateWindowTrackingInfo.c)
 *     __imp_load_EnableShellWindowManagementBehavior @ 0x1800901D6 (__imp_load_EnableShellWindowManagementBehavior.c)
 *     __imp_load_GetWindowTrackInfoAsync @ 0x1800901E8 (__imp_load_GetWindowTrackInfoAsync.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088920 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_window_l1_1_4_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_window_l1_1_4_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
