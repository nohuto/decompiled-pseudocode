/*
 * XREFs of IopAllocateAndPopulateWriteIrp @ 0x1403F1D24
 * Callers:
 *     IopPopulateCopyWriteWorkerData @ 0x1403F1BE4 (IopPopulateCopyWriteWorkerData.c)
 *     IopWriteFile @ 0x1405CEB78 (IopWriteFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1402B7B3C (IopVerifierExAllocatePoolWithQuota_0.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     IopProbeAndLockPages_0 @ 0x1402C1DC4 (IopProbeAndLockPages_0.c)
 *     IoAllocateMdl @ 0x1402E8BB0 (IoAllocateMdl.c)
 *     IopReleaseFileObjectLock @ 0x14034D750 (IopReleaseFileObjectLock.c)
 *     IopAllocateIrpExReturn @ 0x140351A40 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140351DE0 (IopResetEvent.c)
 *     IopSetCopyInformationExtension @ 0x1403F15CC (IopSetCopyInformationExtension.c)
 *     Feature_1113055545__private_IsEnabledDeviceUsage @ 0x1403F1CD0 (Feature_1113055545__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 */

__int64 __fastcall IopAllocateAndPopulateWriteIrp(__int64 a1, IRP **a2)
{
  int v3; // r14d
  int IsEnabledDeviceUsage; // eax
  __int64 v5; // r8
  _DWORD *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  IRP *Irp; // rax
  IRP *v11; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  int v13; // ecx
  struct _IRP *PoolWithQuota_0; // rax
  ULONG v15; // edx
  PMDL Mdl; // rax
  __int64 v17; // r8
  char v18; // dl
  int v19; // edx
  _DWORD *v20; // rax
  struct _DMA_ADAPTER *v21; // rcx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v3 = 0;
  IsEnabledDeviceUsage = Feature_1113055545__private_IsEnabledDeviceUsage();
  v7 = IsEnabledDeviceUsage != 0;
  v8 = *(_QWORD *)(a1 + 16);
  if ( !IsEnabledDeviceUsage || (*(_DWORD *)(v8 + 80) & 2) == 0 || *(int *)(a1 + 92) >= 0 )
    IopResetEvent(v8, v7, v5, v6);
  v9 = *(_QWORD *)(a1 + 24);
  LOBYTE(v5) = *(_BYTE *)(a1 + 9) == 0;
  LOBYTE(v7) = *(_BYTE *)(v9 + 76);
  Irp = (IRP *)IopAllocateIrpExReturn(v9, v7, v5, retaddr);
  v11 = Irp;
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
    v13 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
    if ( (v13 & 4) != 0 )
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
          PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(
                                             NonPagedPoolNxCacheAligned,
                                             *(unsigned int *)(a1 + 72));
          v11->AssociatedIrp.MasterIrp = PoolWithQuota_0;
          memmove(PoolWithQuota_0, *(const void **)(a1 + 64), *(unsigned int *)(a1 + 72));
          v11->Flags |= 0x30u;
        }
      }
      else
      {
        Irp->Flags |= 0x10u;
      }
    }
    else if ( (v13 & 0x10) != 0 )
    {
      v15 = *(_DWORD *)(a1 + 72);
      if ( v15 )
      {
        Mdl = IoAllocateMdl(*(PVOID *)(a1 + 64), v15, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(0xC000009A);
        if ( *(_QWORD *)(a1 + 96) )
          v18 = 0;
        else
          v18 = *(_BYTE *)(a1 + 8);
        IopProbeAndLockPages_0((__int64)Mdl, v18, v17, *(_QWORD *)(a1 + 24), CurrentStackLocation[-1].MajorFunction);
      }
    }
    else
    {
      Irp->UserBuffer = *(PVOID *)(a1 + 64);
    }
    v19 = v11->Flags | 0x200;
    v11->Flags = v19;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 8) != 0 )
    {
      v19 |= 1u;
      v11->Flags = v19;
    }
    if ( *(_BYTE *)(a1 + 10) )
      v11->Flags = v19 | 0x800;
    if ( (unsigned int)Feature_1113055545__private_IsEnabledDeviceUsage()
      && (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 80LL) & 2) != 0
      && *(int *)(a1 + 92) < 0 )
    {
      v11->Flags |= 0x1000u;
    }
    if ( !*(_QWORD *)(a1 + 96)
      || (v11->RequestorMode = 0,
          v11->UserBuffer = *(PVOID *)(a1 + 64),
          v3 = IopSetCopyInformationExtension((__int64)v11, *(_OWORD **)(a1 + 96)),
          v3 >= 0) )
    {
      CurrentStackLocation[-1].Parameters.Read.Length = *(_DWORD *)(a1 + 72);
      CurrentStackLocation[-1].Parameters.Create.Options = *(_DWORD *)(a1 + 88);
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)(a1 + 80);
      v20 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 208LL);
      if ( v20 )
      {
        if ( (*v20 & 0x10) != 0 )
          CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 8LL);
      }
    }
    if ( v3 >= 0 )
    {
      *a2 = v11;
      return (unsigned int)v3;
    }
  }
  else
  {
    v3 = -1073741670;
  }
  if ( v11 )
  {
    IopExceptionCleanupEx(*(PADAPTER_OBJECT *)(a1 + 16), v11, *(PADAPTER_OBJECT *)(a1 + 32), 0LL, *(_BYTE *)(a1 + 9));
  }
  else
  {
    if ( *(_BYTE *)(a1 + 9) )
      IopReleaseFileObjectLock(*(PADAPTER_OBJECT *)(a1 + 16));
    v21 = *(struct _DMA_ADAPTER **)(a1 + 32);
    if ( v21 )
    {
      HalPutDmaAdapter(v21);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return (unsigned int)v3;
}
