/*
 * XREFs of ZwCreateFile @ 0x1403F2DD0
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x14036E35C (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x14037D69C (LdrpMapResourceFile.c)
 *     PspIoRateEntryActivate @ 0x1405CD9B0 (PspIoRateEntryActivate.c)
 *     CmpOpenHiveFile @ 0x140664008 (CmpOpenHiveFile.c)
 *     EtwpCreateDirectoryFile @ 0x14067C4CC (EtwpCreateDirectoryFile.c)
 *     PopGetPolicyDeviceObject @ 0x1407AF054 (PopGetPolicyDeviceObject.c)
 *     FsRtlpOpenDev @ 0x1407B1E9C (FsRtlpOpenDev.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x1407B32F4 (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpVolumeContextStart @ 0x1407BA4C4 (CmpVolumeContextStart.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407BC708 (ExpGetSystemWriteConstraintInformation.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14086E124 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpInitBackupHive @ 0x14086FFEC (CmpInitBackupHive.c)
 *     IopBootLogToFile @ 0x14088CA84 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x14089A9D4 (PiCreateDirectoryPath.c)
 *     SmKmStoreFileOpenVolume @ 0x14092842C (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x140929E1C (SmpUtilsGetControlDevice.c)
 *     PopFlushVolumeWorker @ 0x140993610 (PopFlushVolumeWorker.c)
 *     KdpCreateFileCallback @ 0x1409B3AE0 (KdpCreateFileCallback.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A3D9AC (BapdpProcessVsmKeyBlobs.c)
 *     EmInitSystem @ 0x140A4710C (EmInitSystem.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A6A400 (PiCreateDriverDataDirectoryRoot.c)
 *     VhdiMountVhdFile @ 0x140A92A98 (VhdiMountVhdFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateFile(
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
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
