/*
 * XREFs of ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180235858
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004A90C (--1CVisual@@MEAA@XZ.c)
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x18004C450 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18008F470 (-UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800A24D0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x1800E4878 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadowReceiver@@QEAAXXZ @ 0x1802354CC (-EnsureNoInvalidIntermediates@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180235930 (-NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETMASK@@@Z @ 0x180235994 (-ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x180235B10 (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F65A4 (-InternalRelease@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x180235AD0 (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowReceiver::InvalidateMaskContent(CProjectedShadowReceiver *this)
{
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease((__int64 *)this + 14);
  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    (*(void (__fastcall **)(CProjectedShadowReceiver *, _QWORD, CProjectedShadowReceiver *))(*(_QWORD *)this + 72LL))(
      this,
      0LL,
      this);
    CProjectedShadowReceiver::RequestRedraw(this);
  }
}
