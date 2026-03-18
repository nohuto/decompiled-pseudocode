/*
 * XREFs of imp_WdfIoQueueGetDevice @ 0x1C0002BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0003F34 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C00588FC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

WDFDEVICE__ *__fastcall imp_WdfIoQueueGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Queue)
{
  __int64 v2; // rbx
  __int64 Offset; // r8
  FxIoQueue *v4; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  FxIoQueue *pQueue; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  pQueue = 0LL;
  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(Offset) = 0;
  v4 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
  {
    Offset = LOWORD(v4->FxNonPagedObject::FxObject::__vftable);
    v4 = (FxIoQueue *)((char *)v4 - Offset);
  }
  if ( v4->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pQueue, (void *)Queue, 0x1003u, Offset);
    v4 = pQueue;
  }
  m_DeviceBase = v4->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    return (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  return (WDFDEVICE__ *)v2;
}
