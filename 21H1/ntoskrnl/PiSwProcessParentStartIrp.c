/*
 * XREFs of PiSwProcessParentStartIrp @ 0x1407595D8
 * Callers:
 *     PnpStartDeviceNode @ 0x140723644 (PnpStartDeviceNode.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x14072C180 (PnpDeviceCompletionProcessCompletedRequest.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     IoInvalidateDeviceRelations @ 0x14036BA20 (IoInvalidateDeviceRelations.c)
 *     PiSwFindChildren @ 0x14072C6EC (PiSwFindChildren.c)
 */

void __fastcall PiSwProcessParentStartIrp(PDEVICE_OBJECT DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Children; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  Children = PiSwFindChildren();
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v4, v5, v6);
  if ( Children )
    IoInvalidateDeviceRelations(DeviceObject, SingleBusRelations);
}
