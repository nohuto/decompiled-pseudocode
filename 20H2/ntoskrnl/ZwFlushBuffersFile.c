/*
 * XREFs of ZwFlushBuffersFile @ 0x1403F8AD0
 * Callers:
 *     CmpDoFileFlush @ 0x1402042CC (CmpDoFileFlush.c)
 *     RtlBootStatusDisableFlushing @ 0x1403A7140 (RtlBootStatusDisableFlushing.c)
 *     RtlpGetSetBootStatusData @ 0x140786560 (RtlpGetSetBootStatusData.c)
 *     PopCreateHiberFile @ 0x140792250 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x1408701CC (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x140873DF0 (CmpWriteOffsetArrayToFile.c)
 *     PopFlushVolumeWorker @ 0x14099ADB0 (PopFlushVolumeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
