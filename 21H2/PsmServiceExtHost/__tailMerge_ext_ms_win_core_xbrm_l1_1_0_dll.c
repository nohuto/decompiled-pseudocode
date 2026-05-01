/*
 * XREFs of __tailMerge_ext_ms_win_core_xbrm_l1_1_0_dll @ 0x1800456FA
 * Callers:
 *     __imp_load_InitializeGameModeExtension @ 0x1800456EE (__imp_load_InitializeGameModeExtension.c)
 *     __imp_load_GetPartitionHandlesForPackage @ 0x1800458AF (__imp_load_GetPartitionHandlesForPackage.c)
 *     __imp_load_NotifySystemExpandedResourceModeStateChange @ 0x1800458C1 (__imp_load_NotifySystemExpandedResourceModeStateChange.c)
 *     __imp_load_NotifyGameModeExtensionRecipientsPresent @ 0x1800458D3 (__imp_load_NotifyGameModeExtensionRecipientsPresent.c)
 *     __imp_load_DelegateSetSystemAllowedCpuSets @ 0x1800458E5 (__imp_load_DelegateSetSystemAllowedCpuSets.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180042FE0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_core_xbrm_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_core_xbrm_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
