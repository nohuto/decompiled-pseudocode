/*
 * XREFs of IopAllocateAndPopulateWriteIrp @ 0x1403F1D8C
 * Callers:
 *     IopPopulateCopyWriteWorkerData @ 0x1403F1AB4 (IopPopulateCopyWriteWorkerData.c)
 *     IopWriteFile @ 0x1405CEB78 (IopWriteFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140235D1C (IopVerifierExAllocatePoolWithQuota.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IopProbeAndLockPages @ 0x140240264 (IopProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     IopReleaseFileObjectLock @ 0x1403584A0 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x14035C790 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x14035CB30 (IopResetEvent.c)
 *     IopSetCopyInformationExtension @ 0x1403F149C (IopSetCopyInformationExtension.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 */

__int64 __fastcall IopAllocateAndPopulateWriteIrp(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v5; // r14d
  __int64 v6; // rcx
  __int64 v7; // rcx
  IRP *Irp; // rax
  IRP *v9; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  int v11; // ecx
  struct _IRP *PoolWithQuota; // rax
  ULONG v13; // edx
  PMDL Mdl; // rax
  __int64 v15; // r8
  unsigned __int8 v16; // dl
  int v17; // edx
  _DWORD *v18; // rax
  struct _DMA_ADAPTER *v19; // rcx
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v22; // [rsp+68h] [rbp+10h]

  v22 = (_QWORD *)a2;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v6 + 80) & 2) == 0 || *(int *)(a1 + 92) >= 0 )
    IopResetEvent(v6, a2, a3, a4);
  v7 = *(_QWORD *)(a1 + 24);
  LOBYTE(a3) = *(_BYTE *)(a1 + 9) == 0;
  LOBYTE(a2) = *(_BYTE *)(v7 + 76);
  Irp = (IRP *)IopAllocateIrpExReturn(v7, a2, a3, retaddr);
  v9 = Irp;
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
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
    if ( (v11 & 4) != 0 )
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
          PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(
                                           NonPagedPoolNxCacheAligned,
                                           *(unsigned int *)(a1 + 72));
          v9->AssociatedIrp.MasterIrp = PoolWithQuota;
          memmove(PoolWithQuota, *(const void **)(a1 + 64), *(unsigned int *)(a1 + 72));
          v9->Flags |= 0x30u;
        }
      }
      else
      {
        Irp->Flags |= 0x10u;
      }
    }
    else if ( (v11 & 0x10) != 0 )
    {
      v13 = *(_DWORD *)(a1 + 72);
      if ( v13 )
      {
        Mdl = IoAllocateMdl(*(PVOID *)(a1 + 64), v13, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        if ( *(_QWORD *)(a1 + 96) )
          v16 = 0;
        else
          v16 = *(_BYTE *)(a1 + 8);
        IopProbeAndLockPages((__int64)Mdl, v16, v15, *(_QWORD *)(a1 + 24), CurrentStackLocation[-1].MajorFunction);
      }
    }
    else
    {
      Irp->UserBuffer = *(PVOID *)(a1 + 64);
    }
    v17 = v9->Flags | 0x200;
    v9->Flags = v17;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 8) != 0 )
    {
      v17 |= 1u;
      v9->Flags = v17;
    }
    if ( *(_BYTE *)(a1 + 10) )
    {
      v17 |= 0x800u;
      v9->Flags = v17;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 2) != 0 && *(int *)(a1 + 92) < 0 )
      v9->Flags = v17 | 0x1000;
    if ( !*(_QWORD *)(a1 + 96)
      || (v9->RequestorMode = 0,
          v9->UserBuffer = *(PVOID *)(a1 + 64),
          v5 = IopSetCopyInformationExtension((__int64)v9, *(_OWORD **)(a1 + 96)),
          v5 >= 0) )
    {
      CurrentStackLocation[-1].Parameters.Read.Length = *(_DWORD *)(a1 + 72);
      CurrentStackLocation[-1].Parameters.Create.Options = *(_DWORD *)(a1 + 88);
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)(a1 + 80);
      v18 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 208LL);
      if ( v18 )
      {
        if ( (*v18 & 0x10) != 0 )
          CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
      }
    }
    if ( v5 >= 0 )
    {
      *v22 = v9;
      return (unsigned int)v5;
    }
  }
  else
  {
    v5 = -1073741670;
  }
  if ( v9 )
  {
    IopExceptionCleanupEx(*(PADAPTER_OBJECT *)(a1 + 16), v9, *(PADAPTER_OBJECT *)(a1 + 32), 0LL, *(_BYTE *)(a1 + 9));
  }
  else
  {
    if ( *(_BYTE *)(a1 + 9) )
      IopReleaseFileObjectLock(*(PADAPTER_OBJECT *)(a1 + 16));
    v19 = *(struct _DMA_ADAPTER **)(a1 + 32);
    if ( v19 )
    {
      HalPutDmaAdapter(v19);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return (unsigned int)v5;
}
