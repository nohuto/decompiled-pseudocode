/*
 * XREFs of PiSwProcessParentStartIrp @ 0x1406E4E14
 * Callers:
 *     PnpStartDeviceNode @ 0x140749C4C (PnpStartDeviceNode.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1407730FC (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IoInvalidateDeviceRelations @ 0x1402DCE90 (IoInvalidateDeviceRelations.c)
 *     PiSwFindChildren @ 0x14076E82C (PiSwFindChildren.c)
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
  KeLeaveCriticalRegion();
  if ( Children )
    IoInvalidateDeviceRelations(DeviceObject, SingleBusRelations);
}
