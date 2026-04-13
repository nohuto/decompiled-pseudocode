/*
 * XREFs of __delayLoadHelper2 @ 0x1800AB180
 * Callers:
 *     __tailMerge_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll @ 0x1800CE0A2 (__tailMerge_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ole32_bindctx_l1_1_0_dll @ 0x1800CE13F (__tailMerge_ext_ms_win_ole32_bindctx_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_shell_shell32_l1_2_0_dll @ 0x1800CE1CA (__tailMerge_ext_ms_win_shell_shell32_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_security_slc_l1_1_0_dll @ 0x1800CE267 (__tailMerge_ext_ms_win_security_slc_l1_1_0_dll.c)
 *     __tailMerge_oleaut32_dll @ 0x1800CE2F2 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_propsys_dll @ 0x1800CE38F (__tailMerge_propsys_dll.c)
 *     __tailMerge_ext_ms_win_shell32_shellfolders_l1_1_0_dll @ 0x1800CE41A (__tailMerge_ext_ms_win_shell32_shellfolders_l1_1_0_dll.c)
 *     __tailMerge_sspicli_dll @ 0x1800CE4C9 (__tailMerge_sspicli_dll.c)
 *     __tailMerge_ext_ms_win_core_iuri_l1_1_0_dll @ 0x1800CE818 (__tailMerge_ext_ms_win_core_iuri_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_devmgmt_policy_l1_1_0_dll @ 0x1800CE91C (__tailMerge_ext_ms_win_devmgmt_policy_l1_1_0_dll.c)
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
