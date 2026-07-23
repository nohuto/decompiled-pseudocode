/*
 * XREFs of ZwCreateFile @ 0x1403F8C10
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x140370EDC (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x14037FE8C (LdrpMapResourceFile.c)
 *     PspIoRateEntryActivate @ 0x1405D5224 (PspIoRateEntryActivate.c)
 *     CmpOpenHiveFile @ 0x14064F528 (CmpOpenHiveFile.c)
 *     EtwpCreateDirectoryFile @ 0x1407168AC (EtwpCreateDirectoryFile.c)
 *     PopGetPolicyDeviceObject @ 0x1407C0180 (PopGetPolicyDeviceObject.c)
 *     FsRtlpOpenDev @ 0x1407C383C (FsRtlpOpenDev.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x1407C4C94 (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpVolumeContextStart @ 0x1407CBEC4 (CmpVolumeContextStart.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1407CE108 (ExpGetSystemWriteConstraintInformation.c)
 *     CmpInitBackupHive @ 0x140873AF0 (CmpInitBackupHive.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140875734 (CmpOpenFileWithExtremePrejudice.c)
 *     IopBootLogToFile @ 0x1408938F4 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x1408A1824 (PiCreateDirectoryPath.c)
 *     SmKmStoreFileOpenVolume @ 0x14092F504 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x140930EFC (SmpUtilsGetControlDevice.c)
 *     PopFlushVolumeWorker @ 0x14099ADB0 (PopFlushVolumeWorker.c)
 *     KdpCreateFileCallback @ 0x1409B9AE0 (KdpCreateFileCallback.c)
 *     EmInitSystem @ 0x140A4633C (EmInitSystem.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A49500 (BapdpProcessVsmKeyBlobs.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A70F6C (PiCreateDriverDataDirectoryRoot.c)
 *     VhdiMountVhdFile @ 0x140A97E08 (VhdiMountVhdFile.c)
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
