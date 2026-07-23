/*
 * XREFs of ZwSetInformationFile @ 0x1403F8650
 * Callers:
 *     CmpDoFileSetSizeEx @ 0x1405DA63C (CmpDoFileSetSizeEx.c)
 *     CmpOpenHiveFile @ 0x14064F528 (CmpOpenHiveFile.c)
 *     CmpCmdHiveClose @ 0x1406A2FD8 (CmpCmdHiveClose.c)
 *     EtwpRealtimeSaveState @ 0x1406E338C (EtwpRealtimeSaveState.c)
 *     EtwpFinalizeHeader @ 0x140715E4C (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x140716188 (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x140716484 (EtwpUpdateFileHeader.c)
 *     PopResizeHiberFile @ 0x140772E5C (PopResizeHiberFile.c)
 *     PopCreateHiberFile @ 0x140792250 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x1407B19AC (MiCreatePagingFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1407C8FF8 (EtwpRealtimeZeroTruncateLogfile.c)
 *     CmpFlushBackupHive @ 0x140873704 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x140873DF0 (CmpWriteOffsetArrayToFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140875734 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpCmdRenameHive @ 0x14087915C (CmpCmdRenameHive.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1408A4100 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1408B6D4C (IopFileUtilClearAttributes.c)
 *     SmKmStoreFileCreate @ 0x14092E80C (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14092EF6C (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x14094B4C0 (EtwpSavePersistedLogger.c)
 *     IopFileUtilRename @ 0x140A72164 (IopFileUtilRename.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationFile(
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
