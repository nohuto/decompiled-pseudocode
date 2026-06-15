/*
 * XREFs of __delayLoadHelper2 @ 0x18003EB00
 * Callers:
 *     __tailMerge_ondemandbrokerclient_dll @ 0x180040186 (__tailMerge_ondemandbrokerclient_dll.c)
 *     __tailMerge_api_ms_win_security_lsalookup_l2_1_0_dll @ 0x180040211 (__tailMerge_api_ms_win_security_lsalookup_l2_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x18004029C (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x1800403A0 (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
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
