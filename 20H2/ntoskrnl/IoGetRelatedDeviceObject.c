/*
 * XREFs of IoGetRelatedDeviceObject @ 0x140211290
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x140203CEC (PnpGetRelatedTargetDevice.c)
 *     CcSetValidData @ 0x14020467C (CcSetValidData.c)
 *     NtSetInformationFile @ 0x14020FE90 (NtSetInformationFile.c)
 *     CcZeroData @ 0x140240A60 (CcZeroData.c)
 *     IoPageReadEx @ 0x14024E230 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x14024E538 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x140329CA0 (IoAsynchronousPageWrite.c)
 *     FsRtlReleaseFileForModWrite @ 0x140344298 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140344550 (FsRtlAcquireFileForModWriteEx.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F11C0 (IopValidateAndGetWriteParameters.c)
 *     FsRtlGetFileExtents @ 0x1404ED460 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x1404ED5C0 (FsRtlMdlReadComplete.c)
 *     IopReadFile @ 0x1405CC21C (IopReadFile.c)
 *     CmpFileFlushAndPurge @ 0x1405DCDAC (CmpFileFlushAndPurge.c)
 *     IoGetDeviceObjectPointer @ 0x1405DDA50 (IoGetDeviceObjectPointer.c)
 *     NtWriteFile @ 0x1405F84C0 (NtWriteFile.c)
 *     NtReadFile @ 0x1405F9240 (NtReadFile.c)
 *     IopGetSetSecurityObject @ 0x1405F9B20 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x1405FA070 (BuildQueryDirectoryIrp.c)
 *     NtQueryInformationFile @ 0x1405FB1C0 (NtQueryInformationFile.c)
 *     IopParseFile @ 0x1405FE010 (IopParseFile.c)
 *     IopDeleteFile @ 0x1405FE150 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     NtQueryVolumeInformationFile @ 0x1406077E0 (NtQueryVolumeInformationFile.c)
 *     IopCloseFile @ 0x14060E6B0 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x14060FB00 (IopXxxControlFile.c)
 *     IopQueryXxxInformation @ 0x140634898 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x1406366D4 (IopGetFileInformation.c)
 *     FsRtlReleaseFile @ 0x1406802A0 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140680470 (FsRtlAcquireFileExclusiveCommon.c)
 *     IopGetSetObjectId @ 0x1406A05D8 (IopGetSetObjectId.c)
 *     NtLockFile @ 0x1406B3730 (NtLockFile.c)
 *     FsRtlSetFileSize @ 0x1406B407C (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1406B41A0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406B4340 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406B4540 (FsRtlKernelFsControlFile.c)
 *     NtUnlockFile @ 0x1406B6C50 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406BCBF0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406BE550 (NtQueryEaFile.c)
 *     NtReadFileScatter @ 0x1406C05A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1406C0D40 (NtWriteFileGather.c)
 *     IopOpenLinkOrRenameTarget @ 0x1406C7690 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x1406C792C (IopGetBasicInformationFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406CFAE0 (NtNotifyChangeDirectoryFileEx.c)
 *     CcMdlReadComplete @ 0x1406DC590 (CcMdlReadComplete.c)
 *     FsRtlQueryCachedVdl @ 0x1406DE170 (FsRtlQueryCachedVdl.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406E01B0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x1406E0230 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x1406E02D0 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x1406E0350 (FsRtlMdlRead.c)
 *     CcMdlWriteComplete @ 0x1406E17E0 (CcMdlWriteComplete.c)
 *     IopCopyOffloadCapable @ 0x1406E2BD8 (IopCopyOffloadCapable.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407080AC (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14070828C (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlGetFileSize @ 0x14070AA70 (FsRtlGetFileSize.c)
 *     NtSetEaFile @ 0x14072C980 (NtSetEaFile.c)
 *     IopGetVolumeId @ 0x14072F200 (IopGetVolumeId.c)
 *     NtSetVolumeInformationFile @ 0x140769230 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x140778120 (IoSetInformation.c)
 *     WmipGetFilePDO @ 0x140789624 (WmipGetFilePDO.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x1407898D4 (FsRtlIssueFileNotificationFsctl.c)
 *     MiCreatePagingFile @ 0x1407B19AC (MiCreatePagingFile.c)
 *     PopGetPolicyDeviceObject @ 0x1407C0180 (PopGetPolicyDeviceObject.c)
 *     PiPagePathSetState @ 0x1407C5BDC (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14088D75C (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x14088DCA0 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x14088ECE0 (FsRtlQueryInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140894DEC (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x140895730 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x140895F50 (IoAttachDevice.c)
 *     NtQueryQuotaInformationFile @ 0x140898570 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x14089DAF4 (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x140912028 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x14092DE24 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x14092E748 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x14092F504 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x140930EFC (SmpUtilsGetControlDevice.c)
 *     VhdiMountVhdFile @ 0x140A97E08 (VhdiMountVhdFile.c)
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
