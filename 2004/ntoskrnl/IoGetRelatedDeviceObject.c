/*
 * XREFs of IoGetRelatedDeviceObject @ 0x14028F6E0
 * Callers:
 *     IoPageReadEx @ 0x140227B50 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140227DC8 (IoSynchronousPageWriteEx.c)
 *     CcZeroData @ 0x140267D10 (CcZeroData.c)
 *     PnpGetRelatedTargetDevice @ 0x140271278 (PnpGetRelatedTargetDevice.c)
 *     CcSetValidData @ 0x14027171C (CcSetValidData.c)
 *     NtSetInformationFile @ 0x14028FD10 (NtSetInformationFile.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1402F77F4 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x1402F824C (FsRtlReleaseFileForModWrite.c)
 *     IoAsynchronousPageWrite @ 0x140326468 (IoAsynchronousPageWrite.c)
 *     FsRtlGetFileExtents @ 0x1404E9BD0 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x1404E9D30 (FsRtlMdlReadComplete.c)
 *     FsRtlReleaseFile @ 0x1405FBD40 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1405FBF10 (FsRtlAcquireFileExclusiveCommon.c)
 *     IopQueryXxxInformation @ 0x140605A8C (IopQueryXxxInformation.c)
 *     FsRtlGetFileSize @ 0x14060EA60 (FsRtlGetFileSize.c)
 *     IopOpenLinkOrRenameTarget @ 0x140614700 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x140617B38 (IopGetBasicInformationFile.c)
 *     CmpFileFlushAndPurge @ 0x140639C54 (CmpFileFlushAndPurge.c)
 *     IopGetFileInformation @ 0x1406613F4 (IopGetFileInformation.c)
 *     IoGetDeviceObjectPointer @ 0x1406619A0 (IoGetDeviceObjectPointer.c)
 *     IopXxxControlFile @ 0x140674CF0 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x140675CE0 (IopCloseFile.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     NtQueryInformationFile @ 0x1406780E0 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x140678F40 (IopDeleteFile.c)
 *     NtWriteFile @ 0x14068B600 (NtWriteFile.c)
 *     NtReadFile @ 0x14068C230 (NtReadFile.c)
 *     IopGetSetSecurityObject @ 0x14068C9D0 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x14068CF20 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x14068EAF0 (NtQueryVolumeInformationFile.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14069779C (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14069797C (FsRtlAcquireFileForCcFlushEx.c)
 *     NtLockFile @ 0x14069F3F0 (NtLockFile.c)
 *     IopGetSetObjectId @ 0x1406D41D8 (IopGetSetObjectId.c)
 *     IopCopyOffloadCapable @ 0x1406DAD8C (IopCopyOffloadCapable.c)
 *     FsRtlSetFileSize @ 0x1406DBEFC (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1406DC020 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406DC1C0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406DC3C0 (FsRtlKernelFsControlFile.c)
 *     NtUnlockFile @ 0x1406DF1B0 (NtUnlockFile.c)
 *     IopParseFile @ 0x1406E6E50 (IopParseFile.c)
 *     NtFlushBuffersFileEx @ 0x1406E7FA0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406EA6D0 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406EBFB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406EC5C0 (NtWriteFileGather.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406FCF10 (NtNotifyChangeDirectoryFileEx.c)
 *     CcMdlReadComplete @ 0x14070A190 (CcMdlReadComplete.c)
 *     FsRtlQueryCachedVdl @ 0x14070C030 (FsRtlQueryCachedVdl.c)
 *     FsRtlPrepareMdlWriteEx @ 0x14070DD60 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x14070DDE0 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x14070DE80 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x14070DF00 (FsRtlMdlRead.c)
 *     CcMdlWriteComplete @ 0x14070F200 (CcMdlWriteComplete.c)
 *     NtSetEaFile @ 0x14071EAF0 (NtSetEaFile.c)
 *     IopGetVolumeId @ 0x140721210 (IopGetVolumeId.c)
 *     NtSetVolumeInformationFile @ 0x14075AA70 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x140769B10 (IoSetInformation.c)
 *     WmipGetFilePDO @ 0x14077B024 (WmipGetFilePDO.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14077B2D4 (FsRtlIssueFileNotificationFsctl.c)
 *     MiCreatePagingFile @ 0x1407A267C (MiCreatePagingFile.c)
 *     PopGetPolicyDeviceObject @ 0x1407B2238 (PopGetPolicyDeviceObject.c)
 *     PiPagePathSetState @ 0x1407B7350 (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x140887C0C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x140888150 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x140889190 (FsRtlQueryInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088F32C (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x14088FC48 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x140890460 (IoAttachDevice.c)
 *     NtQueryQuotaInformationFile @ 0x1408928F0 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x140897FD0 (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x14090C3F8 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x140927FFC (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x140928920 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x1409296DC (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14092B0CC (SmpUtilsGetControlDevice.c)
 *     VhdiMountVhdFile @ 0x140A921A8 (VhdiMountVhdFile.c)
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
