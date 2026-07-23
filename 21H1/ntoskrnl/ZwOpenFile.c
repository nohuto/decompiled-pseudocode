/*
 * XREFs of ZwOpenFile @ 0x1403F2990
 * Callers:
 *     DbgkPostModuleMessage @ 0x1404E87CC (DbgkPostModuleMessage.c)
 *     BiLogFileOwnerProcess @ 0x1405BDFB0 (BiLogFileOwnerProcess.c)
 *     IoGetDeviceObjectPointer @ 0x1405DB6A0 (IoGetDeviceObjectPointer.c)
 *     CmpLogHiveFileInaccessible @ 0x14068EBC4 (CmpLogHiveFileInaccessible.c)
 *     SiOpenDevice @ 0x1406D2244 (SiOpenDevice.c)
 *     NtGetNlsSectionPtr @ 0x1406DC0D0 (NtGetNlsSectionPtr.c)
 *     ExpGetGlobalLocaleSection @ 0x1406FAA4C (ExpGetGlobalLocaleSection.c)
 *     KsepSdbMapToMemory @ 0x14073E494 (KsepSdbMapToMemory.c)
 *     MiCreateSectionForDriver @ 0x1407473BC (MiCreateSectionForDriver.c)
 *     KsepShimDatabaseTime @ 0x140747CA8 (KsepShimDatabaseTime.c)
 *     PopValidateHiberFileSize @ 0x14075F7EC (PopValidateHiberFileSize.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140767EB0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiInitializeDDB @ 0x1407699E0 (PiInitializeDDB.c)
 *     RtlLockBootStatusData @ 0x14076A5C0 (RtlLockBootStatusData.c)
 *     BiGetNtPartitionPath @ 0x14076DF58 (BiGetNtPartitionPath.c)
 *     BiCreatePartitionDevice @ 0x1407708D0 (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140770CE4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiGetDriveLayoutInformation @ 0x140770E1C (BiGetDriveLayoutInformation.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140770FBC (BiIsVolumePartitionInformationRetained.c)
 *     PspLocateSystemDll @ 0x1407810B8 (PspLocateSystemDll.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x140786A3C (EtwpUpdateFileInfoDriverRegistration.c)
 *     HalpAcquirePccInterface @ 0x140861ED4 (HalpAcquirePccInterface.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14086E124 (CmpOpenFileWithExtremePrejudice.c)
 *     DbgkSendSystemDllMessages @ 0x1408800CC (DbgkSendSystemDllMessages.c)
 *     DbgkpSectionToFileHandle @ 0x140883784 (DbgkpSectionToFileHandle.c)
 *     IopIsNotNativeDriverImage @ 0x14088D57C (IopIsNotNativeDriverImage.c)
 *     IopValidateJunctionTarget @ 0x14088EB14 (IopValidateJunctionTarget.c)
 *     IoAttachDevice @ 0x14088F140 (IoAttachDevice.c)
 *     PiGetDriverImageDirectory @ 0x14089AF64 (PiGetDriverImageDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x14089B210 (PiOpenDirectoryWithRoot.c)
 *     PpLastGoodDeleteFilesCallback @ 0x14089D2B0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1408AFEFC (IopFileUtilClearAttributes.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B2948 (PiDrvDbQuerySystemPathWin32.c)
 *     MiOpenHotPatchFile @ 0x1408C81B8 (MiOpenHotPatchFile.c)
 *     PopDeleteHiberFile @ 0x1408E262C (PopDeleteHiberFile.c)
 *     ExpGetDriveGeometry @ 0x14094BD2C (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x14094BF58 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x14094DF84 (ExpTranslateNtPath.c)
 *     CMFFlushHitsFile @ 0x140953DA0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409546C0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14095A3E4 (ApiSetpLoadSchemaImage.c)
 *     AslDoesDirectoryExistNtPath @ 0x140963144 (AslDoesDirectoryExistNtPath.c)
 *     AslDoesFileExistNtPath @ 0x1409631FC (AslDoesFileExistNtPath.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140965268 (AslpPathWildcardAllocMatchNode.c)
 *     BiGetPhysicalDriveName @ 0x14096B504 (BiGetPhysicalDriveName.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 *     IopMarkBootPartition @ 0x140A53F30 (IopMarkBootPartition.c)
 *     IopFileUtilRename @ 0x140A6B5F8 (IopFileUtilRename.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A6FF98 (PopPdcCsCheckSystemVolumeDevice.c)
 *     IopApplySystemPartitionProt @ 0x140A8DD70 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140A8DFC0 (PipCriticalDeviceWaitCallback.c)
 *     VhdiGetVolumeNumber @ 0x140A92610 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A92790 (VhdiInitializeBootDisk.c)
 *     RamdiskStart @ 0x140A93068 (RamdiskStart.c)
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
