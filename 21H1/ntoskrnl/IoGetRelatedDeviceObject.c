/*
 * XREFs of IoGetRelatedDeviceObject @ 0x140252E60
 * Callers:
 *     NtSetInformationFile @ 0x140253490 (NtSetInformationFile.c)
 *     IoPageReadEx @ 0x140280BA0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140280E18 (IoSynchronousPageWriteEx.c)
 *     CcZeroData @ 0x1402C0D40 (CcZeroData.c)
 *     PnpGetRelatedTargetDevice @ 0x1402E0900 (PnpGetRelatedTargetDevice.c)
 *     CcSetValidData @ 0x1402E0DAC (CcSetValidData.c)
 *     IoAsynchronousPageWrite @ 0x1402ECB38 (IoAsynchronousPageWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1403537D4 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14035422C (FsRtlReleaseFileForModWrite.c)
 *     FsRtlGetFileExtents @ 0x1404E95A0 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x1404E9700 (FsRtlMdlReadComplete.c)
 *     IopGetFileInformation @ 0x1405DB0F4 (IopGetFileInformation.c)
 *     IoGetDeviceObjectPointer @ 0x1405DB6A0 (IoGetDeviceObjectPointer.c)
 *     IopGetSetSecurityObject @ 0x1405E3500 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x1405E3A50 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x1405E3F90 (NtWriteFile.c)
 *     NtReadFile @ 0x1405E54D0 (NtReadFile.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1405EE29C (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1405EE47C (FsRtlAcquireFileForCcFlushEx.c)
 *     NtQueryVolumeInformationFile @ 0x1405F5260 (NtQueryVolumeInformationFile.c)
 *     IopXxxControlFile @ 0x1405FCC10 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x1405FDC00 (IopCloseFile.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     NtQueryInformationFile @ 0x140600000 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x140600E60 (IopDeleteFile.c)
 *     FsRtlReleaseFile @ 0x140630D80 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140630F50 (FsRtlAcquireFileExclusiveCommon.c)
 *     IopQueryXxxInformation @ 0x14063AACC (IopQueryXxxInformation.c)
 *     FsRtlGetFileSize @ 0x140643C90 (FsRtlGetFileSize.c)
 *     IopOpenLinkOrRenameTarget @ 0x14066EFC0 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x14066F258 (IopGetBasicInformationFile.c)
 *     CmpFileFlushAndPurge @ 0x1406877D0 (CmpFileFlushAndPurge.c)
 *     NtLockFile @ 0x140699320 (NtLockFile.c)
 *     IopGetSetObjectId @ 0x1406B5B58 (IopGetSetObjectId.c)
 *     IopCopyOffloadCapable @ 0x1406B9A7C (IopCopyOffloadCapable.c)
 *     FsRtlSetFileSize @ 0x1406BABEC (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1406BAD10 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406BAEB0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406BB0B0 (FsRtlKernelFsControlFile.c)
 *     NtUnlockFile @ 0x1406BEC50 (NtUnlockFile.c)
 *     IopParseFile @ 0x1406C5D00 (IopParseFile.c)
 *     NtFlushBuffersFileEx @ 0x1406C76A0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406C9520 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406CACB0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406CB2C0 (NtWriteFileGather.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406D9E90 (NtNotifyChangeDirectoryFileEx.c)
 *     CcMdlReadComplete @ 0x1406E6320 (CcMdlReadComplete.c)
 *     FsRtlQueryCachedVdl @ 0x1406E8230 (FsRtlQueryCachedVdl.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406EA010 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x1406EA090 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x1406EA130 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x1406EA1B0 (FsRtlMdlRead.c)
 *     CcMdlWriteComplete @ 0x1406EB590 (CcMdlWriteComplete.c)
 *     NtSetEaFile @ 0x14071CE70 (NtSetEaFile.c)
 *     IopGetVolumeId @ 0x14071F350 (IopGetVolumeId.c)
 *     NtSetVolumeInformationFile @ 0x140758BF0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x140767730 (IoSetInformation.c)
 *     WmipGetFilePDO @ 0x140778C14 (WmipGetFilePDO.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140778EC4 (FsRtlIssueFileNotificationFsctl.c)
 *     MiCreatePagingFile @ 0x14079E69C (MiCreatePagingFile.c)
 *     PopGetPolicyDeviceObject @ 0x1407AF054 (PopGetPolicyDeviceObject.c)
 *     PiPagePathSetState @ 0x1407B41E0 (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x1408868EC (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x140886E30 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x140887E70 (FsRtlQueryInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14088E00C (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x14088E928 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x14088F140 (IoAttachDevice.c)
 *     NtQueryQuotaInformationFile @ 0x1408915D0 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x140896CB0 (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x14090B148 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x140926D4C (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x140927670 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x14092842C (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x140929E1C (SmpUtilsGetControlDevice.c)
 *     VhdiMountVhdFile @ 0x140A92A98 (VhdiMountVhdFile.c)
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
