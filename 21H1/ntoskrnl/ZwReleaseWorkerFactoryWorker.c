/*
 * XREFs of ZwReleaseWorkerFactoryWorker @ 0x1403F5110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseWorkerFactoryWorker(HANDLE WorkerFactoryHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(WorkerFactoryHandle);
}
