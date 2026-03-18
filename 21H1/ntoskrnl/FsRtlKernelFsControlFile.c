/*
 * XREFs of FsRtlKernelFsControlFile @ 0x1406BB0B0
 * Callers:
 *     SPCallServerHandleFileIntegrityUpdate @ 0x140713C24 (SPCallServerHandleFileIntegrityUpdate.c)
 *     SPCallServerHandleFileIntegrityQuery @ 0x140714244 (SPCallServerHandleFileIntegrityQuery.c)
 *     SPCallServerHandleFileUsnQuery @ 0x14071476C (SPCallServerHandleFileUsnQuery.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140252F00 (IofCallDriver.c)
 *     IoFreeIrp @ 0x1402541B0 (IoFreeIrp.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     MmProbeAndLockPages @ 0x1402A68D0 (MmProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     IoAllocateIrpEx @ 0x1402F6690 (IoAllocateIrpEx.c)
 *     IoCancelIrp @ 0x14030AD00 (IoCancelIrp.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1405F7600 (FsRtlCancellableWaitForMultipleObjects.c)
 *     FsRtlpFreeMdlChain @ 0x140888050 (FsRtlpFreeMdlChain.c)
 */

__int64 __fastcall FsRtlKernelFsControlFile(
        PFILE_OBJECT FileObject,
        ULONG a2,
        struct _IRP *a3,
        unsigned int a4,
        struct _IRP *VirtualAddress,
        ULONG Length,
        ULONG *a7)
{
  size_t v7; // r12
  IRP *v11; // rbx
  unsigned int v12; // esi
  __int64 v13; // rdx
  IRP *v14; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG v16; // r14d
  struct _IO_STACK_LOCATION *v17; // rax
  int Status; // esi
  ULONG Information; // ecx
  struct _MDL *Mdl; // rax
  struct _MDL *MdlAddress; // rcx
  PIRP Irp; // [rsp+38h] [rbp-50h]
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *p_CurrentStackLocation; // [rsp+40h] [rbp-48h]
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
  v14 = (IRP *)IoAllocateIrpEx((__int64)DeviceObject, v13, 0LL);
  v11 = v14;
  Irp = v14;
  if ( !v14 )
    goto LABEL_21;
  p_CurrentStackLocation = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *)&v14->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1037;
  CurrentStackLocation[-1].FileObject = FileObject;
  v16 = Length;
  CurrentStackLocation[-1].Parameters.Read.Length = Length;
  CurrentStackLocation[-1].Parameters.Create.Options = v7;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a2;
  if ( (a2 & 3) == 0 )
  {
    if ( (_DWORD)v7 || Length )
    {
      if ( (unsigned int)v7 >= Length )
      {
        v14->AssociatedIrp.MasterIrp = a3;
      }
      else
      {
        v14->AssociatedIrp.MasterIrp = VirtualAddress;
        memmove(VirtualAddress, a3, v7);
      }
      v11->Flags = 16;
      v11->UserBuffer = VirtualAddress;
      if ( VirtualAddress )
        v11->Flags |= 0x40u;
    }
    else
    {
      v14->Flags = 0;
      v14->UserBuffer = 0LL;
    }
    goto LABEL_10;
  }
  if ( v12 > 2 )
  {
    if ( v12 == 3 )
    {
      v14->UserBuffer = VirtualAddress;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)a3;
    }
    goto LABEL_10;
  }
  if ( a3 )
  {
    v14->AssociatedIrp.MasterIrp = a3;
    v14->Flags = 16;
  }
  else
  {
    v14->Flags = 0;
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
  v17 = p_CurrentStackLocation->CurrentStackLocation;
  v17[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)SmKmGenericCompletion;
  v17[-1].Context = &Object;
  v17[-1].Control = 0;
  v17[-1].Control = 64;
  v17[-1].Control = -64;
  v17[-1].Control = -32;
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
