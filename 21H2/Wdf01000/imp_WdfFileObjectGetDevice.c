/*
 * XREFs of imp_WdfFileObjectGetDevice @ 0x1C00051F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfFileObjectGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFFILEOBJECT__ *FileObject)
{
  FxFileObject *pFO; // [rsp+30h] [rbp+8h] BYREF

  pFO = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], FileObject, 0x1018u, (void **)&pFO);
  return (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(pFO->m_DeviceBase);
}
