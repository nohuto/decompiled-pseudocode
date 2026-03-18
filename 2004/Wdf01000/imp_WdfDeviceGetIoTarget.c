/*
 * XREFs of imp_WdfDeviceGetIoTarget @ 0x1C0018A30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

FxIoTarget *__fastcall imp_WdfDeviceGetIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  FxIoTarget *result; // rax
  FxDeviceBase *pDeviceBase; // [rsp+30h] [rbp+8h] BYREF

  pDeviceBase = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Device,
    0x1030u,
    (void **)&pDeviceBase);
  result = pDeviceBase->GetDefaultIoTarget(pDeviceBase);
  if ( result )
    return (FxIoTarget *)FxObject::GetObjectHandleUnchecked(result);
  return result;
}
