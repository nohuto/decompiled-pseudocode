/*
 * XREFs of IoOpenDeviceRegistryKey @ 0x1406C54A0
 * Callers:
 *     DifIoOpenDeviceRegistryKeyWrapper @ 0x14060FEF0 (DifIoOpenDeviceRegistryKeyWrapper.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     IopApplyMutableTagToRegistryKey @ 0x1406C55CC (IopApplyMutableTagToRegistryKey.c)
 *     _CmOpenDeviceRegKey @ 0x14077F2EC (_CmOpenDeviceRegKey.c)
 */

NTSTATUS __stdcall IoOpenDeviceRegistryKey(
        PDEVICE_OBJECT DeviceObject,
        ULONG DevInstKeyType,
        ACCESS_MASK DesiredAccess,
        PHANDLE DeviceRegKey)
{
  char v6; // bl
  _DWORD *DeviceNode; // rdx
  int v9; // ebp
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r8d
  NTSTATUS v12; // ebx

  v6 = DevInstKeyType;
  if ( !DeviceObject )
    return -1073741811;
  DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
    return -1073741811;
  if ( (v6 & 1) != 0 )
  {
    v9 = 17;
    goto LABEL_7;
  }
  if ( (v6 & 2) == 0 )
    return -1073741811;
  v9 = 18;
LABEL_7:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  v11 = v9 | 0x200;
  if ( (v6 & 4) == 0 )
    v11 = v9;
  v12 = CmOpenDeviceRegKey(
          PiPnpRtlCtx,
          *((_QWORD *)DeviceObject->DeviceObjectExtension->DeviceNode + 6),
          v11,
          0,
          DesiredAccess,
          1,
          (__int64)DeviceRegKey,
          0LL);
  if ( v12 >= 0 )
  {
    if ( DeviceRegKey )
      IopApplyMutableTagToRegistryKey(*DeviceRegKey);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v12;
}
