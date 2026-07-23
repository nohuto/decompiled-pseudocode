/*
 * XREFs of ZwFlushBuffersFile @ 0x1403F3F20
 * Callers:
 *     CmpDoFileFlush @ 0x140271378 (CmpDoFileFlush.c)
 *     RtlBootStatusDisableFlushing @ 0x1403A4D40 (RtlBootStatusDisableFlushing.c)
 *     RtlpGetSetBootStatusData @ 0x140777F60 (RtlpGetSetBootStatusData.c)
 *     PopCreateHiberFile @ 0x1407846F0 (PopCreateHiberFile.c)
 *     CmReplaceKey @ 0x14086A778 (CmReplaceKey.c)
 *     CmpWriteOffsetArrayToFile @ 0x14086E304 (CmpWriteOffsetArrayToFile.c)
 *     PopFlushVolumeWorker @ 0x140994C50 (PopFlushVolumeWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
