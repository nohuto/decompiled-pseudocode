/*
 * XREFs of IoAllocateWorkItem @ 0x140304590
 * Callers:
 *     PnpDeviceCompletionRequestDestroy @ 0x14036B264 (PnpDeviceCompletionRequestDestroy.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402033E4 (IopVerifierExAllocatePool.c)
 */

PIO_WORKITEM __stdcall IoAllocateWorkItem(PDEVICE_OBJECT DeviceObject)
{
  PIO_WORKITEM result; // rax

  result = (PIO_WORKITEM)IopVerifierExAllocatePool(NonPagedPoolNx, 0x58uLL);
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
