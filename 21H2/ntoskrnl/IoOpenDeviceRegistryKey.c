/*
 * XREFs of IoOpenDeviceRegistryKey @ 0x140602CD0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140602DFC (IopApplyMutableTagToRegistryKey.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

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
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  return v12;
}
