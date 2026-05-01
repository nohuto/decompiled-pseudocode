/*
 * XREFs of __tailMerge_api_ms_win_shlwapi_winrt_storage_l1_1_1_dll @ 0x18008E688
 * Callers:
 *     __imp_load_SHPinDllOfCLSID @ 0x18008E67C (__imp_load_SHPinDllOfCLSID.c)
 *     __imp_load_SHCreateWorkerWindowW @ 0x18008E812 (__imp_load_SHCreateWorkerWindowW.c)
 *     __imp_load_SHSetWindowBits @ 0x18008EBAB (__imp_load_SHSetWindowBits.c)
 *     __imp_load_SHFillRectClr @ 0x18008EFBD (__imp_load_SHFillRectClr.c)
 *     __imp_load_IUnknown_GetWindow @ 0x18008F05F (__imp_load_IUnknown_GetWindow.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180088700 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_shlwapi_winrt_storage_l1_1_1_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_shlwapi_winrt_storage_l1_1_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
