/*
 * XREFs of PiSwProcessParentStartIrp @ 0x140732958
 * Callers:
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140728E04 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpStartDeviceNode @ 0x14072C52C (PnpStartDeviceNode.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     IoInvalidateDeviceRelations @ 0x14036DA30 (IoInvalidateDeviceRelations.c)
 *     PiSwFindChildren @ 0x1407329D8 (PiSwFindChildren.c)
 */

void __fastcall PiSwProcessParentStartIrp(PDEVICE_OBJECT DeviceObject)
{
  char *DeviceNode; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 Children; // rbx

  if ( DeviceObject )
    DeviceNode = (char *)DeviceObject->DeviceObjectExtension->DeviceNode;
  else
    DeviceNode = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  Children = PiSwFindChildren(DeviceNode + 40);
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Children )
    IoInvalidateDeviceRelations(DeviceObject, SingleBusRelations);
}
