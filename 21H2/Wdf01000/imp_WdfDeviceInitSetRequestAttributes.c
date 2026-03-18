/*
 * XREFs of imp_WdfDeviceInitSetRequestAttributes @ 0x1C0033D40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetRequestAttributes(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes)
{
  _FX_DRIVER_GLOBALS *v5; // rsi
  _FX_DRIVER_GLOBALS *v6; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v5 = DeviceInit->DriverGlobals;
  v6 = DeviceInit->DriverGlobals;
  if ( !RequestAttributes )
    FxVerifierNullBugCheck(v6, retaddr);
  if ( (int)FxValidateObjectAttributes(v6, RequestAttributes, 1) < 0 )
  {
    FxVerifierDbgBreakPoint(v5);
  }
  else
  {
    *(_OWORD *)&DeviceInit->RequestAttributes.Size = *(_OWORD *)&RequestAttributes->Size;
    *(_OWORD *)&DeviceInit->RequestAttributes.EvtDestroyCallback = *(_OWORD *)&RequestAttributes->EvtDestroyCallback;
    *(_OWORD *)&DeviceInit->RequestAttributes.ParentObject = *(_OWORD *)&RequestAttributes->ParentObject;
    DeviceInit->RequestAttributes.ContextTypeInfo = RequestAttributes->ContextTypeInfo;
  }
}
