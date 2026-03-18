/*
 * XREFs of OSQueueWorkItem @ 0x1C002B8D0
 * Callers:
 *     RestartContext @ 0x1C000DCC0 (RestartContext.c)
 *     InsertReadyQueue @ 0x1C000E2B0 (InsertReadyQueue.c)
 *     AsyncEvalObject @ 0x1C00114E0 (AsyncEvalObject.c)
 *     AMLIResumeInterpreter @ 0x1C0064914 (AMLIResumeInterpreter.c)
 * Callees:
 *     <none>
 */

LONG __fastcall OSQueueWorkItem(_QWORD *a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&ACPIWorkerQueueSpinLock);
  v3 = (_QWORD *)qword_1C0080A48;
  if ( *(__int64 **)qword_1C0080A48 != &ACPIWorkQueue )
    __fastfail(3u);
  *a1 = &ACPIWorkQueue;
  a1[1] = v3;
  *v3 = a1;
  qword_1C0080A48 = (__int64)a1;
  KeReleaseSpinLock(&ACPIWorkerQueueSpinLock, v2);
  return KeSetEvent(&ACPIProcessWorkQueueEvent, 0, 0);
}
