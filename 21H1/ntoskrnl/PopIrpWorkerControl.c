/*
 * XREFs of PopIrpWorkerControl @ 0x1403C7B90
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     PopCreateDynamicIrpWorker @ 0x1403A1CB0 (PopCreateDynamicIrpWorker.c)
 */

void __noreturn PopIrpWorkerControl()
{
  char v0; // bl

  while ( 1 )
  {
    v0 = 0;
    KeWaitForSingleObject(&PopIrpWorkerControlEvent, Executive, 0, 0, 0LL);
    ExAcquireFastMutex(&PopIrpWorkerMutex);
    PopIrpWorkerRequested = 0;
    if ( PopCreateIrpWorkerAllowed )
    {
      ++PopIrpWorkerPendingCount;
      v0 = 1;
    }
    KeReleaseGuardedMutex(&PopIrpWorkerMutex);
    if ( v0 )
      PopCreateDynamicIrpWorker(0LL);
  }
}
