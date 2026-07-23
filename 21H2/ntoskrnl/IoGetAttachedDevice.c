/*
 * XREFs of IoGetAttachedDevice @ 0x14035E490
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140271504 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402F76F0 (IoGetAttachedDeviceReferenceWithTag.c)
 *     NtSetInformationFile @ 0x14035CFC0 (NtSetInformationFile.c)
 *     IoAdjustStackSizeForRedirection @ 0x140505690 (IoAdjustStackSizeForRedirection.c)
 *     FsRtlQueryOpen @ 0x1405D8FB0 (FsRtlQueryOpen.c)
 *     IopCopyOffloadCapable @ 0x1405E7D54 (IopCopyOffloadCapable.c)
 *     NtUnlockFile @ 0x1405EF3E0 (NtUnlockFile.c)
 *     NtQueryInformationFile @ 0x1406EA600 (NtQueryInformationFile.c)
 *     IopCloseFile @ 0x140713E00 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     IopDeleteFile @ 0x14071AB40 (IopDeleteFile.c)
 *     PipSendGuestAssignedNotification @ 0x1408B45C0 (PipSendGuestAssignedNotification.c)
 *     IopShutdownBaseFileSystems @ 0x1409AC064 (IopShutdownBaseFileSystems.c)
 *     VfFilterAttach @ 0x1409E5EF4 (VfFilterAttach.c)
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
