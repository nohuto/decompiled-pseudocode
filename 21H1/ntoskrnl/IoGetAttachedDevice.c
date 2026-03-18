/*
 * XREFs of IoGetAttachedDevice @ 0x1402543B0
 * Callers:
 *     NtSetInformationFile @ 0x140253490 (NtSetInformationFile.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402E0EE0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14033DC04 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoAdjustStackSizeForRedirection @ 0x1404FFC70 (IoAdjustStackSizeForRedirection.c)
 *     FsRtlQueryOpen @ 0x1405CE790 (FsRtlQueryOpen.c)
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x1405FDC00 (IopCloseFile.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     NtQueryInformationFile @ 0x140600000 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x140600E60 (IopDeleteFile.c)
 *     IopCopyOffloadCapable @ 0x1406B9A7C (IopCopyOffloadCapable.c)
 *     NtUnlockFile @ 0x1406BEC50 (NtUnlockFile.c)
 *     PipSendGuestAssignedNotification @ 0x1408B0040 (PipSendGuestAssignedNotification.c)
 *     IopShutdownBaseFileSystems @ 0x1409A7464 (IopShutdownBaseFileSystems.c)
 *     VfFilterAttach @ 0x1409E1E84 (VfFilterAttach.c)
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
