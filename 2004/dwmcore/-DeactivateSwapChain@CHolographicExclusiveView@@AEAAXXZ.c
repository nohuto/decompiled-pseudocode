/*
 * XREFs of ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x180255174
 * Callers:
 *     ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x180254FB8 (-ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1802551D8 (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 *     ?OnSwapChainRelease@CHolographicExclusiveView@@QEAAXXZ @ 0x180255350 (-OnSwapChainRelease@CHolographicExclusiveView@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?CloseSurfaceHandles@CHolographicExclusiveView@@AEAAXXZ @ 0x180255108 (-CloseSurfaceHandles@CHolographicExclusiveView@@AEAAXXZ.c)
 */

void __fastcall CHolographicExclusiveView::DeactivateSwapChain(CHolographicExclusiveView *this)
{
  _QWORD *v2; // rcx

  if ( *((_BYTE *)this + 74) )
  {
    v2 = (_QWORD *)*((_QWORD *)this + 11);
    if ( v2 )
      v2 = (_QWORD *)v2[12];
    if ( v2 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v2 + 296LL))(v2, 0LL);
    if ( *((_BYTE *)this + 73) )
      CHolographicExclusiveView::CloseSurfaceHandles((HANDLE *)this);
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    *((_BYTE *)this + 72) = 0;
  }
}
