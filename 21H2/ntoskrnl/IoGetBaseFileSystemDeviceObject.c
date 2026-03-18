/*
 * XREFs of IoGetBaseFileSystemDeviceObject @ 0x140288630
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14028B12C (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14028D3BC (FsRtlReleaseFileForModWrite.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x1406FE4F0 (FsRtlAcquireFileExclusiveCommon.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407F0748 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407F099C (FsRtlAcquireFileForCcFlushEx.c)
 *     PnpHandleProcessWalkWorker @ 0x1409465D0 (PnpHandleProcessWalkWorker.c)
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
