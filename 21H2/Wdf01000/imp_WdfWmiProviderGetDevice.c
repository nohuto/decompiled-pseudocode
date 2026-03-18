/*
 * XREFs of imp_WdfWmiProviderGetDevice @ 0x1C005DED0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfWmiProviderGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWMIPROVIDER__ *WmiProvider)
{
  FxWmiProvider *pProvider; // [rsp+30h] [rbp+8h] BYREF

  pProvider = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)WmiProvider,
    0x1004u,
    (void **)&pProvider);
  return (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(pProvider->m_Parent->m_DeviceBase);
}
