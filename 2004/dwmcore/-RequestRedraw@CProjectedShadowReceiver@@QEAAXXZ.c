/*
 * XREFs of ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x18000ED24
 * Callers:
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18000EC2C (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x18000ECE4 (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x18000FB00 (-ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHAD.c)
 *     ?ProcessSetDrawOrder@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETDRAWORDER@@@Z @ 0x1801E5DF4 (-ProcessSetDrawOrder@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadowReceiver::RequestRedraw(CProjectedShadowReceiver *this)
{
  __int64 v1; // rcx

  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    v1 = *((_QWORD *)this + 7);
    if ( v1 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 72LL))(v1, 1LL);
  }
}
