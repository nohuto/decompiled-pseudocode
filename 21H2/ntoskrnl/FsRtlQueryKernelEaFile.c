/*
 * XREFs of FsRtlQueryKernelEaFile @ 0x1405E92E0
 * Callers:
 *     SPCallServerHandleFileIntegrityQuery @ 0x1407284D4 (SPCallServerHandleFileIntegrityQuery.c)
 * Callees:
 *     IoAllocateIrpEx @ 0x14021EC80 (IoAllocateIrpEx.c)
 *     IoCancelIrp @ 0x1402394D0 (IoCancelIrp.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1406EC2C0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     FsRtlpFreeMdlChain @ 0x14088C5C0 (FsRtlpFreeMdlChain.c)
 */

__int64 __fastcall FsRtlQueryKernelEaFile(
        PFILE_OBJECT FileObject,
        __int64 a2,
        int a3,
        char a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        char a8,
        _DWORD *a9)
{
  IRP *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int Status; // edi
  struct _MDL *MdlAddress; // rcx
  PIRP Irp; // [rsp+30h] [rbp-38h]
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-30h]
  PVOID ObjectArray; // [rsp+40h] [rbp-28h] BYREF
  struct _KEVENT Object; // [rsp+48h] [rbp-20h] BYREF

  v13 = 0LL;
  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    Status = -1073741808;
  }
  else
  {
    DeviceObject = IoGetRelatedDeviceObject(FileObject);
    LOBYTE(v14) = DeviceObject->StackSize;
    v15 = IoAllocateIrpEx((__int64)DeviceObject, v14, 0LL);
    v13 = (IRP *)v15;
    Irp = (PIRP)v15;
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 184);
      *(_BYTE *)(v16 - 72) = 7;
      *(_QWORD *)(v16 - 24) = FileObject;
      *(_QWORD *)(v15 + 112) = a2;
      *(_DWORD *)(v16 - 64) = a3;
      *(_QWORD *)(v16 - 56) = a5;
      *(_DWORD *)(v16 - 48) = a6;
      if ( a7 )
      {
        *(_DWORD *)(v16 - 40) = *a7;
        *(_BYTE *)(v16 - 70) |= 4u;
      }
      else
      {
        *(_DWORD *)(v16 - 40) = 0;
      }
      if ( a8 )
        *(_BYTE *)(v16 - 70) |= 1u;
      if ( a4 )
        *(_BYTE *)(v16 - 70) |= 2u;
      v13 = (IRP *)v15;
      *(_QWORD *)(v15 + 152) = KeGetCurrentThread();
      *(_DWORD *)(v15 + 16) = 4;
      *(_BYTE *)(v15 + 64) = 0;
      v17 = *(_QWORD *)(v15 + 184);
      *(_QWORD *)(v17 - 16) = SmKmGenericCompletion;
      *(_QWORD *)(v17 - 8) = &Object;
      *(_BYTE *)(v17 - 69) = 0;
      *(_BYTE *)(v17 - 69) = 64;
      *(_BYTE *)(v17 - 69) = -64;
      *(_BYTE *)(v17 - 69) = -32;
      if ( IofCallDriver(DeviceObject, Irp) == 259 )
      {
        ObjectArray = &Object;
        if ( FsRtlCancellableWaitForMultipleObjects(1u, &ObjectArray, WaitAll, 0LL, 0LL, 0LL) == -1073741749 )
        {
          IoCancelIrp(Irp);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
      Status = Irp->IoStatus.Status;
      *a9 = Irp->IoStatus.Information;
    }
    else
    {
      Status = -1073741670;
    }
  }
  if ( v13 )
  {
    MdlAddress = v13->MdlAddress;
    if ( MdlAddress )
    {
      FsRtlpFreeMdlChain(MdlAddress);
      v13->MdlAddress = 0LL;
    }
    IoFreeIrp(v13);
  }
  return Status;
}
