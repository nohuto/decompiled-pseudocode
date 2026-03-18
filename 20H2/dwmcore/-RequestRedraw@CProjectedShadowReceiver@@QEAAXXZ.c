/*
 * XREFs of ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x18000E4E4
 * Callers:
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18000E3F4 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x18000E4A4 (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x18000F2C0 (-ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHAD.c)
 *     ?ProcessSetDrawOrder@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWRECEIVER_SETDRAWORDER@@@Z @ 0x1801E3F74 (-ProcessSetDrawOrder@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
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
