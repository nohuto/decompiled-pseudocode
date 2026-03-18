/*
 * XREFs of IoGetAttachedDevice @ 0x1402A78F0
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14024FC04 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402D30A0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     IoAdjustStackSizeForRedirection @ 0x1405572B0 (IoAdjustStackSizeForRedirection.c)
 *     IopCopyOffloadCapable @ 0x1406E8D8C (IopCopyOffloadCapable.c)
 *     NtUnlockFile @ 0x14071CD90 (NtUnlockFile.c)
 *     IopDeleteFile @ 0x14072B630 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14072E9E0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     FsRtlQueryOpen @ 0x1407F730C (FsRtlQueryOpen.c)
 *     PipSendGuestAssignedNotification @ 0x14095A544 (PipSendGuestAssignedNotification.c)
 *     IopShutdownBaseFileSystems @ 0x140A65554 (IopShutdownBaseFileSystems.c)
 *     VfFilterAttach @ 0x140A9E12C (VfFilterAttach.c)
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
