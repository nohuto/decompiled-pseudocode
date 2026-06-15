/*
 * XREFs of __delayLoadHelper2 @ 0x180046E90
 * Callers:
 *     __tailMerge_ksuser_dll @ 0x180069F76 (__tailMerge_ksuser_dll.c)
 *     __tailMerge_hrtfapo_dll @ 0x18006A001 (__tailMerge_hrtfapo_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x18006B860 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll @ 0x18006B8EB (__tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x18006B976 (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x18006BA01 (__tailMerge_api_ms_win_security_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x18006BA8C (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_power_base_l1_1_0_dll @ 0x18006BB17 (__tailMerge_api_ms_win_power_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_config_l1_1_1_dll @ 0x18006BBB4 (__tailMerge_api_ms_win_devices_config_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_power_setting_l1_1_0_dll @ 0x18006BC3F (__tailMerge_api_ms_win_power_setting_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll @ 0x18006BD7E (__tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_query_l1_1_0_dll @ 0x18006BE99 (__tailMerge_api_ms_win_devices_query_l1_1_0_dll.c)
 *     __tailMerge_hid_dll @ 0x18006BF36 (__tailMerge_hid_dll.c)
 *     __tailMerge_propsys_dll @ 0x18006C0AB (__tailMerge_propsys_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll @ 0x18006C52C (__tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_service_core_l1_1_0_dll @ 0x18006C5B7 (__tailMerge_api_ms_win_service_core_l1_1_0_dll.c)
 *     __tailMerge_faultrep_dll @ 0x18006C6F6 (__tailMerge_faultrep_dll.c)
 *     __tailMerge_ssdm_dll @ 0x18006C796 (__tailMerge_ssdm_dll.c)
 *     __tailMerge_avrt_dll @ 0x18006C821 (__tailMerge_avrt_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x18006C938 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x18006C9D5 (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_pal_l1_2_0_dll @ 0x18006CAC6 (__tailMerge_ext_ms_win_audiocore_pal_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_policymanager_l1_1_0_dll @ 0x18006CBA8 (__tailMerge_ext_ms_win_audiocore_policymanager_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll @ 0x18006CC33 (__tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll @ 0x18006CF1C (__tailMerge_ext_ms_win_audiocore_spatial_l1_1_0_dll.c)
 *     __tailMerge_devobj_dll @ 0x18006D2B2 (__tailMerge_devobj_dll.c)
 *     __tailMerge_rmclient_dll @ 0x18006D385 (__tailMerge_rmclient_dll.c)
 *     __tailMerge_comppkgsup_dll @ 0x18006D446 (__tailMerge_comppkgsup_dll.c)
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
