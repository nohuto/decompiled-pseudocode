/*
 * XREFs of ZwFsControlFile @ 0x1403F3CE0
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402D4070 (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x14061E8E8 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x14077A2D0 (RtlUnlockBootStatusData.c)
 *     PopSanityCheckHiberFile @ 0x14077BEA8 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x14077C2C4 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x1407846F0 (PopCreateHiberFile.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1407B4F20 (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DC70C (PfpQueryFileExtentsRequest.c)
 *     SmKmStoreFileGetExtents @ 0x1409291E0 (SmKmStoreFileGetExtents.c)
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
