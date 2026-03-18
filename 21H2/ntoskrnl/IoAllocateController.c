/*
 * XREFs of IoAllocateController @ 0x1402578A0
 * Callers:
 *     DifIoAllocateControllerWrapper @ 0x14060C8C0 (DifIoAllocateControllerWrapper.c)
 * Callees:
 *     IoFreeController @ 0x140257920 (IoFreeController.c)
 *     KeInsertDeviceQueue @ 0x140257A00 (KeInsertDeviceQueue.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __stdcall IoAllocateController(
        PCONTROLLER_OBJECT ControllerObject,
        PDEVICE_OBJECT DeviceObject,
        PDRIVER_CONTROL ExecutionRoutine,
        PVOID Context)
{
  DeviceObject->Queue.Wcb.DeviceRoutine = ExecutionRoutine;
  DeviceObject->Queue.Wcb.DeviceContext = Context;
  if ( !KeInsertDeviceQueue(&ControllerObject->DeviceWaitQueue, (PKDEVICE_QUEUE_ENTRY)&DeviceObject->Queue)
    && ((unsigned int (__fastcall *)(PDEVICE_OBJECT, struct _IRP *, _QWORD, PVOID))ExecutionRoutine)(
         DeviceObject,
         DeviceObject->CurrentIrp,
         0LL,
         Context) == 2 )
  {
    IoFreeController(ControllerObject);
  }
}
