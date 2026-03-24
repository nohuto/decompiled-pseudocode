/*
 * XREFs of IoGetAttachedDevice @ 0x140353740
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402832F4 (IopAttachDeviceToDeviceStackSafe.c)
 *     NtSetInformationFile @ 0x140352270 (NtSetInformationFile.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140362020 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IoAdjustStackSizeForRedirection @ 0x140505710 (IoAdjustStackSizeForRedirection.c)
 *     FsRtlQueryOpen @ 0x1405D8FB0 (FsRtlQueryOpen.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     IopCopyOffloadCapable @ 0x1406888C4 (IopCopyOffloadCapable.c)
 *     NtUnlockFile @ 0x14068F570 (NtUnlockFile.c)
 *     IopCloseFile @ 0x1406FCA20 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1406FE010 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140703760 (IopDeleteFile.c)
 *     PipSendGuestAssignedNotification @ 0x1408B4460 (PipSendGuestAssignedNotification.c)
 *     IopShutdownBaseFileSystems @ 0x1409AB134 (IopShutdownBaseFileSystems.c)
 *     VfFilterAttach @ 0x1409E4EF4 (VfFilterAttach.c)
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
