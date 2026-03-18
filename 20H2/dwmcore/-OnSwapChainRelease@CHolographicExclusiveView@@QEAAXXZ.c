/*
 * XREFs of ?OnSwapChainRelease@CHolographicExclusiveView@@QEAAXXZ @ 0x180254520
 * Callers:
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802592A4 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x180254324 (-DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x180257CA0 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicExclusiveView::OnSwapChainRelease(struct IUnknown **this)
{
  struct IUnknown *v2; // rax
  CHolographicInteropTaskQueue *lpVtbl; // rcx

  if ( this[11] )
  {
    CHolographicExclusiveView::DeactivateSwapChain((CHolographicExclusiveView *)this);
    v2 = this[7];
    lpVtbl = (CHolographicInteropTaskQueue *)v2[7].lpVtbl;
    if ( lpVtbl )
    {
      if ( LOBYTE(v2[30].lpVtbl) )
        CHolographicInteropTaskQueue::PostMessageW(lpVtbl, 0x1Cu, this[11], 0LL, 0LL, 0LL, 0LL);
    }
    ((void (__fastcall *)(struct IUnknown *))this[11]->lpVtbl->Release)(this[11]);
    this[11] = 0LL;
    *((_BYTE *)this + 74) = 0;
  }
}
