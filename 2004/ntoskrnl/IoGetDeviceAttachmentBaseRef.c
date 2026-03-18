/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x140277450
 * Callers:
 *     HalpIommuGetDeviceId @ 0x1403778A4 (HalpIommuGetDeviceId.c)
 *     FsRtlReleaseFile @ 0x1405FBD40 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405FBF10 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14069779C (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14069797C (FsRtlAcquireFileForCcFlushEx.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x14077ADD0 (IoWMIDeviceObjectToInstanceName.c)
 *     PipRecordOpenHandleVeto @ 0x1408B5FCC (PipRecordOpenHandleVeto.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1408DF970 (PopRegisterCoolingExtensionProtection.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14027746C (IoGetDeviceAttachmentBaseRefWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(DeviceObject, 1953261124LL);
}
