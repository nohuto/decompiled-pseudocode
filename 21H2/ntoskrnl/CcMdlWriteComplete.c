/*
 * XREFs of CcMdlWriteComplete @ 0x1406C1C60
 * Callers:
 *     <none>
 * Callees:
 *     CcMdlWriteComplete2 @ 0x1402D05D8 (CcMdlWriteComplete2.c)
 *     IoGetRelatedDeviceObject @ 0x140351920 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

void __stdcall CcMdlWriteComplete(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, PMDL MdlChain)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rcx
  __int64 DriverObject; // r9
  __int64 v8; // r10
  unsigned __int8 (__fastcall *v9)(PFILE_OBJECT, PLARGE_INTEGER, PMDL, PDEVICE_OBJECT); // rax

  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DriverObject = (__int64)RelatedDeviceObject->DriverObject;
  v8 = *(_QWORD *)(DriverObject + 80);
  if ( !v8
    || *(_DWORD *)v8 <= 0x98u
    || (v9 = *(unsigned __int8 (__fastcall **)(PFILE_OBJECT, PLARGE_INTEGER, PMDL, PDEVICE_OBJECT))(v8 + 152)) == 0LL
    || !v9(FileObject, FileOffset, MdlChain, RelatedDeviceObject) )
  {
    CcMdlWriteComplete2((__int64)FileObject, (__int64 *)FileOffset, MdlChain, DriverObject);
  }
}
