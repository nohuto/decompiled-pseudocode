/*
 * XREFs of ZwOpenFile @ 0x1403F3C20
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404E8DFC (DbgkPostModuleMessage.c)
 *     BiLogFileOwnerProcess @ 0x1405BE6D0 (BiLogFileOwnerProcess.c)
 *     CmpLogHiveFileInaccessible @ 0x14063CA24 (CmpLogHiveFileInaccessible.c)
 *     ExpGetGlobalLocaleSection @ 0x14065CC30 (ExpGetGlobalLocaleSection.c)
 *     IoGetDeviceObjectPointer @ 0x1406619A0 (IoGetDeviceObjectPointer.c)
 *     SiOpenDevice @ 0x1406F3204 (SiOpenDevice.c)
 *     NtGetNlsSectionPtr @ 0x1406FF070 (NtGetNlsSectionPtr.c)
 *     KsepSdbMapToMemory @ 0x140740014 (KsepSdbMapToMemory.c)
 *     MiCreateSectionForDriver @ 0x140748F3C (MiCreateSectionForDriver.c)
 *     KsepShimDatabaseTime @ 0x140749828 (KsepShimDatabaseTime.c)
 *     PopValidateHiberFileSize @ 0x1407678E4 (PopValidateHiberFileSize.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14076A290 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiInitializeDDB @ 0x14076BDC0 (PiInitializeDDB.c)
 *     RtlLockBootStatusData @ 0x14076CD60 (RtlLockBootStatusData.c)
 *     BiGetNtPartitionPath @ 0x140770368 (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x140772CE0 (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1407730F4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x14077322C (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1407733CC (BiIsVolumePartitionInformationRetained.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1407809CC (EtwpUpdateFileInfoDriverRegistration.c)
 *     PspLocateSystemDll @ 0x140786744 (PspLocateSystemDll.c)
 *     HalpAcquirePccInterface @ 0x1408631F4 (HalpAcquirePccInterface.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14086FBE4 (CmpOpenFileWithExtremePrejudice.c)
 *     DbgkSendSystemDllMessages @ 0x1408813EC (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x140884AA4 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x14088E89C (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x14088FE34 (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x140890460 (IoAttachDevice.c)
 *     PiGetDriverImageDirectory @ 0x14089C284 (PiGetDriverImageDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x14089C530 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x14089E5D0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1408B121C (IopFileUtilClearAttributes.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B3C68 (PiDrvDbQuerySystemPathWin32.c)
 *     MiOpenHotPatchFile @ 0x1408C9508 (MiOpenHotPatchFile.c)
 *     PopDeleteHiberFile @ 0x1408E38AC (PopDeleteHiberFile.c)
 *     ExpGetDriveGeometry @ 0x14094D0CC (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x14094D2F8 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x14094F324 (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x140955470 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140955D90 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14095B784 (ApiSetpLoadSchemaImage.c)
 *     AslDoesDirectoryExistNtPath @ 0x1409644E4 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x14096459C (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140966608 (AslpPathWildcardAllocMatchNode.c)
 *     BiGetPhysicalDriveName @ 0x14096C8A4 (BiGetPhysicalDriveName.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 *     IopMarkBootPartition @ 0x140A66D60 (IopMarkBootPartition.c)
 *     IopFileUtilRename @ 0x140A6B880 (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A70CA8 (PopPdcCsCheckSystemVolumeDevice.c)
 *     IopApplySystemPartitionProt @ 0x140A8D360 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A8D5B0 (PipCriticalDeviceWaitCallback.c)
 *     VhdiGetVolumeNumber @ 0x140A91D20 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A91EA0 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140A92778 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
