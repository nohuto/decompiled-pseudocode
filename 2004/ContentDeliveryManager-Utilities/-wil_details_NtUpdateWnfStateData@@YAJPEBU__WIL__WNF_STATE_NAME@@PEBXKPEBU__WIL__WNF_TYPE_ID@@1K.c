/*
 * XREFs of ?wil_details_NtUpdateWnfStateData@@YAJPEBU__WIL__WNF_STATE_NAME@@PEBXKPEBU__WIL__WNF_TYPE_ID@@1KK@Z @ 0x180008284
 * Callers:
 *     ?wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z @ 0x180008D80 (-wil_details_StagingConfig_FireNotification@@YAJPEAUwil_details_StagingConfig@@IGH@Z.c)
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x180009834 (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18000AA18 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_NtUpdateWnfStateData(
        const struct __WIL__WNF_STATE_NAME *a1,
        const void *a2,
        unsigned int a3,
        const struct __WIL__WNF_TYPE_ID *a4,
        const void *a5,
        unsigned int a6,
        unsigned int a7)
{
  int (*v7)(const struct __WIL__WNF_STATE_NAME *, const void *, unsigned int, const struct __WIL__WNF_TYPE_ID *, const void *, unsigned int, unsigned int); // r10
  HMODULE ModuleHandleW; // rax

  v7 = g_wil_details_pfnNtUpdateWnfStateData;
  if ( g_wil_details_pfnNtUpdateWnfStateData )
    return ((__int64 (__fastcall *)(const struct __WIL__WNF_STATE_NAME *, const void *, _QWORD, _QWORD, _QWORD, unsigned int, unsigned int))v7)(
             a1,
             a2,
             a3,
             0LL,
             0LL,
             a6,
             a7);
  ModuleHandleW = g_wil_details_ntdllModuleHandle;
  if ( !g_wil_details_ntdllModuleHandle )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    g_wil_details_ntdllModuleHandle = ModuleHandleW;
  }
  g_wil_details_pfnNtUpdateWnfStateData = (int (*)(const struct __WIL__WNF_STATE_NAME *, const void *, unsigned int, const struct __WIL__WNF_TYPE_ID *, const void *, unsigned int, unsigned int))GetProcAddress(ModuleHandleW, "NtUpdateWnfStateData");
  v7 = g_wil_details_pfnNtUpdateWnfStateData;
  if ( g_wil_details_pfnNtUpdateWnfStateData )
    return ((__int64 (__fastcall *)(const struct __WIL__WNF_STATE_NAME *, const void *, _QWORD, _QWORD, _QWORD, unsigned int, unsigned int))v7)(
             a1,
             a2,
             a3,
             0LL,
             0LL,
             a6,
             a7);
  else
    return 3221225785LL;
}
