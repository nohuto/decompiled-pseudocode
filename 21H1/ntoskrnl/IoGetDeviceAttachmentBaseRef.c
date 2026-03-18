/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x14033DE00
 * Callers:
 *     HalpIommuGetDeviceId @ 0x140376A94 (HalpIommuGetDeviceId.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1405EE29C (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405EE47C (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFile @ 0x140630D80 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140630F50 (FsRtlAcquireFileExclusiveCommon.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1407789C0 (IoWMIDeviceObjectToInstanceName.c)
 *     PipRecordOpenHandleVeto @ 0x1408B4CAC (PipRecordOpenHandleVeto.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1408DE710 (PopRegisterCoolingExtensionProtection.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14033DE1C (IoGetDeviceAttachmentBaseRefWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(DeviceObject, 1953261124LL);
}
