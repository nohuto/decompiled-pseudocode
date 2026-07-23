/*
 * XREFs of ZwDeviceIoControlFile @ 0x1403F36A0
 * Callers:
 *     PopFlushAndHold @ 0x1405714E4 (PopFlushAndHold.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1406BDE60 (PfSnVolumeCheckSeekPenalty.c)
 *     SiGetDiskPartitionInformation @ 0x1406F3170 (SiGetDiskPartitionInformation.c)
 *     SiGetDriveLayoutInformation @ 0x14076874C (SiGetDriveLayoutInformation.c)
 *     BiGetPartitionInformation @ 0x140772FB0 (BiGetPartitionInformation.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1407730F4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x1407732F4 (BiIssueGetDriveLayoutIoctl.c)
 *     BiIsVolumePartitionInformationRetained @ 0x1407733CC (BiIsVolumePartitionInformationRetained.c)
 *     EtwpUpdateFileInfoDriverRegistration @ 0x1407809CC (EtwpUpdateFileInfoDriverRegistration.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14078BE74 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407BF878 (ExpGetSystemWriteConstraintInformation.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408DD3DC (PfSnVolumeCheckIsSdBus.c)
 *     ExpGetDriveGeometry @ 0x14094D0CC (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x14094D2F8 (ExpGetPartitionTableInfo.c)
 *     ExpTranslateNtPath @ 0x14094F324 (ExpTranslateNtPath.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14096C9F4 (BiGetVolumeDiskExtentsInformation.c)
 *     SiGetDeviceNumberInformation @ 0x140970288 (SiGetDeviceNumberInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140970364 (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x140970400 (SiQueryProperty.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A70CA8 (PopPdcCsCheckSystemVolumeDevice.c)
 *     VhdiGetVolumeNumber @ 0x140A91D20 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140A91EA0 (VhdiInitializeBootDisk.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140A926B8 (VhdiQueryVolumeVhdFilePath.c)
 *     RamdiskStart @ 0x140A92778 (RamdiskStart.c)
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
