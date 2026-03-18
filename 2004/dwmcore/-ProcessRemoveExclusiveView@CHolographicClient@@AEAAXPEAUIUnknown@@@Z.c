/*
 * XREFs of ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x18025A2A4
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x180259CDC (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 *     ?UninitializeResources@CHolographicClient@@AEAAXXZ @ 0x18025A78C (-UninitializeResources@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x1801AC920 (-Remove@-$DynArray@PEAVCBaseExpression@@$00@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 *     ?DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z @ 0x1802551D8 (-DeactivateView@CHolographicExclusiveView@@QEAAXPEAVCHolographicClient@@@Z.c)
 */

void __fastcall CHolographicClient::ProcessRemoveExclusiveView(CHolographicClient *this, struct IUnknown *a2)
{
  CHolographicExclusiveView *v3; // rcx
  CHolographicExclusiveView *v4; // [rsp+38h] [rbp+10h] BYREF

  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CHolographicExclusiveView **))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_92c14223_53b5_489b_b195_4227022eda18,
         &v4) >= 0 )
  {
    v3 = (CHolographicExclusiveView *)*((_QWORD *)this + 25);
    if ( v3 == v4 )
    {
      CHolographicExclusiveView::DeactivateView(v3, this);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 25);
    }
    if ( (unsigned int)DynArray<CBaseExpression *,1>::Remove((__int64 *)this + 9, &v4) )
      (*(void (__fastcall **)(CHolographicExclusiveView *))(*(_QWORD *)v4 + 16LL))(v4);
    (*(void (__fastcall **)(CHolographicExclusiveView *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
