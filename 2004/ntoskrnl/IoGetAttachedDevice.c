/*
 * XREFs of IoGetAttachedDevice @ 0x140290C30
 * Callers:
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140271850 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140277254 (IopAttachDeviceToDeviceStackSafe.c)
 *     NtSetInformationFile @ 0x14028FD10 (NtSetInformationFile.c)
 *     IoAdjustStackSizeForRedirection @ 0x1405002C0 (IoAdjustStackSizeForRedirection.c)
 *     FsRtlQueryOpen @ 0x1405CFB60 (FsRtlQueryOpen.c)
 *     IopXxxControlFile @ 0x140674CF0 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x140675CE0 (IopCloseFile.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     NtQueryInformationFile @ 0x1406780E0 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x140678F40 (IopDeleteFile.c)
 *     IopCopyOffloadCapable @ 0x1406DAD8C (IopCopyOffloadCapable.c)
 *     NtUnlockFile @ 0x1406DF1B0 (NtUnlockFile.c)
 *     PipSendGuestAssignedNotification @ 0x1408B1360 (PipSendGuestAssignedNotification.c)
 *     IopShutdownBaseFileSystems @ 0x1409A82C4 (IopShutdownBaseFileSystems.c)
 *     VfFilterAttach @ 0x1409E1EE4 (VfFilterAttach.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDevice(PDEVICE_OBJECT DeviceObject)
{
  struct _DEVICE_OBJECT *i; // rax

  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  return DeviceObject;
}
