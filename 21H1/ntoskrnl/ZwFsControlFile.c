/*
 * XREFs of ZwFsControlFile @ 0x1403F2A50
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14034E9A0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x140664008 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x140777EC0 (RtlUnlockBootStatusData.c)
 *     PopSanityCheckHiberFile @ 0x140779A98 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x140779EB4 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x14077BCF0 (PopCreateHiberFile.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1407B1DB0 (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DB39C (PfpQueryFileExtentsRequest.c)
 *     SmKmStoreFileGetExtents @ 0x140927F30 (SmKmStoreFileGetExtents.c)
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
