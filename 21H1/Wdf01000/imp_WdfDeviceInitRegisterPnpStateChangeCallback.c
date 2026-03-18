/*
 * XREFs of imp_WdfDeviceInitRegisterPnpStateChangeCallback @ 0x1C0044740
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0059244 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceInitRegisterPnpStateChangeCallback(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_DEVICE_PNP_STATE PnpState,
        void (__fastcall *EvtDevicePnpStateChange)(WDFDEVICE__ *, const _WDF_DEVICE_PNP_NOTIFICATION_DATA *),
        unsigned int CallbackTypes)
{
  _FX_DRIVER_GLOBALS *v7; // rdi
  _FX_DRIVER_GLOBALS *v8; // rcx
  unsigned __int32 v9; // ebx
  __int64 result; // rax
  unsigned __int32 v11; // r14d
  FxPnpStateCallback *PnpStateCallbacks; // rbx
  FX_POOL **v13; // rax
  unsigned __int16 v14; // r9
  __int64 v15; // rax
  void *Caller; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Caller);
  v7 = DeviceInit->DriverGlobals;
  v8 = DeviceInit->DriverGlobals;
  if ( !EvtDevicePnpStateChange )
    FxVerifierNullBugCheck(v8, Caller);
  v9 = PnpState & 0xFFFF7FFF;
  result = FxVerifierCheckIrqlLevel(v8, 0);
  if ( (int)result >= 0 )
  {
    v11 = v9 - 256;
    if ( v9 - 256 > 0x3A )
    {
      v14 = 21;
    }
    else if ( (CallbackTypes & 0xFFFFFFF8) != 0 || !CallbackTypes )
    {
      v14 = 22;
    }
    else
    {
      PnpStateCallbacks = DeviceInit->PnpPower.PnpStateCallbacks;
      if ( PnpStateCallbacks )
        goto LABEL_15;
      v13 = FxPoolAllocator(v7, &v7->FxPoolFrameworks, ExDefaultNonPagedPoolType, 0x3A0uLL, v7->Tag, Caller);
      PnpStateCallbacks = (FxPnpStateCallback *)v13;
      if ( v13 )
        memset(v13, 0, 0x3A0uLL);
      else
        PnpStateCallbacks = 0LL;
      DeviceInit->PnpPower.PnpStateCallbacks = PnpStateCallbacks;
      if ( PnpStateCallbacks )
      {
LABEL_15:
        v15 = v11;
        PnpStateCallbacks->m_Methods[v15].Callback = EvtDevicePnpStateChange;
        PnpStateCallbacks->m_Methods[v15].Types = CallbackTypes;
        return 0LL;
      }
      v14 = 23;
    }
    WPP_IFR_SF_d(v7, 2u, 0x12u, v14, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  return result;
}
