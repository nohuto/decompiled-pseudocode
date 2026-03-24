/*
 * XREFs of NtQueryEaFile @ 0x14069B320
 * Callers:
 *     <none>
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x14022BCD0 (IopVerifierExAllocatePoolWithQuota.c)
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     IoAllocateMdl @ 0x1402E8BB0 (IoAllocateMdl.c)
 *     IopReferenceFileObject @ 0x140348A20 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x14034A230 (KeAbPreAcquire.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x140351920 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140351A40 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140351DE0 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     IopProbeAndLockPages_3 @ 0x140508880 (IopProbeAndLockPages_3.c)
 *     IopVerifierExAllocatePool_3 @ 0x1405088EC (IopVerifierExAllocatePool_3.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     ProbeForWrite @ 0x1406547A0 (ProbeForWrite.c)
 *     IopSynchronousApiServiceTail @ 0x140698FCC (IopSynchronousApiServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406E7BB8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x1406FED80 (IopSynchronousServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BDF0 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140890E54 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQueryEaFile(
        void *a1,
        unsigned __int64 a2,
        void *a3,
        ULONG a4,
        char a5,
        char *Src,
        size_t Size,
        ULONG *a8,
        char a9)
{
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  char *v14; // rax
  unsigned __int8 *v15; // rdi
  int v16; // ecx
  __int64 result; // rax
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // ebx
  int v21; // ebx
  struct _DMA_ADAPTER *v22; // r15
  _DWORD *v23; // rsi
  struct _KTHREAD *v24; // rax
  volatile __int32 *v25; // rbx
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  _DWORD *v29; // r9
  char v30; // r12
  PVOID v31; // rdi
  struct _KEVENT *Pool_3; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v34; // rdx
  IRP *v35; // rax
  IRP *Irp; // rbx
  struct _IO_STATUS_BLOCK *v37; // rax
  __int64 v38; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  UNICODE_STRING *v40; // rdi
  ULONG Flags; // eax
  struct _IRP *PoolWithQuota; // rcx
  PMDL Mdl; // rcx
  char v44; // di
  char v45; // al
  char v46; // [rsp+40h] [rbp-78h]
  char v47; // [rsp+41h] [rbp-77h]
  _WORD v48[7]; // [rsp+42h] [rbp-76h] BYREF
  int v49; // [rsp+50h] [rbp-68h]
  ULONG v50; // [rsp+54h] [rbp-64h]
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  PVOID P; // [rsp+60h] [rbp-58h]
  unsigned __int8 *v53; // [rsp+68h] [rbp-50h]
  PIRP v54; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  __int128 v56; // [rsp+80h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  Object = 0LL;
  P = 0LL;
  *(_QWORD *)&v48[3] = 0LL;
  v46 = 0;
  v50 = 0;
  v56 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v47 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( Src && (_DWORD)Size )
    {
      v46 = 1;
      *(_QWORD *)&v48[3] = IopVerifierExAllocatePoolWithQuota((__int64)a1, (unsigned int)Size);
      memmove(*(void **)&v48[3], Src, (unsigned int)Size);
    }
    if ( a8 )
      v50 = *a8;
LABEL_33:
    v21 = IopReferenceFileObject(a1, 8u, PreviousMode, &Object, 0LL);
    if ( v21 < 0 )
    {
      if ( v46 )
        ExFreePoolWithTag(*(PVOID *)&v48[3], 0);
      return (unsigned int)v21;
    }
    v22 = (struct _DMA_ADAPTER *)Object;
    v23 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v24 = KeGetCurrentThread();
      --v24->KernelApcDisable;
      v25 = (volatile __int32 *)Object;
      v26 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
      LOBYTE(v48[0]) = 0;
      if ( _InterlockedExchange(v25 + 29, 1) )
      {
        v22 = (struct _DMA_ADAPTER *)Object;
        v21 = IopWaitAndAcquireFileObjectLock(Object, (__int64)v48);
      }
      else
      {
        if ( v26 )
          *(_BYTE *)(v26 + 26) |= 1u;
        v22 = (struct _DMA_ADAPTER *)Object;
        ObfReferenceObject(Object);
        v21 = 0;
      }
      if ( LOBYTE(v48[0]) )
      {
        if ( v46 )
          ExFreePoolWithTag(*(PVOID *)&v48[3], 0);
LABEL_51:
        HalPutDmaAdapter(v22);
        return (unsigned int)v21;
      }
      v30 = 1;
      v31 = P;
    }
    else
    {
      Pool_3 = (struct _KEVENT *)IopVerifierExAllocatePool_3();
      v31 = Pool_3;
      P = Pool_3;
      if ( !Pool_3 )
      {
        if ( v46 )
          ExFreePoolWithTag(*(PVOID *)&v48[3], 0);
        v21 = -1073741670;
        goto LABEL_51;
      }
      KeInitializeEvent(Pool_3, SynchronizationEvent, 0);
      v30 = 0;
    }
    IopResetEvent((__int64)v22, v27, v28, v29);
    RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v22);
    LOBYTE(v34) = RelatedDeviceObject->StackSize;
    v35 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v34, 0LL, retaddr);
    Irp = v35;
    v54 = v35;
    if ( !v35 )
    {
      if ( (*v23 & 2) == 0 )
        ExFreePoolWithTag(v31, 0);
      IopAllocateIrpCleanup(v22, 0LL);
      if ( v46 )
        ExFreePoolWithTag(*(PVOID *)&v48[3], 0);
      return 3221225626LL;
    }
    v35->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v22;
    v35->Tail.Overlay.Thread = CurrentThread;
    v35->RequestorMode = v47;
    if ( v30 )
    {
      v37 = (struct _IO_STATUS_BLOCK *)a2;
      v38 = 0LL;
    }
    else
    {
      v35->Flags = 4;
      v37 = (struct _IO_STATUS_BLOCK *)&v56;
      v38 = (__int64)v31;
    }
    Irp->UserEvent = (PKEVENT)v38;
    Irp->UserIosb = v37;
    Irp->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 7;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v22;
    if ( v46 )
    {
      v40 = *(UNICODE_STRING **)&v48[3];
      Irp->Tail.Overlay.AuxiliaryBuffer = *(PCHAR *)&v48[3];
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = v40;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Size;
    }
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      if ( a4 )
      {
        PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v38, a4);
        Irp->AssociatedIrp.MasterIrp = PoolWithQuota;
        if ( !IopDisableBufferedIoInit )
          memset(PoolWithQuota, 0, a4);
        Irp->Flags |= 0x70u;
        goto LABEL_74;
      }
      Irp->AssociatedIrp.MasterIrp = 0LL;
      Irp->Flags |= 0x50u;
    }
    else
    {
      if ( (Flags & 0x10) == 0 )
      {
LABEL_74:
        Irp->UserBuffer = a3;
        goto LABEL_75;
      }
      if ( a4 )
      {
        Mdl = IoAllocateMdl(a3, a4, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(0xC000009A);
        v44 = v47;
        IopProbeAndLockPages_3(
          (__int64)Mdl,
          v47,
          1,
          (__int64)RelatedDeviceObject,
          CurrentStackLocation[-1].MajorFunction);
        goto LABEL_76;
      }
    }
LABEL_75:
    v44 = v47;
LABEL_76:
    CurrentStackLocation[-1].Parameters.Read.Length = a4;
    CurrentStackLocation[-1].Parameters.Create.EaLength = v50;
    CurrentStackLocation[-1].Flags = 0;
    v45 = 0;
    if ( a9 )
    {
      CurrentStackLocation[-1].Flags = 1;
      v45 = 1;
    }
    if ( a5 )
    {
      v45 |= 2u;
      CurrentStackLocation[-1].Flags = v45;
    }
    if ( a8 )
      CurrentStackLocation[-1].Flags = v45 | 4;
    result = IopSynchronousServiceTail(RelatedDeviceObject, Irp, v44, v30, 2);
    if ( !v30 )
      return IopSynchronousApiServiceTail(result, P, Irp, v44, (unsigned int *)&v56, (_OWORD *)a2);
    return result;
  }
  v12 = 0x7FFFFFFF0000LL;
  if ( a2 < 0x7FFFFFFF0000LL )
    v12 = a2;
  *(_DWORD *)v12 = *(_DWORD *)v12;
  ProbeForWrite(a3, a4, 4u);
  if ( a8 )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a8 < 0x7FFFFFFF0000LL )
      v13 = (__int64)a8;
    v50 = *(_DWORD *)v13;
  }
  if ( !Src || !(_DWORD)Size )
    goto LABEL_33;
  v53 = 0LL;
  v49 = 0;
  v46 = 1;
  if ( ((unsigned __int8)Src & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = &Src[(unsigned int)Size];
  if ( (unsigned __int64)v14 > 0x7FFFFFFF0000LL || v14 < Src )
    MEMORY[0x7FFFFFFF0000] = 0;
  v15 = (unsigned __int8 *)IopVerifierExAllocatePoolWithQuota(0x7FFFFFFF0000LL, (unsigned int)Size);
  *(_QWORD *)&v48[3] = v15;
  memmove(v15, Src, (unsigned int)Size);
  v53 = v15;
  v16 = Size;
  v49 = Size;
  while ( 1 )
  {
    if ( v16 < 5 )
    {
      v49 = 0;
      ExFreePoolWithTag(*(PVOID *)&v48[3], 0);
      *(_QWORD *)&v48[3] = 0LL;
      *(_DWORD *)a2 = -2147483628;
      *(_QWORD *)(a2 + 8) = 0LL;
      return 2147483668LL;
    }
    v18 = v15[4] + 6;
    if ( v16 < v18 )
      break;
    v19 = *(unsigned int *)v15;
    if ( !(_DWORD)v19 )
    {
      v49 = v16 - v18;
      if ( (int)(v16 - v18) >= 0 )
        goto LABEL_33;
      break;
    }
    if ( ((v15[4] + 9) & 0xFFFFFFFC) != (_DWORD)v19 )
      break;
    if ( (int)v19 < 0 )
      break;
    v16 -= v19;
    v49 = v16;
    if ( v16 < 0 )
      break;
    v15 += v19;
    v53 = v15;
  }
  v20 = (_DWORD)v15 - *(_DWORD *)&v48[3];
  v49 = (_DWORD)v15 - *(_DWORD *)&v48[3];
  ExFreePoolWithTag(*(PVOID *)&v48[3], 0);
  *(_QWORD *)&v48[3] = 0LL;
  *(_DWORD *)a2 = -2147483628;
  *(_QWORD *)(a2 + 8) = v20;
  return 2147483668LL;
}
