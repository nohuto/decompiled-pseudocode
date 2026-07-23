/*
 * XREFs of CcMdlWriteComplete @ 0x1406208A0
 * Callers:
 *     <none>
 * Callees:
 *     CcMdlWriteComplete2 @ 0x14024E958 (CcMdlWriteComplete2.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void __stdcall CcMdlWriteComplete(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, PMDL MdlChain)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rcx
  struct _DRIVER_OBJECT *DriverObject; // r9
  PFAST_IO_DISPATCH FastIoDispatch; // r10
  unsigned __int8 (__fastcall *MdlWriteComplete)(PFILE_OBJECT, PLARGE_INTEGER, PMDL, PDEVICE_OBJECT); // rax

  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DriverObject = RelatedDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  if ( !FastIoDispatch
    || FastIoDispatch->SizeOfFastIoDispatch <= 0x98
    || (MdlWriteComplete = (unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, PMDL, PDEVICE_OBJECT))FastIoDispatch->MdlWriteComplete) == 0LL
    || !MdlWriteComplete(FileObject, FileOffset, MdlChain, RelatedDeviceObject) )
  {
    CcMdlWriteComplete2((__int64)FileObject, (__int64 *)FileOffset, MdlChain, (int)DriverObject);
  }
}
