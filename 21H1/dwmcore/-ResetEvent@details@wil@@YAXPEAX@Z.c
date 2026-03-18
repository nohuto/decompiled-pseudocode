/*
 * XREFs of ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801AA888
 * Callers:
 *     ?AcquireForRender@CComputeScribbleFramebuffer@@QEAAJ_K@Z @ 0x1801A9FBC (-AcquireForRender@CComputeScribbleFramebuffer@@QEAAJ_K@Z.c)
 *     ?WaitForCommandList@CComputeScribbleFramebuffer@@AEAAJPEAUID3D12CommandQueue@@@Z @ 0x1801AA99C (-WaitForCommandList@CComputeScribbleFramebuffer@@AEAAJPEAUID3D12CommandQueue@@@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@CDDisplaySwapChain@@QEAAJ_KPEAPEAX@Z @ 0x18023BAA8 (-SetSyncRefreshCountWaitTarget@CDDisplaySwapChain@@QEAAJ_KPEAPEAX@Z.c)
 *     ?WaitForVBlank@CDDisplaySwapChain@@QEAAJPEAX@Z @ 0x18023BCDC (-WaitForVBlank@CDDisplaySwapChain@@QEAAJPEAX@Z.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___ @ 0x18025327C (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___.c)
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___ @ 0x18025B610 (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_28c328954791820f868badd95a7a324d___.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x18025B7D0 (--1CHolographicClient@@MEAA@XZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180151D34 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::ResetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !ResetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x921,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v2);
    __debugbreak();
  }
}
