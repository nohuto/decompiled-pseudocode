/*
 * XREFs of DxgkCompletePnPTransition @ 0x1C01957B4
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C0172950 (DpiFdoHandleDevicePower.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C0183850 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFinishPnPTransitionCallback @ 0x1C0195680 (DpiFinishPnPTransitionCallback.c)
 *     DpiFdoHandleStopDevice @ 0x1C02CA270 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C02CBAD4 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C01957E4 (-CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 */

void __fastcall DxgkCompletePnPTransition(void *a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax

  if ( a1 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
    DXGSESSIONMGR::CompletePnPTransition(*((DXGSESSIONMGR **)Global + 102), a1);
  }
}
