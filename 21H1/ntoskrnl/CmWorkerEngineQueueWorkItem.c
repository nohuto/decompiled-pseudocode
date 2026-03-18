/*
 * XREFs of CmWorkerEngineQueueWorkItem @ 0x1406E4AFC
 * Callers:
 *     CmpDoQueueLateUnloadWorker @ 0x14069107C (CmpDoQueueLateUnloadWorker.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 */

void __fastcall CmWorkerEngineQueueWorkItem(_QWORD *a1)
{
  char v2; // di
  _QWORD *v3; // rax

  v2 = 0;
  ExAcquireFastMutex(&CmpWorkerEngineLock);
  v3 = (_QWORD *)qword_140C48098;
  if ( *(PVOID **)qword_140C48098 != &CmpWorkerEngineListHead )
    __fastfail(3u);
  *a1 = &CmpWorkerEngineListHead;
  a1[1] = v3;
  *v3 = a1;
  qword_140C48098 = (__int64)a1;
  if ( !CmpWorkerEngineWorkItemActive )
  {
    CmpWorkerEngineWorkItemActive = 1;
    v2 = 1;
  }
  KeReleaseGuardedMutex(&CmpWorkerEngineLock);
  if ( v2 )
    ExQueueWorkItem(&CmpWorkerEngineWorkItem, DelayedWorkQueue);
}
