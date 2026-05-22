/*
 * XREFs of __delayLoadHelper2 @ 0x180011770
 * Callers:
 *     __tailMerge_api_ms_win_security_accesshlpr_l1_1_0_dll @ 0x18003CE05 (__tailMerge_api_ms_win_security_accesshlpr_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_ntuser_rectangle_l1_1_0_dll @ 0x18003CE90 (__tailMerge_api_ms_win_ntuser_rectangle_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_keyboard_l1_1_0_dll @ 0x18003CF7B (__tailMerge_ext_ms_win_ntuser_keyboard_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_session_l1_1_1_dll @ 0x18003D02A (__tailMerge_api_ms_win_rtcore_session_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rim_l1_1_0_dll @ 0x18003D10C (__tailMerge_ext_ms_win_ntuser_rim_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_mininput_inputhost_l1_1_0_dll @ 0x18003D556 (__tailMerge_ext_ms_win_mininput_inputhost_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll @ 0x18003D604 (__tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll @ 0x18003D6B3 (__tailMerge_api_ms_win_shcore_taskpool_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll @ 0x18003D76E (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll @ 0x18003D7F9 (__tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rim_l1_1_1_dll @ 0x18003D8DE (__tailMerge_ext_ms_win_ntuser_rim_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_minuser_input_l1_1_3_dll @ 0x18003D97B (__tailMerge_ext_ms_win_rtcore_minuser_input_l1_1_3_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll @ 0x18003DA5C (__tailMerge_ext_ms_win_ntuser_windowstation_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll @ 0x18003DAF9 (__tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll @ 0x18003DB84 (__tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll.c)
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
