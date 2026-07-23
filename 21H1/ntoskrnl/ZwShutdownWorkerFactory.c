/*
 * XREFs of ZwShutdownWorkerFactory @ 0x1403F59D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwShutdownWorkerFactory(HANDLE WorkerFactoryHandle, LONG *PendingWorkerCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(WorkerFactoryHandle);
}
