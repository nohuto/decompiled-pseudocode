/*
 * XREFs of NtCreateFile @ 0x1405FBCF0
 * Callers:
 *     PfSnIsVolumeMounted @ 0x1406E85D0 (PfSnIsVolumeMounted.c)
 *     PfpVolumeOpenAndVerify @ 0x1406F1C64 (PfpVolumeOpenAndVerify.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x14072D9F0 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     IopCreateFile @ 0x1405FBD80 (IopCreateFile.c)
 */

NTSTATUS __stdcall NtCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-38h]

  LODWORD(NumberOfBytes) = EaLength;
  return IopCreateFile(
           (int)FileHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)IoStatusBlock,
           (__int64)AllocationSize,
           FileAttributes,
           ShareAccess,
           CreateDisposition,
           CreateOptions,
           EaBuffer,
           NumberOfBytes,
           0,
           0LL,
           0,
           32,
           0LL);
}
