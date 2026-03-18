/*
 * XREFs of IoGetDeviceObjectPointer @ 0x1405DDA50
 * Callers:
 *     IoVolumeDeviceNameToGuidPath @ 0x1405DD720 (IoVolumeDeviceNameToGuidPath.c)
 *     NtApphelpCacheControl @ 0x1405F8320 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x1405FA930 (IoVolumeDeviceToDosName.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140866CB0 (HalpDynamicDeviceInterfaceNotification.c)
 *     IopOpenSystemVariableDevice @ 0x14089D49C (IopOpenSystemVariableDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1408E57B0 (PopRegisterCoolingExtensionProtection.c)
 *     IopCreateArcNamesDisk @ 0x140A59D74 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140A59EDC (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x140A5A814 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140A92B7C (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A97E08 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A98758 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A98958 (SbpStartLanman.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenFile @ 0x1403F87D0 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
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
