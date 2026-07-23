/*
 * XREFs of _NtQueryVolumeInformationFile@20 @ 0x4B2F2E10
 * Callers:
 *     _RtlpCreateNewDirectoryReference@12 @ 0x4B2E418B (_RtlpCreateNewDirectoryReference@12.c)
 *     _EtwpFinalizeLogFileHeader@8 @ 0x4B2EE176 (_EtwpFinalizeLogFileHeader@8.c)
 *     _EtwpAddLogHeaderToLogFile@16 @ 0x4B2F085E (_EtwpAddLogHeaderToLogFile@16.c)
 *     _LdrpCheckAppDirType@4 @ 0x4B33145D (_LdrpCheckAppDirType@4.c)
 *     _RtlpQueryDiskSpacePolicyByHandle@8 @ 0x4B389D13 (_RtlpQueryDiskSpacePolicyByHandle@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FSINFOCLASS FsInformationClass)
{
  return Wow64SystemServiceCall();
}
