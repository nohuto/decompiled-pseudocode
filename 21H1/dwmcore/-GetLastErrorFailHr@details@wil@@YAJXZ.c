/*
 * XREFs of ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801508CC
 * Callers:
 *     ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x180035590 (-CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180087E0C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180088920 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?InitializeMmcssTask@CGlobalMit@@MEAAJXZ @ 0x1800D19B0 (-InitializeMmcssTask@CGlobalMit@@MEAAJXZ.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180150194 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1801A8914 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 *     ?Initialize@CComputeScribbleFramebuffer@@AEAAJXZ @ 0x1801AA3C0 (-Initialize@CComputeScribbleFramebuffer@@AEAAJXZ.c)
 *     FlushAndWait @ 0x180212248 (FlushAndWait.c)
 *     ?Initialize@CDDisplaySwapChain@@IEAAJXZ @ 0x18023B07C (-Initialize@CDDisplaySwapChain@@IEAAJXZ.c)
 *     ?Initialize@CHolographicInteropTaskQueue@@AEAAJXZ @ 0x18025B45C (-Initialize@CHolographicInteropTaskQueue@@AEAAJXZ.c)
 * Callees:
 *     ?GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z @ 0x180150858 (-GetLastErrorFail@details@wil@@YAKPEAXIPEBD110@Z.c)
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
