/*
 * XREFs of DxgkCompletePnPTransition @ 0x1C0185674
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0162F00 (DpiFdoHandleDevicePower.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C016F2E0 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFinishPnPTransitionCallback @ 0x1C0185540 (DpiFinishPnPTransitionCallback.c)
 *     DpiFdoHandleStopDevice @ 0x1C02C5CF0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C02C7554 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C01856A4 (-CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 */

void __fastcall DxgkCompletePnPTransition(void *a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax

  if ( a1 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
    DXGSESSIONMGR::CompletePnPTransition(*((DXGSESSIONMGR **)Global + 88), a1);
  }
}
