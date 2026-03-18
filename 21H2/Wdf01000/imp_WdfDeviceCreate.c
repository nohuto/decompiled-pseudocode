/*
 * XREFs of imp_WdfDeviceCreate @ 0x1C0023A20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0023B1C (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT **DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes,
        WDFDEVICE__ **Device)
{
  _FX_DRIVER_GLOBALS *v4; // rcx
  _FX_DRIVER_GLOBALS *v8; // rbx
  __int64 result; // rax
  WDFDEVICE_INIT *v10; // rdx
  int v11; // edx
  unsigned int v12; // edi
  unsigned __int16 v13; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pDevice = 0LL;
  if ( !DeviceInit )
    FxVerifierNullBugCheck(v4, retaddr);
  if ( !*DeviceInit )
    FxVerifierNullBugCheck(v4, retaddr);
  if ( !Device )
    FxVerifierNullBugCheck(v4, retaddr);
  v8 = (*DeviceInit)->DriverGlobals;
  *Device = 0LL;
  result = FxVerifierCheckIrqlLevel(v8, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(v8, DeviceAttributes, 7);
    if ( (int)result >= 0 )
    {
      v10 = *DeviceInit;
      if ( (*DeviceInit)->CreatedDevice )
      {
        WPP_IFR_SF_q(v8, 2u, 0x12u, 0x19u, WPP_FxDeviceApi_cpp_Traceguids, Device);
        return 3221225860LL;
      }
      if ( (v10->Security.Sddl || v10->Security.DeviceClassSet)
        && !v10->DeviceName
        && (v10->Characteristics & 0x80u) == 0 )
      {
        v12 = -1073741703;
        v13 = 26;
LABEL_26:
        WPP_IFR_SF_d(v8, 2u, 0x12u, v13, WPP_FxDeviceApi_cpp_Traceguids, v12);
        return v12;
      }
      if ( v10->RequiresSelfIoTarget && v10->InitType )
      {
        v13 = 27;
LABEL_25:
        v12 = -1073741808;
        goto LABEL_26;
      }
      if ( v10->Pdo.NoPowerDependencyOnParent
        && v10->Pdo.EventCallbacks.Size
        && (v10->Pdo.EventCallbacks.EvtDeviceEnableWakeAtBus || v10->Pdo.EventCallbacks.EvtDeviceDisableWakeAtBus) )
      {
        v13 = 28;
        goto LABEL_25;
      }
      v11 = FxDevice::_Create(v8, DeviceInit, DeviceAttributes, &pDevice);
      if ( v11 >= 0 )
        *Device = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(pDevice);
      return (unsigned int)v11;
    }
  }
  return result;
}
