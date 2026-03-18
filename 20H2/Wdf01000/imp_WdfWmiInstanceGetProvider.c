/*
 * XREFs of imp_WdfWmiInstanceGetProvider @ 0x1C003D340
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

WDFWMIPROVIDER__ *__fastcall imp_WdfWmiInstanceGetProvider(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIINSTANCE__ *WmiInstance)
{
  FxWmiInstanceExternal *pInstance; // [rsp+30h] [rbp+8h] BYREF

  pInstance = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)WmiInstance,
    0x1034u,
    (void **)&pInstance);
  return (WDFWMIPROVIDER__ *)FxObject::GetObjectHandleUnchecked(pInstance->m_Provider);
}
