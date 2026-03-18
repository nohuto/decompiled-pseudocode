/*
 * XREFs of imp_WdfDeviceInitSetPnpPowerEventCallbacks @ 0x1C0030D60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0053078 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetPnpPowerEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_PNPPOWER_EVENT_CALLBACKS *PnpPowerEventCallbacks)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  size_t _a1; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v3 = DeviceInit->DriverGlobals;
  if ( !PnpPowerEventCallbacks )
    FxVerifierNullBugCheck(v3, retaddr);
  _a1 = PnpPowerEventCallbacks->Size;
  if ( (_DWORD)_a1 != 144 )
  {
    if ( (_DWORD)_a1 != 136 )
    {
      WPP_IFR_SF_dd(v3, 2u, 0x12u, 0x11u, WPP_FxDeviceInitApi_cpp_Traceguids, _a1, 144);
      goto LABEL_12;
    }
LABEL_5:
    memmove(&DeviceInit->PnpPower, PnpPowerEventCallbacks, _a1);
    return;
  }
  if ( !PnpPowerEventCallbacks->EvtDeviceUsageNotification || !PnpPowerEventCallbacks->EvtDeviceUsageNotificationEx )
    goto LABEL_5;
  WPP_IFR_SF_(v3, 2u, 0x12u, 0x12u, WPP_FxDeviceInitApi_cpp_Traceguids);
LABEL_12:
  FxVerifierDbgBreakPoint(v3);
}
