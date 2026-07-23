/*
 * XREFs of CmpWaitForLateUnloadWorker @ 0x14026CE98
 * Callers:
 *     CmpDeleteKeyObject @ 0x14065C3E0 (CmpDeleteKeyObject.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140213E80 (ExBlockOnAddressPushLock.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 */

void CmpWaitForLateUnloadWorker()
{
  __int64 v0; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    ExAcquireFastMutex(&CmpWorkerEngineLock);
    LOBYTE(v0) = CmpWorkerEngineWorkItemActive;
    KeReleaseGuardedMutex(&CmpWorkerEngineLock);
    if ( !(_BYTE)v0 )
      break;
    ExBlockOnAddressPushLock((__int64)&CmpWorkerEngineFinishedEvent, &CmpWorkerEngineWorkItemActive, &v0, 1uLL, 0LL);
  }
}
