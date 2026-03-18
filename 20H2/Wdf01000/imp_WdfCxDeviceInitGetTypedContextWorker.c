/*
 * XREFs of imp_WdfCxDeviceInitGetTypedContextWorker @ 0x1C004AB50
 * Callers:
 *     <none>
 * Callees:
 *     FxValiateCx @ 0x1C004A7B4 (FxValiateCx.c)
 *     ?FxObjectGetTypedContext@@YAPEAXPEAVFxObject@@PEBU_WDF_OBJECT_CONTEXT_TYPE_INFO@@@Z @ 0x1C0055E98 (-FxObjectGetTypedContext@@YAPEAXPEAVFxObject@@PEBU_WDF_OBJECT_CONTEXT_TYPE_INFO@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0058968 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void *__fastcall imp_WdfCxDeviceInitGetTypedContextWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  __int64 v3; // rbx
  FxUserObject *CxContextObject; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0LL;
  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  if ( (int)FxValiateCx(DeviceInit->DriverGlobals, (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName) >= 0 )
  {
    CxContextObject = DeviceInit->CxContextObject;
    if ( CxContextObject )
      return FxObjectGetTypedContext(CxContextObject, TypeInfo);
  }
  return (void *)v3;
}
