/*
 * XREFs of ZwFsControlFile @ 0x1403F8890
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140345720 (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x14064F528 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x1407888D0 (RtlUnlockBootStatusData.c)
 *     PopSanityCheckHiberFile @ 0x14078A4A8 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x14078A8C4 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x140792250 (PopCreateHiberFile.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1407C3750 (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x1408E254C (PfpQueryFileExtentsRequest.c)
 *     SmKmStoreFileGetExtents @ 0x14092F008 (SmKmStoreFileGetExtents.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFsControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FsControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
