/*
 * XREFs of ZwDeviceIoControlFile @ 0x1403F8250
 * Callers:
 *     PopFlushAndHold @ 0x140574F14 (PopFlushAndHold.c)
 *     SiGetDiskPartitionInformation @ 0x1406C6550 (SiGetDiskPartitionInformation.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1406E87A8 (PfSnVolumeCheckSeekPenalty.c)
 *     SiGetDriveLayoutInformation @ 0x140776D54 (SiGetDriveLayoutInformation.c)
 *     BiGetPartitionInformation @ 0x1407815B0 (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1407816F4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x1407818F4 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1407819CC (BiIsVolumePartitionInformationRetained.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x14078DC20 (EtwpUpdateFileInfoDriverRegistration.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407A2124 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407CE108 (ExpGetSystemWriteConstraintInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408E321C (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x140952E8C (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1409530B8 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x1409550E4 (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1409727C4 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x140976058 (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140976134 (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x1409761D0 (SiQueryProperty.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A76F88 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140A97984 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A97B00 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140A98318 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x140A983D8 (RamdiskStart.c)
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
