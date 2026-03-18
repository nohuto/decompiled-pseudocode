/*
 * XREFs of IoGetAttachedDevice @ 0x14020D8F0
 * Callers:
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402047B0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     NtSetInformationFile @ 0x14020FE90 (NtSetInformationFile.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140361624 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoAdjustStackSizeForRedirection @ 0x140503B90 (IoAdjustStackSizeForRedirection.c)
 *     FsRtlQueryOpen @ 0x1405D6010 (FsRtlQueryOpen.c)
 *     NtQueryInformationFile @ 0x1405FB1C0 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x1405FE150 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14060E6B0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x14060FB00 (IopXxxControlFile.c)
 *     NtUnlockFile @ 0x1406B6C50 (NtUnlockFile.c)
 *     IopCopyOffloadCapable @ 0x1406E2BD8 (IopCopyOffloadCapable.c)
 *     PipSendGuestAssignedNotification @ 0x1408B6F80 (PipSendGuestAssignedNotification.c)
 *     IopShutdownBaseFileSystems @ 0x1409AE234 (IopShutdownBaseFileSystems.c)
 *     VfFilterAttach @ 0x1409E7F04 (VfFilterAttach.c)
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
