/*
 * XREFs of __delayLoadHelper2 @ 0x140002D50
 * Callers:
 *     __tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll @ 0x140004384 (__tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_keyboard_l1_1_0_dll @ 0x140004464 (__tailMerge_ext_ms_win_ntuser_keyboard_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x1400044EF (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_wer_reporting_l1_1_0_dll @ 0x1400045B0 (__tailMerge_ext_ms_win_wer_reporting_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_composition_ghost_l1_1_0_dll @ 0x140004744 (__tailMerge_ext_ms_win_composition_ghost_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_imm_l1_1_0_dll @ 0x14000485C (__tailMerge_ext_ms_win_imm_l1_1_0_dll.c)
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
