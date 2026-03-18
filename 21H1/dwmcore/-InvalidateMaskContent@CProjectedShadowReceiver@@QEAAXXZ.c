/*
 * XREFs of ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18000B0EC
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000A914 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x18000B3BC (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 *     ?NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800213C0 (-NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x1800C2E78 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ @ 0x1801E86E0 (-OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETMASK@@@Z @ 0x1801E8798 (-ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 * Callees:
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x18000B1E4 (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D910 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadowReceiver::InvalidateMaskContent(CProjectedShadowReceiver *this)
{
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((char *)this + 104);
  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    (*(void (__fastcall **)(CProjectedShadowReceiver *, _QWORD, CProjectedShadowReceiver *))(*(_QWORD *)this + 72LL))(
      this,
      0LL,
      this);
    CProjectedShadowReceiver::RequestRedraw(this);
  }
}
