/*
 * XREFs of ZwFlushBuffersFile @ 0x1403F2C90
 * Callers:
 *     CmpDoFileFlush @ 0x1402E0A00 (CmpDoFileFlush.c)
 *     RtlBootStatusDisableFlushing @ 0x1403A45C0 (RtlBootStatusDisableFlushing.c)
 *     RtlpGetSetBootStatusData @ 0x140775B50 (RtlpGetSetBootStatusData.c)
 *     PopCreateHiberFile @ 0x14077BCF0 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x140869428 (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x14087038C (CmpWriteOffsetArrayToFile.c)
 *     PopFlushVolumeWorker @ 0x140993610 (PopFlushVolumeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
