/*
 * XREFs of IopAllocateAndPopulateWriteIrp @ 0x1403F0F00
 * Callers:
 *     IopPopulateCopyWriteWorkerData @ 0x1403F0E1C (IopPopulateCopyWriteWorkerData.c)
 *     IopWriteFile @ 0x1405CCA7C (IopWriteFile.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140211750 (IopResetEvent.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     IopReleaseFileObjectLock @ 0x1402238A0 (IopReleaseFileObjectLock.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x140317034 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     IopProbeAndLockPages_1 @ 0x140320664 (IopProbeAndLockPages_1.c)
 *     IopSetCopyInformationExtension @ 0x1403F086C (IopSetCopyInformationExtension.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 */

__int64 __fastcall IopAllocateAndPopulateWriteIrp(__int64 a1, IRP **a2)
{
  int v3; // r14d
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  IRP *Irp; // rax
  IRP *v8; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  int v10; // ecx
  struct _IRP *PoolWithQuota_1; // rax
  ULONG v12; // edx
  PMDL Mdl; // rax
  __int64 v14; // r8
  char v15; // dl
  int v16; // edx
  _DWORD *v17; // rax
  struct _DMA_ADAPTER *v18; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0;
  IopResetEvent(*(_QWORD *)(a1 + 16));
  v4 = *(_QWORD *)(a1 + 24);
  LOBYTE(v5) = *(_BYTE *)(a1 + 9) == 0;
  LOBYTE(v6) = *(_BYTE *)(v4 + 76);
  Irp = (IRP *)IopAllocateIrpExReturn(v4, v6, v5, retaddr);
  v8 = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = *(PFILE_OBJECT *)(a1 + 16);
    Irp->Tail.Overlay.Thread = *(PETHREAD *)a1;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = *(_BYTE *)(a1 + 8);
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->Flags = 0;
    Irp->UserEvent = *(PKEVENT *)(a1 + 32);
    Irp->UserIosb = *(PIO_STATUS_BLOCK *)(a1 + 56);
    Irp->Overlay.AllocationSize.QuadPart = *(_QWORD *)(a1 + 40);
    Irp->Overlay.AsynchronousParameters.UserApcContext = *(PVOID *)(a1 + 48);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = *(PFILE_OBJECT *)(a1 + 16);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 0x10) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
    if ( (v10 & 4) != 0 )
    {
      if ( *(_DWORD *)(a1 + 72) )
      {
        if ( *(_QWORD *)(a1 + 96) )
        {
          Irp->AssociatedIrp.MasterIrp = *(struct _IRP **)(a1 + 64);
          Irp->Flags |= 0x10u;
          Irp->UserBuffer = *(PVOID *)(a1 + 64);
        }
        else
        {
          PoolWithQuota_1 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_1(
                                             NonPagedPoolNxCacheAligned,
                                             *(unsigned int *)(a1 + 72));
          v8->AssociatedIrp.MasterIrp = PoolWithQuota_1;
          memmove(PoolWithQuota_1, *(const void **)(a1 + 64), *(unsigned int *)(a1 + 72));
          v8->Flags |= 0x30u;
        }
      }
      else
      {
        Irp->Flags |= 0x10u;
      }
    }
    else if ( (v10 & 0x10) != 0 )
    {
      v12 = *(_DWORD *)(a1 + 72);
      if ( v12 )
      {
        Mdl = IoAllocateMdl(*(PVOID *)(a1 + 64), v12, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        if ( *(_QWORD *)(a1 + 96) )
          v15 = 0;
        else
          v15 = *(_BYTE *)(a1 + 8);
        IopProbeAndLockPages_1((__int64)Mdl, v15, v14, *(_QWORD *)(a1 + 24), CurrentStackLocation[-1].MajorFunction);
      }
    }
    else
    {
      Irp->UserBuffer = *(PVOID *)(a1 + 64);
    }
    v16 = v8->Flags | 0x200;
    v8->Flags = v16;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 8) != 0 )
    {
      v16 |= 1u;
      v8->Flags = v16;
    }
    if ( *(_BYTE *)(a1 + 10) )
      v8->Flags = v16 | 0x800;
    if ( !*(_QWORD *)(a1 + 96)
      || (v8->RequestorMode = 0,
          v8->UserBuffer = *(PVOID *)(a1 + 64),
          v3 = IopSetCopyInformationExtension((__int64)v8, *(_OWORD **)(a1 + 96)),
          v3 >= 0) )
    {
      CurrentStackLocation[-1].Parameters.Read.Length = *(_DWORD *)(a1 + 72);
      CurrentStackLocation[-1].Parameters.Create.Options = *(_DWORD *)(a1 + 88);
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)(a1 + 80);
      v17 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 208LL);
      if ( v17 )
      {
        if ( (*v17 & 0x10) != 0 )
          CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
      }
    }
    if ( v3 >= 0 )
    {
      *a2 = v8;
      return (unsigned int)v3;
    }
  }
  else
  {
    v3 = -1073741670;
  }
  if ( v8 )
  {
    IopExceptionCleanupEx(*(PADAPTER_OBJECT *)(a1 + 16), v8, *(PADAPTER_OBJECT *)(a1 + 32), 0LL, *(_BYTE *)(a1 + 9));
  }
  else
  {
    if ( *(_BYTE *)(a1 + 9) )
      IopReleaseFileObjectLock(*(PADAPTER_OBJECT *)(a1 + 16));
    v18 = *(struct _DMA_ADAPTER **)(a1 + 32);
    if ( v18 )
    {
      HalPutDmaAdapter(v18);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return (unsigned int)v3;
}
