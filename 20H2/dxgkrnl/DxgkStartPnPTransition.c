/*
 * XREFs of DxgkStartPnPTransition @ 0x1C0177468
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01717A0 (DpiFdoHandleDevicePower.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017775C (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C01826A0 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoHandleStopDevice @ 0x1C02C92B0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C02CAB14 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z @ 0x1C01774A4 (-StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z.c)
 */

void *__fastcall DxgkStartPnPTransition(void *a1, unsigned __int64 a2)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  return DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 102), a1, a2);
}
