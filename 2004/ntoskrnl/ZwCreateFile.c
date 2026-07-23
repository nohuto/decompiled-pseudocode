/*
 * XREFs of ZwCreateFile @ 0x1403F4060
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x14036EF8C (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x14037E15C (LdrpMapResourceFile.c)
 *     PspIoRateEntryActivate @ 0x1405CED80 (PspIoRateEntryActivate.c)
 *     CmpOpenHiveFile @ 0x14061E8E8 (CmpOpenHiveFile.c)
 *     EtwpCreateDirectoryFile @ 0x1406C94BC (EtwpCreateDirectoryFile.c)
 *     PopGetPolicyDeviceObject @ 0x1407B2238 (PopGetPolicyDeviceObject.c)
 *     FsRtlpOpenDev @ 0x1407B500C (FsRtlpOpenDev.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x1407B6464 (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpVolumeContextStart @ 0x1407BD634 (CmpVolumeContextStart.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407BF878 (ExpGetSystemWriteConstraintInformation.c)
 *     CmpInitBackupHive @ 0x14086E004 (CmpInitBackupHive.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14086FBE4 (CmpOpenFileWithExtremePrejudice.c)
 *     IopBootLogToFile @ 0x14088DDA4 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x14089BCF4 (PiCreateDirectoryPath.c)
 *     SmKmStoreFileOpenVolume @ 0x1409296DC (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x14092B0CC (SmpUtilsGetControlDevice.c)
 *     PopFlushVolumeWorker @ 0x140994C50 (PopFlushVolumeWorker.c)
 *     KdpCreateFileCallback @ 0x1409B3AE0 (KdpCreateFileCallback.c)
 *     EmInitSystem @ 0x140A4009C (EmInitSystem.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A43260 (BapdpProcessVsmKeyBlobs.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A6A660 (PiCreateDriverDataDirectoryRoot.c)
 *     VhdiMountVhdFile @ 0x140A921A8 (VhdiMountVhdFile.c)
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
