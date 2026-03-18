/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x14036B850
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14028B12C (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14028D3BC (FsRtlReleaseFileForModWrite.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x140560680 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1406C1980 (IoWMIDeviceObjectToInstanceName.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1406FE4F0 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407F0748 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407F099C (FsRtlAcquireFileForCcFlushEx.c)
 *     PipSetDevNodeStateFlags @ 0x140947D0C (PipSetDevNodeStateFlags.c)
 *     PipRecordOpenHandleVeto @ 0x14095E7EC (PipRecordOpenHandleVeto.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14098B980 (PopRegisterCoolingExtensionProtection.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x14036B86C (IoGetDeviceAttachmentBaseRefWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag(DeviceObject, 1953261124LL);
}
