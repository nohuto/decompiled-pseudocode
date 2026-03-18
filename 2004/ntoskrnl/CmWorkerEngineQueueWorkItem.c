/*
 * XREFs of CmWorkerEngineQueueWorkItem @ 0x14070848C
 * Callers:
 *     CmpDoQueueLateUnloadWorker @ 0x14063FF6C (CmpDoQueueLateUnloadWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void __fastcall CmWorkerEngineQueueWorkItem(_QWORD *a1)
{
  char v2; // di
  _QWORD *v3; // rax

  v2 = 0;
  ExAcquireFastMutex(&CmpWorkerEngineLock);
  v3 = (_QWORD *)qword_140C47EC8;
  if ( *(PVOID **)qword_140C47EC8 != &CmpWorkerEngineListHead )
    __fastfail(3u);
  *a1 = &CmpWorkerEngineListHead;
  a1[1] = v3;
  *v3 = a1;
  qword_140C47EC8 = (__int64)a1;
  if ( !CmpWorkerEngineWorkItemActive )
  {
    CmpWorkerEngineWorkItemActive = 1;
    v2 = 1;
  }
  KeReleaseGuardedMutex(&CmpWorkerEngineLock);
  if ( v2 )
    ExQueueWorkItem(&CmpWorkerEngineWorkItem, DelayedWorkQueue);
}
