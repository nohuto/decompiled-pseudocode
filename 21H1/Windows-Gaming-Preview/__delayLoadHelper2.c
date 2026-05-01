/*
 * XREFs of __delayLoadHelper2 @ 0x180043D80
 * Callers:
 *     __tailMerge_ext_ms_win_com_ole32_l1_1_1_dll @ 0x180045686 (__tailMerge_ext_ms_win_com_ole32_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcepolicy_l1_1_0_dll @ 0x180045711 (__tailMerge_ext_ms_win_core_resourcepolicy_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_shell_shell32_l1_2_0_dll @ 0x1800457AE (__tailMerge_ext_ms_win_shell_shell32_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_winrt_storage_l1_1_0_dll @ 0x180045890 (__tailMerge_ext_ms_win_winrt_storage_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_resourcemanager_gamemode_l1_2_0_dll @ 0x18004591B (__tailMerge_ext_ms_win_resourcemanager_gamemode_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_shcore_stream_l1_1_0_dll @ 0x1800459B8 (__tailMerge_api_ms_win_shcore_stream_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_shell_shellfolders_l1_1_0_dll @ 0x180045A79 (__tailMerge_api_ms_win_shell_shellfolders_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_capability_l1_1_0_dll @ 0x180045B18 (__tailMerge_api_ms_win_security_capability_l1_1_0_dll.c)
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
