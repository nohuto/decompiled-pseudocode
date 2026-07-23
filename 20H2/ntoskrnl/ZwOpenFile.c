/*
 * XREFs of ZwOpenFile @ 0x1403F87D0
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404EC68C (DbgkPostModuleMessage.c)
 *     BiLogFileOwnerProcess @ 0x1405C2350 (BiLogFileOwnerProcess.c)
 *     IoGetDeviceObjectPointer @ 0x1405DDA50 (IoGetDeviceObjectPointer.c)
 *     ExpGetGlobalLocaleSection @ 0x1406AE0CC (ExpGetGlobalLocaleSection.c)
 *     SiOpenDevice @ 0x1406C65E4 (SiOpenDevice.c)
 *     NtGetNlsSectionPtr @ 0x1406D1CC0 (NtGetNlsSectionPtr.c)
 *     CmpLogHiveFileInaccessible @ 0x1406FB038 (CmpLogHiveFileInaccessible.c)
 *     KsepSdbMapToMemory @ 0x14074EBF4 (KsepSdbMapToMemory.c)
 *     MiCreateSectionForDriver @ 0x140757B1C (MiCreateSectionForDriver.c)
 *     KsepShimDatabaseTime @ 0x140758408 (KsepShimDatabaseTime.c)
 *     PopValidateHiberFileSize @ 0x140772FBC (PopValidateHiberFileSize.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1407788A0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiInitializeDDB @ 0x14077AB80 (PiInitializeDDB.c)
 *     RtlLockBootStatusData @ 0x14077B790 (RtlLockBootStatusData.c)
 *     BiGetNtPartitionPath @ 0x14077E968 (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x1407812E0 (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1407816F4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x14078182C (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1407819CC (BiIsVolumePartitionInformationRetained.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14078DC20 (EtwpUpdateFileInfoDriverRegistration.c)
 *     PspLocateSystemDll @ 0x140794454 (PspLocateSystemDll.c)
 *     HalpAcquirePccInterface @ 0x140868C14 (HalpAcquirePccInterface.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140875734 (CmpOpenFileWithExtremePrejudice.c)
 *     DbgkSendSystemDllMessages @ 0x140886F3C (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x14088A5F4 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x14089435C (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x140895924 (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x140895F50 (IoAttachDevice.c)
 *     PiGetDriverImageDirectory @ 0x1408A1DB4 (PiGetDriverImageDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x1408A2060 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1408A4100 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1408B6D4C (IopFileUtilClearAttributes.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B9888 (PiDrvDbQuerySystemPathWin32.c)
 *     MiOpenHotPatchFile @ 0x1408CF348 (MiOpenHotPatchFile.c)
 *     ExpGetDriveGeometry @ 0x140952E8C (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1409530B8 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1409550E4 (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x14095B230 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x14095BB50 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140961544 (ApiSetpLoadSchemaImage.c)
 *     AslDoesDirectoryExistNtPath @ 0x14096A2B4 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x14096A36C (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x14096C3D8 (AslpPathWildcardAllocMatchNode.c)
 *     BiGetPhysicalDriveName @ 0x140972674 (BiGetPhysicalDriveName.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 *     IopMarkBootPartition @ 0x140A5A330 (IopMarkBootPartition.c)
 *     IopFileUtilRename @ 0x140A72164 (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A76F88 (PopPdcCsCheckSystemVolumeDevice.c)
 *     IopApplySystemPartitionProt @ 0x140A93060 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A932B0 (PipCriticalDeviceWaitCallback.c)
 *     VhdiGetVolumeNumber @ 0x140A97984 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A97B00 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140A983D8 (RamdiskStart.c)
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
