/*
 * XREFs of ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180177F9C
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800261C4 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Initialize@CKstBase@@MEAAJXZ @ 0x1800263D0 (-Initialize@CKstBase@@MEAAJXZ.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180027784 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?InitializeMmcssTask@CGlobalMit@@MEAAJXZ @ 0x18002DBC0 (-InitializeMmcssTask@CGlobalMit@@MEAAJXZ.c)
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002E810 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800F5230 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1801E9EA0 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 *     ?Initialize@CComputeScribbleSynchronizer@@AEAAJPEAVCD3DDevice@@@Z @ 0x1801ED148 (-Initialize@CComputeScribbleSynchronizer@@AEAAJPEAVCD3DDevice@@@Z.c)
 *     FlushAndWait @ 0x180262C4C (FlushAndWait.c)
 *     ?Initialize@CDDisplaySwapChain@@IEAAJXZ @ 0x18027B90C (-Initialize@CDDisplaySwapChain@@IEAAJXZ.c)
 *     ?Initialize@CHolographicInteropTaskQueue@@AEAAJXZ @ 0x18029CEF8 (-Initialize@CHolographicInteropTaskQueue@@AEAAJXZ.c)
 * Callees:
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180177F30 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
 */

signed int __fastcall wil::details::GetLastErrorFailHr(wil::details *this, __int64 a2, __int64 a3, const char *a4)
{
  signed int result; // eax
  const char *v5; // [rsp+20h] [rbp-18h]
  const char *retaddr; // [rsp+38h] [rbp+0h]

  result = wil::details::GetLastErrorFail(0LL, 0LL, 0LL, a4, v5, retaddr);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
