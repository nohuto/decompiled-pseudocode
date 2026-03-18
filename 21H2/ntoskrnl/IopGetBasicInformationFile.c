/*
 * XREFs of IopGetBasicInformationFile @ 0x1406C7B5C
 * Callers:
 *     IopOpenLinkOrRenameTarget @ 0x1406C78D4 (IopOpenLinkOrRenameTarget.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1402AC1B0 (IoGetRelatedDeviceObject.c)
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     IopGetFileInformation @ 0x14070FC40 (IopGetFileInformation.c)
 *     VfFastIoCheckState @ 0x140A8A8D4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140A8A9AC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopGetBasicInformationFile(struct _FILE_OBJECT *Object, __int64 a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  struct _DRIVER_OBJECT *DriverObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // rdi
  __int64 (__fastcall *FastIoQueryBasicInfo)(struct _FILE_OBJECT *, __int64, __int64, __int128 *, PDEVICE_OBJECT); // rdi
  void *v8; // rbx
  __int64 v9; // rdx
  char v10; // r14
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  DriverObject = RelatedDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  if ( !FastIoDispatch )
    return IopGetFileInformation(Object, (__int64)&v13);
  FastIoQueryBasicInfo = (__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, __int64, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoQueryBasicInfo;
  if ( !FastIoQueryBasicInfo )
    return IopGetFileInformation(Object, (__int64)&v13);
  v8 = (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject) ? (void *)VfFastIoSnapState() : 0LL;
  v9 = Object->Flags >> 1;
  LOBYTE(v9) = (Object->Flags & 2) != 0;
  v10 = FastIoQueryBasicInfo(Object, v9, a2, &v12, RelatedDeviceObject);
  if ( v8 )
    VfFastIoCheckState(v8);
  if ( v10 )
    return (unsigned int)v12;
  else
    return IopGetFileInformation(Object, (__int64)&v13);
}
