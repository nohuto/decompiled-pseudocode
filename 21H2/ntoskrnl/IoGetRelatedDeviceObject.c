/*
 * XREFs of IoGetRelatedDeviceObject @ 0x1402AC1B0
 * Callers:
 *     IoAsynchronousPageWrite @ 0x14020C810 (IoAsynchronousPageWrite.c)
 *     CcSetValidData @ 0x14023F3E8 (CcSetValidData.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14028B12C (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14028D3BC (FsRtlReleaseFileForModWrite.c)
 *     CcZeroData @ 0x14029BD20 (CcZeroData.c)
 *     PnpGetRelatedTargetDevice @ 0x1402D2E74 (PnpGetRelatedTargetDevice.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     IoSynchronousPageWriteEx @ 0x140340130 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x140342C50 (IoPageReadEx.c)
 *     IopValidateAndGetWriteParameters @ 0x1404186A0 (IopValidateAndGetWriteParameters.c)
 *     FsRtlGetFileExtents @ 0x140540EA0 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x140541010 (FsRtlMdlReadComplete.c)
 *     CmpFileFlushAndPurge @ 0x14068A23C (CmpFileFlushAndPurge.c)
 *     FsRtlSetKernelEaFile @ 0x1406A3540 (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x1406A443C (FsRtlSetFileSize.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A4870 (FsRtlQueryKernelEaFile.c)
 *     IopParseFile @ 0x1406B4800 (IopParseFile.c)
 *     NtQueryEaFile @ 0x1406B6D70 (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x1406BF5F0 (NtFlushBuffersFileEx.c)
 *     WmipGetFilePDO @ 0x1406C1BD4 (WmipGetFilePDO.c)
 *     FsRtlQueryCachedVdl @ 0x1406C2860 (FsRtlQueryCachedVdl.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     IopOpenLinkOrRenameTarget @ 0x1406C78D4 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x1406C7B5C (IopGetBasicInformationFile.c)
 *     IopGetSetObjectId @ 0x1406D3ACC (IopGetSetObjectId.c)
 *     CcMdlReadComplete @ 0x1406DA170 (CcMdlReadComplete.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406E4AF0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x1406E4B70 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x1406E4C10 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x1406E4C90 (FsRtlMdlRead.c)
 *     CcMdlWriteComplete @ 0x1406E7450 (CcMdlWriteComplete.c)
 *     IopCopyOffloadCapable @ 0x1406E8D8C (IopCopyOffloadCapable.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1406FE4F0 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlGetFileSize @ 0x1406FF640 (FsRtlGetFileSize.c)
 *     IopGetFileInformation @ 0x14070FC40 (IopGetFileInformation.c)
 *     IoGetDeviceObjectPointer @ 0x140710E60 (IoGetDeviceObjectPointer.c)
 *     NtUnlockFile @ 0x14071CD90 (NtUnlockFile.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     IopQueryXxxInformation @ 0x14071E6BC (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x14071E8F0 (IopGetSetSecurityObject.c)
 *     IopDeleteFile @ 0x14072B630 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IopCloseFile @ 0x14072E9E0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x14073A450 (IopReadFile.c)
 *     BuildQueryDirectoryIrp @ 0x1407563A0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1407AF670 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407F0748 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407F099C (FsRtlAcquireFileForCcFlushEx.c)
 *     NtSetVolumeInformationFile @ 0x1407FB3A0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14081C234 (FsRtlIssueFileNotificationFsctl.c)
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 *     PiPagePathSetState @ 0x14084BB98 (PiPagePathSetState.c)
 *     PopGetPolicyDeviceObject @ 0x140858E74 (PopGetPolicyDeviceObject.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14092D730 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x14092DC80 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x14092ED30 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x14093449C (IopGetVolumeId.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140935320 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x140935C64 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x140935E60 (IoAttachDevice.c)
 *     NtSetEaFile @ 0x140939360 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x14093FC6C (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x1409B53D8 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D5B38 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x1409D6428 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x1409D71F0 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1409D8B9C (SmpUtilsGetControlDevice.c)
 *     VhdiMountVhdFile @ 0x140B54AE4 (VhdiMountVhdFile.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetRelatedDeviceObject(PFILE_OBJECT FileObject)
{
  PVPB Vpb; // rax
  PDEVICE_OBJECT result; // rax
  struct _DEVICE_OBJECT *AttachedDevice; // rdx
  _QWORD *FileObjectExtension; // r8
  PVPB v5; // rax
  PDEVICE_OBJECT *v6; // rcx

  Vpb = FileObject->Vpb;
  if ( (!Vpb || (result = Vpb->DeviceObject) == 0LL)
    && ((FileObject->Flags & 0x800) != 0
     || (v5 = FileObject->DeviceObject->Vpb) == 0LL
     || (result = v5->DeviceObject) == 0LL) )
  {
    result = FileObject->DeviceObject;
  }
  AttachedDevice = result->AttachedDevice;
  if ( AttachedDevice )
  {
    FileObjectExtension = FileObject->FileObjectExtension;
    if ( FileObjectExtension
      && FileObjectExtension != IopRevocationExtension
      && (v6 = (PDEVICE_OBJECT *)FileObjectExtension[2]) != 0LL
      && *v6 )
    {
      while ( result != *v6 )
      {
        result = result->AttachedDevice;
        if ( !result )
          goto LABEL_5;
      }
      return *v6;
    }
    else
    {
      do
      {
LABEL_5:
        result = AttachedDevice;
        AttachedDevice = AttachedDevice->AttachedDevice;
      }
      while ( AttachedDevice );
    }
  }
  return result;
}
