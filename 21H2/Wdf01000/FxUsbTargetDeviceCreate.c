/*
 * XREFs of FxUsbTargetDeviceCreate @ 0x1C0077950
 * Callers:
 *     imp_WdfUsbTargetDeviceCreate @ 0x1C0078080 (imp_WdfUsbTargetDeviceCreate.c)
 *     imp_WdfUsbTargetDeviceCreateWithParameters @ 0x1C0078190 (imp_WdfUsbTargetDeviceCreateWithParameters.c)
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00062C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z @ 0x1C0026D34 (-Init@FxIoTarget@@QEAAJPEAVFxDeviceBase@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ??0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C007BBAC (--0FxUsbDevice@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x1C007C358 (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C007F964 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
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
  FxIoTarget *v12; // rax
  FxUsbDevice *v13; // rdi
  int inited; // ebx
  FxPoolTypeOrPoolFlags v15; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]

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
      *(_QWORD *)&v15.UsePoolType = 0LL;
      v15.u.PoolFlags = 64LL;
      v11 = (FxUsbDevice *)FxObjectHandleAllocCommon(
                             FxDriverGlobals,
                             &v15,
                             0x1F0uLL,
                             0,
                             Attributes,
                             0,
                             FxObjectTypeExternal);
      if ( v11 && (FxUsbDevice::FxUsbDevice(v11, FxDriverGlobals), (v13 = (FxUsbDevice *)v12) != 0LL) )
      {
        inited = FxIoTarget::Init(v12, Device);
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
