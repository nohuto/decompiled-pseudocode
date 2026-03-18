/*
 * XREFs of NtCreateFile @ 0x14066D1A0
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x1405D27B4 (PfpVolumeOpenAndVerify.c)
 *     PfSnIsVolumeMounted @ 0x140670844 (PfSnIsVolumeMounted.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x14071DC60 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     IopCreateFile @ 0x14066D230 (IopCreateFile.c)
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
