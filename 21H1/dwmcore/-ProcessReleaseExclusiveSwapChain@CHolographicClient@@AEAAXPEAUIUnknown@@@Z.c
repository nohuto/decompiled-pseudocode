/*
 * XREFs of ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025CAF4
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x18025C74C (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?UninitializeResources@CHolographicClient@@AEAAXXZ @ 0x18025D1FC (-UninitializeResources@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x180257C68 (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 *     ?OnSwapChainRelease@CHolographicExclusiveView@@QEAAXXZ @ 0x180257DE0 (-OnSwapChainRelease@CHolographicExclusiveView@@QEAAXXZ.c)
 */

void __fastcall CHolographicClient::ProcessReleaseExclusiveSwapChain(CHolographicClient *this, struct IUnknown *a2)
{
  struct IUnknown **v3; // rax
  CHolographicExclusiveView *v4; // rcx
  CHolographicExclusiveView *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CHolographicExclusiveView **))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_92c14223_53b5_489b_b195_4227022eda18,
         &v5) >= 0 )
  {
    v3 = (struct IUnknown **)v5;
    v4 = (CHolographicExclusiveView *)*((_QWORD *)this + 25);
    if ( v4 == v5 && !*((_BYTE *)v4 + 75) )
    {
      CHolographicExclusiveView::DeactivateView(v4, this);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 25);
      v3 = (struct IUnknown **)v5;
    }
    CHolographicExclusiveView::OnSwapChainRelease(v3);
    (*(void (__fastcall **)(CHolographicExclusiveView *))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
