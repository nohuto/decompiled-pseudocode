/*
 * XREFs of ZwSetInformationFile @ 0x1403F3AA0
 * Callers:
 *     CmpOpenHiveFile @ 0x14061E8E8 (CmpOpenHiveFile.c)
 *     CmpDoFileSetSizeEx @ 0x140637A3C (CmpDoFileSetSizeEx.c)
 *     CmpCmdHiveClose @ 0x140643988 (CmpCmdHiveClose.c)
 *     EtwpFinalizeHeader @ 0x1406C8A5C (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1406C8D98 (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x1406C9094 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeSaveState @ 0x1406CBD94 (EtwpRealtimeSaveState.c)
 *     PopResizeHiberFile @ 0x140767784 (PopResizeHiberFile.c)
 *     PopCreateHiberFile @ 0x1407846F0 (PopCreateHiberFile.c)
 *     PopValidateExistingHiberFile @ 0x140785B04 (PopValidateExistingHiberFile.c)
 *     MiCreatePagingFile @ 0x1407A267C (MiCreatePagingFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1407BA768 (EtwpRealtimeZeroTruncateLogfile.c)
 *     CmpFlushBackupHive @ 0x14086DC18 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x14086E304 (CmpWriteOffsetArrayToFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14086FBE4 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpCmdRenameHive @ 0x14087360C (CmpCmdRenameHive.c)
 *     PpLastGoodDeleteFilesCallback @ 0x14089E5D0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1408B121C (IopFileUtilClearAttributes.c)
 *     SmKmStoreFileCreate @ 0x1409289E4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x140929144 (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x140945700 (EtwpSavePersistedLogger.c)
 *     IopFileUtilRename @ 0x140A6B880 (IopFileUtilRename.c)
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
