/*
 * XREFs of OSQueueWorkItem @ 0x1C002B6F4
 * Callers:
 *     InsertReadyQueue @ 0x1C00043E0 (InsertReadyQueue.c)
 *     AsyncEvalObject @ 0x1C00054D0 (AsyncEvalObject.c)
 *     RestartContext @ 0x1C0023B90 (RestartContext.c)
 *     AMLIResumeInterpreter @ 0x1C0063500 (AMLIResumeInterpreter.c)
 * Callees:
 *     <none>
 */

LONG __fastcall OSQueueWorkItem(_QWORD *a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
  v3 = (_QWORD *)qword_1C0081898;
  if ( *(__int64 **)qword_1C0081898 != &ACPIWorkQueue )
    __fastfail(3u);
  *a1 = &ACPIWorkQueue;
  a1[1] = v3;
  *v3 = a1;
  qword_1C0081898 = (__int64)a1;
  KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v2);
  return KeSetEvent(&ACPIProcessWorkQueueEvent, 0, 0);
}
