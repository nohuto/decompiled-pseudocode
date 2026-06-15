/*
 * XREFs of __tailMerge_api_ms_win_devices_config_l1_1_1_dll @ 0x18006BBB4
 * Callers:
 *     __imp_load_CM_Register_Notification @ 0x18006BBA8 (__imp_load_CM_Register_Notification.c)
 *     __imp_load_CM_Unregister_Notification @ 0x18006C648 (__imp_load_CM_Unregister_Notification.c)
 *     __imp_load_CM_MapCrToWin32Err @ 0x18006C6B4 (__imp_load_CM_MapCrToWin32Err.c)
 *     __imp_load_CM_Open_DevNode_Key @ 0x18006C6C6 (__imp_load_CM_Open_DevNode_Key.c)
 *     __imp_load_CM_Locate_DevNodeW @ 0x18006C6D8 (__imp_load_CM_Locate_DevNodeW.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180046E90 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_devices_config_l1_1_1_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_devices_config_l1_1_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
