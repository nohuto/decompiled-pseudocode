/*
 * XREFs of FsRtlKernelFsControlFile @ 0x1405E94E0
 * Callers:
 *     SPCallServerHandleFileIntegrityUpdate @ 0x140727EB4 (SPCallServerHandleFileIntegrityUpdate.c)
 *     SPCallServerHandleFileIntegrityQuery @ 0x1407284D4 (SPCallServerHandleFileIntegrityQuery.c)
 *     SPCallServerHandleFileUsnQuery @ 0x1407289FC (SPCallServerHandleFileUsnQuery.c)
 * Callees:
 *     IoAllocateIrpEx @ 0x14021EC80 (IoAllocateIrpEx.c)
 *     IoCancelIrp @ 0x1402394D0 (IoCancelIrp.c)
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x1402AE010 (MmProbeAndLockPages.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     IoGetRelatedDeviceObject @ 0x14035C670 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1406EC2C0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     FsRtlpFreeMdlChain @ 0x14088C5C0 (FsRtlpFreeMdlChain.c)
 */

__int64 __fastcall FsRtlKernelFsControlFile(
        PFILE_OBJECT FileObject,
        int a2,
        const void *a3,
        unsigned int a4,
        PVOID VirtualAddress,
        ULONG Length,
        ULONG *a7)
{
  size_t v7; // r12
  IRP *v11; // rbx
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  ULONG v16; // r14d
  __int64 v17; // rax
  int Status; // esi
  ULONG Information; // ecx
  struct _MDL *Mdl; // rax
  struct _MDL *MdlAddress; // rcx
  PIRP Irp; // [rsp+38h] [rbp-50h]
  __int64 *v24; // [rsp+40h] [rbp-48h]
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-40h]
  PVOID ObjectArray; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+58h] [rbp-30h] BYREF

  v7 = a4;
  v11 = 0LL;
  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v12 = a2 & 3;
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    Status = -1073741808;
    goto LABEL_32;
  }
  DeviceObject = IoGetRelatedDeviceObject(FileObject);
  LOBYTE(v13) = DeviceObject->StackSize;
  v14 = IoAllocateIrpEx((__int64)DeviceObject, v13, 0LL);
  v11 = (IRP *)v14;
  Irp = (PIRP)v14;
  if ( !v14 )
    goto LABEL_21;
  v24 = (__int64 *)(v14 + 184);
  v15 = *(_QWORD *)(v14 + 184);
  *(_WORD *)(v15 - 72) = 1037;
  *(_QWORD *)(v15 - 24) = FileObject;
  v16 = Length;
  *(_DWORD *)(v15 - 64) = Length;
  *(_DWORD *)(v15 - 56) = v7;
  *(_DWORD *)(v15 - 48) = a2;
  if ( (a2 & 3) == 0 )
  {
    if ( (_DWORD)v7 || Length )
    {
      if ( (unsigned int)v7 >= Length )
      {
        *(_QWORD *)(v14 + 24) = a3;
      }
      else
      {
        *(_QWORD *)(v14 + 24) = VirtualAddress;
        memmove(VirtualAddress, a3, v7);
      }
      v11->Flags = 16;
      v11->UserBuffer = VirtualAddress;
      if ( VirtualAddress )
        v11->Flags |= 0x40u;
    }
    else
    {
      *(_DWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 112) = 0LL;
    }
    goto LABEL_10;
  }
  if ( v12 > 2 )
  {
    if ( v12 == 3 )
    {
      *(_QWORD *)(v14 + 112) = VirtualAddress;
      *(_QWORD *)(v15 - 40) = a3;
    }
    goto LABEL_10;
  }
  if ( a3 )
  {
    *(_QWORD *)(v14 + 24) = a3;
    *(_DWORD *)(v14 + 16) = 16;
  }
  else
  {
    *(_DWORD *)(v14 + 16) = 0;
  }
  if ( VirtualAddress )
  {
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    v11->MdlAddress = Mdl;
    if ( Mdl )
    {
      MmProbeAndLockPages(Mdl, 0, (LOCK_OPERATION)(v12 != 1));
      goto LABEL_10;
    }
LABEL_21:
    Status = -1073741670;
    goto LABEL_32;
  }
LABEL_10:
  v11 = Irp;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->Flags |= 4u;
  Irp->RequestorMode = 0;
  v17 = *v24;
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
  Information = Irp->IoStatus.Information;
  *a7 = Information;
  if ( Status >= 0 && Information && (unsigned int)v7 >= Length )
  {
    if ( Information < Length )
      v16 = Information;
    memmove(VirtualAddress, a3, v16);
  }
LABEL_32:
  if ( v11 )
  {
    MdlAddress = v11->MdlAddress;
    if ( MdlAddress )
    {
      FsRtlpFreeMdlChain(MdlAddress);
      v11->MdlAddress = 0LL;
    }
    IoFreeIrp(v11);
  }
  return (unsigned int)Status;
}
