/*
 * XREFs of ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C0050D94
 * Callers:
 *     imp_WdfFdoInitOpenRegistryKey @ 0x1C00456E0 (imp_WdfFdoInitOpenRegistryKey.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x1C0047FC0 (imp_WdfDeviceOpenRegistryKey.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C000F144 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C001733C (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 *     ?_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z @ 0x1C0052E8C (-_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0059E9C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

int __fastcall FxDevice::_OpenKey(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        ULONG DeviceInstanceKeyType,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  int result; // eax
  _DEVICE_OBJECT *PhysicalDevice; // rsi
  FxRegKey *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  FxObject *v16; // rcx
  const void *ObjectHandleUnchecked; // rax
  int v18; // edi
  void *hKey; // [rsp+40h] [rbp-28h] BYREF
  WDFKEY__ *keyHandle; // [rsp+48h] [rbp-20h] BYREF

  keyHandle = 0LL;
  hKey = 0LL;
  result = FxValidateObjectAttributes(FxDriverGlobals, KeyAttributes, 0);
  if ( result >= 0 )
  {
    result = FxVerifierCheckIrqlLevel(FxDriverGlobals, 0);
    if ( result >= 0 )
    {
      result = FxDevice::_ValidateOpenKeyParams(FxDriverGlobals, DeviceInit, Device);
      if ( result >= 0 )
      {
        if ( DeviceInit )
        {
          PhysicalDevice = DeviceInit->Fdo.PhysicalDevice;
        }
        else
        {
          PhysicalDevice = FxDevice::GetSafePhysicalDevice(Device);
          if ( !PhysicalDevice )
          {
            ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(v16);
            v18 = -1073741436;
            WPP_IFR_SF_qL(
              FxDriverGlobals,
              2u,
              0x12u,
              0x17u,
              WPP_FxDeviceKm_cpp_Traceguids,
              ObjectHandleUnchecked,
              0xC0000184);
            return v18;
          }
        }
        v13 = (FxRegKey *)FxObjectHandleAlloc(
                            FxDriverGlobals,
                            ExDefaultNonPagedPoolType,
                            0x78uLL,
                            0,
                            KeyAttributes,
                            0,
                            FxObjectTypeExternal);
        if ( v13 )
        {
          FxRegKey::FxRegKey(v13, FxDriverGlobals);
          v15 = v14;
        }
        else
        {
          v15 = 0LL;
        }
        if ( !v15 )
          return -1073741670;
        if ( Device )
          *(_QWORD *)(v15 + 96) = Device;
        v18 = FxObject::Commit((FxObject *)v15, (_FX_DRIVER_GLOBALS *)KeyAttributes, (void **)&keyHandle, 0LL, 1u);
        if ( v18 < 0
          || (v18 = IoOpenDeviceRegistryKey(PhysicalDevice, DeviceInstanceKeyType, DesiredAccess, &hKey), v18 < 0) )
        {
          FxObject::ClearEvtCallbacks((FxObject *)v15);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 48LL))(v15);
        }
        else
        {
          *(_QWORD *)(v15 + 112) = hKey;
          *Key = keyHandle;
        }
        return v18;
      }
    }
  }
  return result;
}
