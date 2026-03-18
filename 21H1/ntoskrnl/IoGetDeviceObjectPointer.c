/*
 * XREFs of IoGetDeviceObjectPointer @ 0x1405DB6A0
 * Callers:
 *     NtApphelpCacheControl @ 0x1405DB230 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x1405DB3D0 (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x140688150 (IoVolumeDeviceNameToGuidPath.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x14085FF40 (HalpDynamicDeviceInterfaceNotification.c)
 *     IopOpenSystemVariableDevice @ 0x1408964CC (IopOpenSystemVariableDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1408DE710 (PopRegisterCoolingExtensionProtection.c)
 *     IopCreateArcNamesDisk @ 0x140A53978 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140A53AE0 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x140A54414 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140A8D88C (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A92A98 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A933E8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A935E8 (SbpStartLanman.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwOpenFile @ 0x1403F2990 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall IoGetDeviceObjectPointer(
        PUNICODE_STRING ObjectName,
        ACCESS_MASK DesiredAccess,
        PFILE_OBJECT *FileObject,
        PDEVICE_OBJECT *DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  struct _FILE_OBJECT *v8; // rcx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp+10h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  IoStatusBlock = 0LL;
  ObjectAttributes.ObjectName = ObjectName;
  ObjectAttributes.Attributes = IopCaseInsensitive != 0 ? 576 : 512;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ZwOpenFile(&FileHandle, DesiredAccess, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v7 >= 0 )
  {
    Object = 0LL;
    v7 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v7 >= 0 )
    {
      v8 = (struct _FILE_OBJECT *)Object;
      *FileObject = (PFILE_OBJECT)Object;
      *DeviceObject = IoGetRelatedDeviceObject(v8);
    }
    ZwClose(FileHandle);
  }
  KeLeaveCriticalRegion();
  return v7;
}
