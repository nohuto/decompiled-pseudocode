/*
 * XREFs of imp_WdfDeviceWdmGetDeviceObject @ 0x1C00107B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

_DEVICE_OBJECT *__fastcall imp_WdfDeviceWdmGetDeviceObject(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Device)
{
  __int64 Offset; // r8
  FxDeviceBase *v3; // rcx
  FxDeviceBase *pDevice; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  pDevice = 0LL;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1030uLL);
  v3 = (FxDeviceBase *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v3->FxNonPagedObject::FxObject::__vftable);
    v3 = (FxDeviceBase *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4144 )
  {
    pDevice = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pDevice, (void *)Device, 0x1030u, Offset);
    v3 = pDevice;
  }
  return v3->m_DeviceObject.m_DeviceObject;
}
