/*
 * XREFs of __delayLoadHelper2 @ 0x180043530
 * Callers:
 *     __tailMerge_api_ms_win_dx_d3dkmt_l1_1_3_dll @ 0x18004547C (__tailMerge_api_ms_win_dx_d3dkmt_l1_1_3_dll.c)
 *     __tailMerge_api_ms_win_dx_d3dkmt_l1_1_2_dll @ 0x180045507 (__tailMerge_api_ms_win_dx_d3dkmt_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_session_usermgr_l1_1_0_dll @ 0x180045630 (__tailMerge_ext_ms_win_session_usermgr_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x1800456CD (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_1_dll @ 0x180045758 (__tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_0_dll @ 0x18004584A (__tailMerge_ext_ms_win_core_resourcepolicyserver_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_security_efswrt_l1_1_2_dll @ 0x1800458E8 (__tailMerge_ext_ms_win_security_efswrt_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_session_usertoken_l1_1_0_dll @ 0x1800459C8 (__tailMerge_ext_ms_win_session_usertoken_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll @ 0x180045AA8 (__tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_core_storelicensing_l1_2_0_dll @ 0x180045B33 (__tailMerge_ext_ms_win_core_storelicensing_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_core_xbrm_l1_1_0_dll @ 0x180045C4A (__tailMerge_ext_ms_win_core_xbrm_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_core_xbrm_l1_1_1_dll @ 0x180045D80 (__tailMerge_ext_ms_win_core_xbrm_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_edputil_policy_l1_1_0_dll @ 0x180045E65 (__tailMerge_ext_ms_win_edputil_policy_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_state_l1_2_0_dll @ 0x180045F14 (__tailMerge_api_ms_win_appmodel_state_l1_2_0_dll.c)
 *     __tailMerge_feclient_dll @ 0x180045FC3 (__tailMerge_feclient_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll @ 0x180046138 (__tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_message_l1_1_0_dll @ 0x180046218 (__tailMerge_ext_ms_win_ntuser_message_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll @ 0x18004634C (__tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll.c)
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
