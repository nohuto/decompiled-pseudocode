/*
 * XREFs of IoAllocateWorkItem @ 0x1402DE6E0
 * Callers:
 *     PnpDeviceCompletionRequestDestroy @ 0x1402DE684 (PnpDeviceCompletionRequestDestroy.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

PIO_WORKITEM __stdcall IoAllocateWorkItem(PDEVICE_OBJECT DeviceObject)
{
  PIO_WORKITEM result; // rax

  result = (PIO_WORKITEM)ExAllocatePool2(64LL, 88LL, 538996553LL);
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
