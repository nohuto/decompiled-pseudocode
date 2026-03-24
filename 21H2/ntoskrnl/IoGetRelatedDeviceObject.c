/*
 * XREFs of IoGetRelatedDeviceObject @ 0x140351920
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x140254F94 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x1402559CC (FsRtlAcquireFileForModWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1402CB1EC (IoAsynchronousPageWrite.c)
 *     CcZeroData @ 0x1402E82C0 (CcZeroData.c)
 *     IoSynchronousPageWriteEx @ 0x14031BE0C (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14031C130 (IoPageReadEx.c)
 *     NtSetInformationFile @ 0x140352270 (NtSetInformationFile.c)
 *     PnpGetRelatedTargetDevice @ 0x14036185C (PnpGetRelatedTargetDevice.c)
 *     CcSetValidData @ 0x140361EF4 (CcSetValidData.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F2018 (IopValidateAndGetWriteParameters.c)
 *     FsRtlGetFileExtents @ 0x1404EED40 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x1404EEEA0 (FsRtlMdlReadComplete.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     IopGetBasicInformationFile @ 0x1406088E8 (IopGetBasicInformationFile.c)
 *     IopOpenLinkOrRenameTarget @ 0x1406089A8 (IopOpenLinkOrRenameTarget.c)
 *     IopGetFileInformation @ 0x140620A14 (IopGetFileInformation.c)
 *     IoGetDeviceObjectPointer @ 0x140620E20 (IoGetDeviceObjectPointer.c)
 *     FsRtlReleaseFileForCcFlush @ 0x140647024 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x140647204 (FsRtlAcquireFileForCcFlushEx.c)
 *     IopGetSetSecurityObject @ 0x14064F760 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x14064FCB0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406508C0 (NtQueryVolumeInformationFile.c)
 *     IopGetSetObjectId @ 0x1406813B8 (IopGetSetObjectId.c)
 *     IopCopyOffloadCapable @ 0x1406888C4 (IopCopyOffloadCapable.c)
 *     FsRtlSetFileSize @ 0x140689B90 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x140689CB0 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140689E50 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x14068A050 (FsRtlKernelFsControlFile.c)
 *     NtUnlockFile @ 0x14068F570 (NtUnlockFile.c)
 *     IopParseFile @ 0x140697270 (IopParseFile.c)
 *     NtFlushBuffersFileEx @ 0x140698D00 (NtFlushBuffersFileEx.c)
 *     NtReadFileScatter @ 0x140699E80 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14069A620 (NtWriteFileGather.c)
 *     NtQueryEaFile @ 0x14069B320 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406AE6E0 (NtNotifyChangeDirectoryFileEx.c)
 *     CcMdlReadComplete @ 0x1406BC2A0 (CcMdlReadComplete.c)
 *     FsRtlQueryCachedVdl @ 0x1406BE1C0 (FsRtlQueryCachedVdl.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406C0430 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x1406C04B0 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x1406C0550 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x1406C05D0 (FsRtlMdlRead.c)
 *     CcMdlWriteComplete @ 0x1406C1C60 (CcMdlWriteComplete.c)
 *     IopQueryXxxInformation @ 0x1406C9708 (IopQueryXxxInformation.c)
 *     FsRtlGetFileSize @ 0x1406D4860 (FsRtlGetFileSize.c)
 *     IopCloseFile @ 0x1406FCA20 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x1406FE010 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     IopDeleteFile @ 0x140703760 (IopDeleteFile.c)
 *     FsRtlReleaseFile @ 0x140707A70 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140707C40 (FsRtlAcquireFileExclusiveCommon.c)
 *     NtLockFile @ 0x140708790 (NtLockFile.c)
 *     CmpFileFlushAndPurge @ 0x14071DC38 (CmpFileFlushAndPurge.c)
 *     NtSetEaFile @ 0x140730CB0 (NtSetEaFile.c)
 *     IopGetVolumeId @ 0x140733450 (IopGetVolumeId.c)
 *     NtSetVolumeInformationFile @ 0x14076D170 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14077C0D0 (IoSetInformation.c)
 *     WmipGetFilePDO @ 0x14078D404 (WmipGetFilePDO.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14078D6B4 (FsRtlIssueFileNotificationFsctl.c)
 *     MiCreatePagingFile @ 0x1407B661C (MiCreatePagingFile.c)
 *     PopGetPolicyDeviceObject @ 0x1407C44F4 (PopGetPolicyDeviceObject.c)
 *     PiPagePathSetState @ 0x1407C9E40 (PiPagePathSetState.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14088ACFC (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x14088B240 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x14088C280 (FsRtlQueryInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1408923AC (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x140892CF0 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x140893520 (IoAttachDevice.c)
 *     NtQueryQuotaInformationFile @ 0x140895B40 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x14089B0C4 (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x14090F7D8 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x14092B5F4 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x14092BF18 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x14092CCD4 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14092E6CC (SmpUtilsGetControlDevice.c)
 *     VhdiMountVhdFile @ 0x140A94C98 (VhdiMountVhdFile.c)
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
