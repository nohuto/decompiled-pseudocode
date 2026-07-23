/*
 * XREFs of IoGetBaseFileSystemDeviceObject @ 0x140361E10
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x140276504 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140276F3C (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14063BE14 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14063BFF4 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFile @ 0x14071EE50 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x14071F020 (FsRtlAcquireFileExclusiveCommon.c)
 *     PnpHandleProcessWalkWorker @ 0x1408A1570 (PnpHandleProcessWalkWorker.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetBaseFileSystemDeviceObject(PFILE_OBJECT FileObject)
{
  PVPB Vpb; // rax
  PDEVICE_OBJECT result; // rax
  PVPB v3; // rax

  Vpb = FileObject->Vpb;
  if ( !Vpb || (result = Vpb->DeviceObject) == 0LL )
  {
    if ( (FileObject->Flags & 0x800) != 0 )
      return FileObject->DeviceObject;
    v3 = FileObject->DeviceObject->Vpb;
    if ( !v3 )
      return FileObject->DeviceObject;
    result = v3->DeviceObject;
    if ( !result )
      return FileObject->DeviceObject;
  }
  return result;
}
