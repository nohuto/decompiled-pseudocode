/*
 * XREFs of FxUsbTargetDeviceCreate @ 0x1C0069BB0
 * Callers:
 *     imp_WdfUsbTargetDeviceCreate @ 0x1C006A2D0 (imp_WdfUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceCreateWithParameters @ 0x1C006A3E0 (imp_WdfUsbTargetDeviceCreateWithParameters.c)
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000BF84 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000CF7C (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0058968 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00595BC (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C0064D1C (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ??0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C006EA14 (--0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C006F278 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C00727D0 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 */

__int64 __fastcall FxUsbTargetDeviceCreate(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDeviceBase *Device,
        unsigned int USBDClientContractVersion,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFUSBDEVICE__ **UsbDevice)
{
  WDFUSBDEVICE__ **v5; // rsi
  __int64 result; // rax
  FxUsbDevice *v11; // rax
  FxUsbDevice *v12; // rax
  FxUsbDevice *v13; // rbx
  int inited; // edi
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  v5 = UsbDevice;
  if ( !UsbDevice )
    FxVerifierNullBugCheck(FxDriverGlobals, retaddr);
  *UsbDevice = 0LL;
  result = FxVerifierCheckIrqlLevel(FxDriverGlobals, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(FxDriverGlobals, Attributes, 1);
    if ( (int)result >= 0 )
    {
      v11 = (FxUsbDevice *)FxObjectHandleAlloc(
                             FxDriverGlobals,
                             ExDefaultNonPagedPoolType,
                             0x1F0uLL,
                             0,
                             Attributes,
                             0,
                             FxObjectTypeExternal);
      if ( v11 )
      {
        FxUsbDevice::FxUsbDevice(v11, FxDriverGlobals);
        v13 = v12;
      }
      else
      {
        v13 = 0LL;
      }
      if ( v13 )
      {
        inited = FxIoTarget::Init(v13, Device);
        if ( inited < 0
          || (UsbDevice = 0LL, inited = FxUsbDevice::InitDevice(v13, USBDClientContractVersion), inited < 0)
          || (inited = FxUsbDevice::CreateInterfaces(v13), inited < 0)
          || (inited = Device->AddIoTarget(Device, v13), inited < 0)
          || (inited = FxObject::Commit(v13, (_FX_DRIVER_GLOBALS *)Attributes, (void **)&UsbDevice, Device, 1u),
              inited < 0) )
        {
          FxObject::ClearEvtCallbacks(v13);
          v13->DeleteObject(v13);
        }
        else
        {
          *v5 = (WDFUSBDEVICE__ *)UsbDevice;
        }
        return (unsigned int)inited;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
