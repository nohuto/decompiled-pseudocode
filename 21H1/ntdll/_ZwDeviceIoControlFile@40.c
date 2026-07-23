/*
 * XREFs of _ZwDeviceIoControlFile@40 @ 0x4B2F29D0
 * Callers:
 *     _GetProcessIptTrace@12 @ 0x4B3898E3 (_GetProcessIptTrace@12.c)
 *     _GetProcessIptTraceSize@8 @ 0x4B3899B0 (_GetProcessIptTraceSize@8.c)
 *     _RtlQueryVolumeDiskSpeedPolicy@8 @ 0x4B389AA1 (_RtlQueryVolumeDiskSpeedPolicy@8.c)
 *     _RtlpQueryDiskWriteConstraintPolicyByHandle@8 @ 0x4B389E27 (_RtlpQueryDiskWriteConstraintPolicyByHandle@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  return Wow64SystemServiceCall();
}
