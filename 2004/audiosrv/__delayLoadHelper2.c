/*
 * XREFs of __delayLoadHelper2 @ 0x180046E80
 * Callers:
 *     __tailMerge_ksuser_dll @ 0x18006A076 (__tailMerge_ksuser_dll.c)
 *     __tailMerge_hrtfapo_dll @ 0x18006A101 (__tailMerge_hrtfapo_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x18006B960 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll @ 0x18006B9EB (__tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18006BA76 (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x18006BB01 (__tailMerge_api_ms_win_security_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x18006BB8C (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_power_base_l1_1_0_dll @ 0x18006BC17 (__tailMerge_api_ms_win_power_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_config_l1_1_1_dll @ 0x18006BCB4 (__tailMerge_api_ms_win_devices_config_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_power_setting_l1_1_0_dll @ 0x18006BD3F (__tailMerge_api_ms_win_power_setting_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll @ 0x18006BE7E (__tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_query_l1_1_0_dll @ 0x18006BF99 (__tailMerge_api_ms_win_devices_query_l1_1_0_dll.c)
 *     __tailMerge_hid_dll @ 0x18006C036 (__tailMerge_hid_dll.c)
 *     __tailMerge_propsys_dll @ 0x18006C1AB (__tailMerge_propsys_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll @ 0x18006C62C (__tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_service_core_l1_1_0_dll @ 0x18006C6B7 (__tailMerge_api_ms_win_service_core_l1_1_0_dll.c)
 *     __tailMerge_faultrep_dll @ 0x18006C7F6 (__tailMerge_faultrep_dll.c)
 *     __tailMerge_ssdm_dll @ 0x18006C896 (__tailMerge_ssdm_dll.c)
 *     __tailMerge_avrt_dll @ 0x18006C921 (__tailMerge_avrt_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x18006CA38 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x18006CAD5 (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_pal_l1_2_0_dll @ 0x18006CBC6 (__tailMerge_ext_ms_win_audiocore_pal_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_policymanager_l1_1_0_dll @ 0x18006CCA8 (__tailMerge_ext_ms_win_audiocore_policymanager_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll @ 0x18006CD33 (__tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll @ 0x18006D01C (__tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll.c)
 *     __tailMerge_devobj_dll @ 0x18006D3B2 (__tailMerge_devobj_dll.c)
 *     __tailMerge_rmclient_dll @ 0x18006D485 (__tailMerge_rmclient_dll.c)
 *     __tailMerge_comppkgsup_dll @ 0x18006D546 (__tailMerge_comppkgsup_dll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _delayLoadHelper2(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(
           &_ImageBase,
           a1,
           _pfnDefaultDliFailureHook2,
           DelayLoadFailureHook,
           a2,
           _ResolveDelayLoadedAPIFlags);
}
