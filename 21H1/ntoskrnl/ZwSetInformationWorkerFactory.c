/*
 * XREFs of ZwSetInformationWorkerFactory @ 0x1403F5710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(WorkerFactoryHandle);
}
