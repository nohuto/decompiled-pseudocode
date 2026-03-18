/*
 * XREFs of IopGetBasicInformationFile @ 0x14066F258
 * Callers:
 *     IopOpenLinkOrRenameTarget @ 0x14066EFC0 (IopOpenLinkOrRenameTarget.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     IopGetFileInformation @ 0x1405DB0F4 (IopGetFileInformation.c)
 *     VfFastIoCheckState @ 0x1409C6994 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C6A6C (VfFastIoSnapState.c)
 */

__int64 __fastcall IopGetBasicInformationFile(struct _FILE_OBJECT *DmaAdapter, struct _IRP *a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  PFAST_IO_DISPATCH FastIoDispatch; // rdi
  __int64 (__fastcall *FastIoQueryBasicInfo)(struct _FILE_OBJECT *, __int64, struct _IRP *, __int128 *, PDEVICE_OBJECT); // rdi
  void *v7; // rbx
  __int64 v8; // rdx
  char v9; // r14
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v11 = 0LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject(DmaAdapter);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( !FastIoDispatch )
    return IopGetFileInformation(DmaAdapter, 0x28u, 4u, a2, &v12);
  FastIoQueryBasicInfo = (__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, struct _IRP *, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoQueryBasicInfo;
  if ( !FastIoQueryBasicInfo )
    return IopGetFileInformation(DmaAdapter, 0x28u, 4u, a2, &v12);
  v7 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
  v8 = DmaAdapter->Flags >> 1;
  LOBYTE(v8) = (DmaAdapter->Flags & 2) != 0;
  v9 = FastIoQueryBasicInfo(DmaAdapter, v8, a2, &v11, RelatedDeviceObject);
  if ( v7 )
    VfFastIoCheckState(v7);
  if ( v9 )
    return (unsigned int)v11;
  else
    return IopGetFileInformation(DmaAdapter, 0x28u, 4u, a2, &v12);
}
