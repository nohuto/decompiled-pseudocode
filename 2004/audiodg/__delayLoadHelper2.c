/*
 * XREFs of __delayLoadHelper2 @ 0x14001B950
 * Callers:
 *     __tailMerge_oleaut32_dll @ 0x14001DCC4 (__tailMerge_oleaut32_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_0_dll @ 0x14001DD4F (__tailMerge_api_ms_win_core_com_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_base_l1_1_0_dll @ 0x14001DDFE (__tailMerge_api_ms_win_security_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x14001DE89 (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x14001DF14 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x14001DF9F (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_rpcrt4_dll @ 0x14001E03C (__tailMerge_rpcrt4_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x14001E26A (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
 *     __tailMerge_avrt_dll @ 0x14001E742 (__tailMerge_avrt_dll.c)
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
