/*
 * XREFs of DxgkStartPnPTransition @ 0x1C01FD15C
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01F0950 (DpiFdoHandleDevicePower.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C01F5298 (DpiFdoStartAdapterThreadImpl.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD460 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     DpiFdoHandleStopDevice @ 0x1C0389B60 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C038B430 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z @ 0x1C01FD198 (-StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z.c)
 */

void *__fastcall DxgkStartPnPTransition(void *a1, unsigned __int64 a2)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL_GetGlobal();
  return DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 122), a1, a2);
}
