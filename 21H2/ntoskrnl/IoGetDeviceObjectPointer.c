/*
 * XREFs of IoGetDeviceObjectPointer @ 0x14068AA90
 * Callers:
 *     NtApphelpCacheControl @ 0x1405E5590 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x14068A7C0 (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1406F9CC0 (IoVolumeDeviceNameToGuidPath.c)
 *     HalpDynamicDeviceInterfaceNotification @ 0x140864A20 (HalpDynamicDeviceInterfaceNotification.c)
 *     IopOpenSystemVariableDevice @ 0x14089ABCC (IopOpenSystemVariableDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1408E3110 (PopRegisterCoolingExtensionProtection.c)
 *     IopAssignBootDriveLetter @ 0x140A62AA8 (IopAssignBootDriveLetter.c)
 *     IopCreateArcNamesDisk @ 0x140A62CE8 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x140A62E50 (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140A909DC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140A95C98 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x140A965E8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A967E8 (SbpStartLanman.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenFile @ 0x1403FABE0 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
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
