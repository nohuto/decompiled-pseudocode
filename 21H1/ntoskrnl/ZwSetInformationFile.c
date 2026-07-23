/*
 * XREFs of ZwSetInformationFile @ 0x1403F2810
 * Callers:
 *     CmpCmdHiveClose @ 0x14065B1C8 (CmpCmdHiveClose.c)
 *     CmpOpenHiveFile @ 0x140664008 (CmpOpenHiveFile.c)
 *     EtwpFinalizeHeader @ 0x14067BA6C (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x14067BDA8 (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x14067C0A4 (EtwpUpdateFileHeader.c)
 *     CmpDoFileSetSizeEx @ 0x14068560C (CmpDoFileSetSizeEx.c)
 *     EtwpRealtimeSaveState @ 0x1406ED34C (EtwpRealtimeSaveState.c)
 *     PopResizeHiberFile @ 0x14075F68C (PopResizeHiberFile.c)
 *     PopCreateHiberFile @ 0x14077BCF0 (PopCreateHiberFile.c)
 *     PopValidateExistingHiberFile @ 0x14077D104 (PopValidateExistingHiberFile.c)
 *     MiCreatePagingFile @ 0x14079E69C (MiCreatePagingFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1407B75F8 (EtwpRealtimeZeroTruncateLogfile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14086E124 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpFlushBackupHive @ 0x14086FC00 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x14087038C (CmpWriteOffsetArrayToFile.c)
 *     CmpCmdRenameHive @ 0x14087231C (CmpCmdRenameHive.c)
 *     PpLastGoodDeleteFilesCallback @ 0x14089D2B0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1408AFEFC (IopFileUtilClearAttributes.c)
 *     SmKmStoreFileCreate @ 0x140927734 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x140927E94 (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x140944490 (EtwpSavePersistedLogger.c)
 *     IopFileUtilRename @ 0x140A6B5F8 (IopFileUtilRename.c)
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
