/*
 * XREFs of imp_WdfDeviceGetDefaultQueue @ 0x1C0034EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 */

WDFQUEUE__ *__fastcall imp_WdfDeviceGetDefaultQueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  FxIoQueue *m_DefaultQueue; // rcx
  FxDevice *pFxDevice; // [rsp+40h] [rbp+8h] BYREF

  pFxDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pFxDevice);
  m_DefaultQueue = pFxDevice->m_PkgIo->m_DefaultQueue;
  if ( m_DefaultQueue )
    return (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(m_DefaultQueue);
  WPP_IFR_SF_q(pFxDevice->m_Globals, 3u, 0xDu, 0x35u, WPP_FxDeviceApi_cpp_Traceguids, Device);
  return 0LL;
}
