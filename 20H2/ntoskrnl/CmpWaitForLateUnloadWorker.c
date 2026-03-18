/*
 * XREFs of CmpWaitForLateUnloadWorker @ 0x1402F37AC
 * Callers:
 *     CmpDeleteKeyObject @ 0x14061C620 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     ExBlockOnAddressPushLock @ 0x1402F3810 (ExBlockOnAddressPushLock.c)
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
