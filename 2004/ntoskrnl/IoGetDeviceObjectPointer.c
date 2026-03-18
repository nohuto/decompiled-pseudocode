/*
 * XREFs of IoGetDeviceObjectPointer @ 0x1406619A0
 * Callers:
 *     IoVolumeDeviceNameToGuidPath @ 0x14063A5D0 (IoVolumeDeviceNameToGuidPath.c)
 *     NtApphelpCacheControl @ 0x140661530 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x1406616D0 (IoVolumeDeviceToDosName.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140861290 (HalpDynamicDeviceInterfaceNotification.c)
 *     IopOpenSystemVariableDevice @ 0x1408977EC (IopOpenSystemVariableDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1408DF970 (PopRegisterCoolingExtensionProtection.c)
 *     IopAssignBootDriveLetter @ 0x140A67244 (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesDisk @ 0x140A67484 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140A675EC (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140A8CE7C (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A921A8 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A92AF8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A92CF8 (SbpStartLanman.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     IoGetRelatedDeviceObject @ 0x14028F6E0 (IoGetRelatedDeviceObject.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenFile @ 0x1403F3C20 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
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
