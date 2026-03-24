/*
 * XREFs of CmpWaitForLateUnloadWorker @ 0x14027EEF8
 * Callers:
 *     CmpDeleteKeyObject @ 0x1406675C0 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     ExBlockOnAddressPushLock @ 0x14029CC60 (ExBlockOnAddressPushLock.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 */

void CmpWaitForLateUnloadWorker()
{
  char v0; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    ExAcquireFastMutex(&CmpWorkerEngineLock);
    v0 = CmpWorkerEngineWorkItemActive;
    KeReleaseGuardedMutex(&CmpWorkerEngineLock);
    if ( !v0 )
      break;
    ExBlockOnAddressPushLock(
      (unsigned int)&CmpWorkerEngineFinishedEvent,
      (unsigned int)&CmpWorkerEngineWorkItemActive,
      (unsigned int)&v0,
      1,
      0LL);
  }
}
