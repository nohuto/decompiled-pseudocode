/*
 * XREFs of ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18000E3F4
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000DC1C (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x18000E6BC (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 *     ?NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020A70 (-NotifyOnChanged@CProjectedShadowReceiver@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x1800C9178 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ @ 0x1801E3EE0 (-OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETMASK@@@Z @ 0x1801E3F98 (-ProcessSetMask@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 * Callees:
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x18000E4E4 (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CA10 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
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
