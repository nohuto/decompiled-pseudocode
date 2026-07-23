/*
 * XREFs of ZwQueryInformationFile @ 0x1403F2550
 * Callers:
 *     RtlFileMapMapView @ 0x1403B95C4 (RtlFileMapMapView.c)
 *     DbgkCaptureLiveKernelDump @ 0x1404E8EB8 (DbgkCaptureLiveKernelDump.c)
 *     BiLogFileOwnerProcess @ 0x1405BDFB0 (BiLogFileOwnerProcess.c)
 *     CmpCmdHiveClose @ 0x14065B1C8 (CmpCmdHiveClose.c)
 *     CmpInitHiveFromFile @ 0x1406636E8 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x140664008 (CmpOpenHiveFile.c)
 *     EtwpUpdateFileHeader @ 0x14067C0A4 (EtwpUpdateFileHeader.c)
 *     CmpGetFileSize @ 0x140687240 (CmpGetFileSize.c)
 *     AslFileMappingCreate @ 0x1407414C8 (AslFileMappingCreate.c)
 *     KsepShimDatabaseTime @ 0x140747CA8 (KsepShimDatabaseTime.c)
 *     PopValidateHiberFileSize @ 0x14075F7EC (PopValidateHiberFileSize.c)
 *     PopValidateExistingHiberFile @ 0x14077D104 (PopValidateExistingHiberFile.c)
 *     EtwpRealtimeRestoreState @ 0x1407B2E2C (EtwpRealtimeRestoreState.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x1408943E8 (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x1408AFEFC (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DB39C (PfpQueryFileExtentsRequest.c)
 *     PopZeroHiberFile @ 0x1408E2E30 (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x140927734 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x1409285CC (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x1409540B0 (CMFGetFileSizeEx.c)
 *     EmInitSystem @ 0x140A4710C (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
