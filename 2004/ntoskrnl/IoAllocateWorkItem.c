/*
 * XREFs of IoAllocateWorkItem @ 0x140341360
 * Callers:
 *     PnpDeviceCompletionRequestDestroy @ 0x14036B334 (PnpDeviceCompletionRequestDestroy.c)
 * Callees:
 *     IopVerifierExAllocatePool_0 @ 0x14027C6F4 (IopVerifierExAllocatePool_0.c)
 */

PIO_WORKITEM __stdcall IoAllocateWorkItem(PDEVICE_OBJECT DeviceObject)
{
  PIO_WORKITEM result; // rax

  result = (PIO_WORKITEM)IopVerifierExAllocatePool_0(NonPagedPoolNx, 0x58uLL);
  if ( result )
  {
    result->WorkOnBehalfThread = 0LL;
    result->IoObject = DeviceObject;
    result->Type = 1;
    result->WorkItem.List.Flink = 0LL;
    result->WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopProcessWorkItem;
    result->WorkItem.Parameter = result;
  }
  return result;
}
