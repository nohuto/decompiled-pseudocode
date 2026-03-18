/*
 * XREFs of imp_WdfIoQueueGetState @ 0x1C00022B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall imp_WdfIoQueueGetState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        unsigned int *QueueCount,
        unsigned int *DriverCount)
{
  __int64 Offset; // r8
  FxIoQueue *v7; // rcx
  unsigned int m_RequestCount; // r9d
  unsigned int m_DriverIoCount; // r8d
  unsigned __int32 v10; // ecx
  FxIoQueue *pQueue; // [rsp+48h] [rbp+10h] BYREF

  pQueue = 0LL;
  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  LOWORD(Offset) = 0;
  v7 = (FxIoQueue *)(~Queue & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Queue & 1) != 0 )
  {
    Offset = LOWORD(v7->FxNonPagedObject::FxObject::__vftable);
    v7 = (FxIoQueue *)((char *)v7 - Offset);
  }
  if ( v7->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    pQueue = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pQueue, (void *)Queue, 0x1003u, Offset);
    v7 = pQueue;
  }
  m_RequestCount = v7->m_Queue.m_RequestCount;
  m_DriverIoCount = v7->m_DriverIoCount;
  if ( QueueCount )
    *QueueCount = m_RequestCount;
  if ( DriverCount )
    *DriverCount = m_DriverIoCount;
  v10 = pQueue->m_QueueState & 3 | 4;
  if ( m_RequestCount )
    v10 = pQueue->m_QueueState & 3;
  if ( !m_DriverIoCount )
    v10 |= 8u;
  if ( pQueue->m_PowerManaged && pQueue->m_PowerState != FxIoQueuePowerOn )
    v10 |= 0x10u;
  return v10;
}
