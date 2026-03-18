/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x140361820
 * Callers:
 *     HalpIommuGetDeviceId @ 0x140379834 (HalpIommuGetDeviceId.c)
 *     FsRtlReleaseFile @ 0x1406802A0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140680470 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407080AC (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14070828C (FsRtlAcquireFileForCcFlushEx.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1407893D0 (IoWMIDeviceObjectToInstanceName.c)
 *     PipRecordOpenHandleVeto @ 0x1408BBBEC (PipRecordOpenHandleVeto.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1408E57B0 (PopRegisterCoolingExtensionProtection.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14036183C (IoGetDeviceAttachmentBaseRefWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(DeviceObject, 1953261124LL);
}
