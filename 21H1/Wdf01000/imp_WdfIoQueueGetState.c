/*
 * XREFs of imp_WdfIoQueueGetState @ 0x1C000BC20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

__int64 __fastcall imp_WdfIoQueueGetState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        unsigned int *QueueCount,
        unsigned int *DriverCount)
{
  volatile int m_DriverIoCount; // edx
  int m_RequestCount; // r8d
  __int64 result; // rax
  FxIoQueue *pQueue; // [rsp+40h] [rbp+18h] BYREF

  pQueue = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Queue, 0x1003u, (void **)&pQueue);
  m_DriverIoCount = pQueue->m_DriverIoCount;
  m_RequestCount = pQueue->m_Queue.m_RequestCount;
  if ( QueueCount )
    *QueueCount = m_RequestCount;
  if ( DriverCount )
    *DriverCount = m_DriverIoCount;
  result = pQueue->m_QueueState & 3;
  if ( !m_RequestCount )
    result = (unsigned int)result | 4;
  if ( !m_DriverIoCount )
    result = (unsigned int)result | 8;
  if ( pQueue->m_PowerManaged )
  {
    if ( pQueue->m_PowerState != FxIoQueuePowerOn )
      return (unsigned int)result | 0x10;
  }
  return result;
}
