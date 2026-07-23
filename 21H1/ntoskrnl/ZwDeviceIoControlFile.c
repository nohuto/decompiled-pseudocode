/*
 * XREFs of ZwDeviceIoControlFile @ 0x1403F2410
 * Callers:
 *     PopFlushAndHold @ 0x140570E94 (PopFlushAndHold.c)
 *     SiGetDiskPartitionInformation @ 0x1406D21B0 (SiGetDiskPartitionInformation.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1406E3BEC (PfSnVolumeCheckSeekPenalty.c)
 *     SiGetDriveLayoutInformation @ 0x140766364 (SiGetDriveLayoutInformation.c)
 *     BiGetPartitionInformation @ 0x140770BA0 (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140770CE4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140770EE4 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140770FBC (BiIsVolumePartitionInformationRetained.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x140786A3C (EtwpUpdateFileInfoDriverRegistration.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140793044 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407BC708 (ExpGetSystemWriteConstraintInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408DC06C (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x14094BD2C (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x14094BF58 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x14094DF84 (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14096B654 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x14096EEE8 (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x14096EFC4 (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x14096F060 (SiQueryProperty.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A6FF98 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140A92610 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A92790 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140A92FA8 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x140A93068 (RamdiskStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeviceIoControlFile(
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
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
