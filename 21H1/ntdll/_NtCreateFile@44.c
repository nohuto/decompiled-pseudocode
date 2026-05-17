/*
 * XREFs of _NtCreateFile@44 @ 0x4B2F2ED0
 * Callers:
 *     _EtwpCreateFile@24 @ 0x4B2F160C (_EtwpCreateFile@24.c)
 *     _LdrpResMapFile@16 @ 0x4B34316E (_LdrpResMapFile@16.c)
 *     _RtlCreateBootStatusDataFile@4 @ 0x4B350940 (_RtlCreateBootStatusDataFile@4.c)
 *     _RtlpFileIsWin32WithRCManifest@4 @ 0x4B353DB4 (_RtlpFileIsWin32WithRCManifest@4.c)
 *     _RtlCreateSystemVolumeInformationFolder@4 @ 0x4B35D890 (_RtlCreateSystemVolumeInformationFolder@4.c)
 *     _GetProcessIptTrace@12 @ 0x4B3898E3 (_GetProcessIptTrace@12.c)
 *     _GetProcessIptTraceSize@8 @ 0x4B3899B0 (_GetProcessIptTraceSize@8.c)
 *     _RtlpGetVolumeHandle@8 @ 0x4B389B86 (_RtlpGetVolumeHandle@8.c)
 *     _RtlpQueryDiskSpacePolicy@8 @ 0x4B389C18 (_RtlpQueryDiskSpacePolicy@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
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
  return Wow64SystemServiceCall();
}
