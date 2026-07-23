/*
 * XREFs of ZwQueryInformationFile @ 0x1403F8390
 * Callers:
 *     RtlFileMapMapView @ 0x1403BCDB4 (RtlFileMapMapView.c)
 *     DbgkCaptureLiveKernelDump @ 0x1404ECD78 (DbgkCaptureLiveKernelDump.c)
 *     BiLogFileOwnerProcess @ 0x1405C2350 (BiLogFileOwnerProcess.c)
 *     CmpGetFileSize @ 0x1405DC81C (CmpGetFileSize.c)
 *     CmpInitHiveFromFile @ 0x14064EC08 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x14064F528 (CmpOpenHiveFile.c)
 *     CmpCmdHiveClose @ 0x1406A2FD8 (CmpCmdHiveClose.c)
 *     EtwpUpdateFileHeader @ 0x140716484 (EtwpUpdateFileHeader.c)
 *     AslFileMappingCreate @ 0x140751C28 (AslFileMappingCreate.c)
 *     KsepShimDatabaseTime @ 0x140758408 (KsepShimDatabaseTime.c)
 *     PopValidateHiberFileSize @ 0x140772FBC (PopValidateHiberFileSize.c)
 *     PopCreateHiberFile @ 0x140792250 (PopCreateHiberFile.c)
 *     EtwpRealtimeRestoreState @ 0x1407C473C (EtwpRealtimeRestoreState.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x14089B3B8 (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x1408B6D4C (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x1408E254C (PfpQueryFileExtentsRequest.c)
 *     PopZeroHiberFile @ 0x1408E9CC4 (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x14092E80C (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x14092F6A4 (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x14095B540 (CMFGetFileSizeEx.c)
 *     EmInitSystem @ 0x140A4633C (EmInitSystem.c)
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
