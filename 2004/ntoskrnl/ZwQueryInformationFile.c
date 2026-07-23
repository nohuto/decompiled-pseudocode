/*
 * XREFs of ZwQueryInformationFile @ 0x1403F37E0
 * Callers:
 *     RtlFileMapMapView @ 0x1403BA934 (RtlFileMapMapView.c)
 *     DbgkCaptureLiveKernelDump @ 0x1404E94E8 (DbgkCaptureLiveKernelDump.c)
 *     BiLogFileOwnerProcess @ 0x1405BE6D0 (BiLogFileOwnerProcess.c)
 *     CmpInitHiveFromFile @ 0x14061DFC8 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x14061E8E8 (CmpOpenHiveFile.c)
 *     CmpGetFileSize @ 0x1406396C4 (CmpGetFileSize.c)
 *     CmpCmdHiveClose @ 0x140643988 (CmpCmdHiveClose.c)
 *     EtwpUpdateFileHeader @ 0x1406C9094 (EtwpUpdateFileHeader.c)
 *     AslFileMappingCreate @ 0x140743048 (AslFileMappingCreate.c)
 *     KsepShimDatabaseTime @ 0x140749828 (KsepShimDatabaseTime.c)
 *     PopValidateHiberFileSize @ 0x1407678E4 (PopValidateHiberFileSize.c)
 *     PopValidateExistingHiberFile @ 0x140785B04 (PopValidateExistingHiberFile.c)
 *     EtwpRealtimeRestoreState @ 0x1407B5F9C (EtwpRealtimeRestoreState.c)
 *     IopLiveDumpValidateDumpFileHandle @ 0x140895708 (IopLiveDumpValidateDumpFileHandle.c)
 *     IopFileUtilClearAttributes @ 0x1408B121C (IopFileUtilClearAttributes.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DC70C (PfpQueryFileExtentsRequest.c)
 *     PopZeroHiberFile @ 0x1408E40B0 (PopZeroHiberFile.c)
 *     SmKmStoreFileCreate @ 0x1409289E4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileWriteHeader @ 0x14092987C (SmKmStoreFileWriteHeader.c)
 *     CMFGetFileSizeEx @ 0x140955780 (CMFGetFileSizeEx.c)
 *     EmInitSystem @ 0x140A4009C (EmInitSystem.c)
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
