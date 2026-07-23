/*
 * XREFs of NtQueryEaFile @ 0x1406BE550
 * Callers:
 *     <none>
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x140209FF0 (IopVerifierExAllocatePoolWithQuota.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140211290 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402113B0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140211750 (IopResetEvent.c)
 *     IopReferenceFileObject @ 0x14021EA80 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     IopProbeAndLockPages_3 @ 0x140506D50 (IopProbeAndLockPages_3.c)
 *     IopVerifierExAllocatePool_3 @ 0x140506DBC (IopVerifierExAllocatePool_3.c)
 *     IopExceptionCleanupEx @ 0x1405CBC64 (IopExceptionCleanupEx.c)
 *     ProbeForWrite @ 0x14060B790 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14064A5E0 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1406BCEBC (IopSynchronousApiServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x140777E40 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140893884 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryEaFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID EaList,
        ULONG EaListLength,
        PULONG EaIndex,
        BOOLEAN RestartScan)
{
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  char *v14; // rax
  unsigned __int8 *v15; // rdi
  signed int v16; // ecx
  NTSTATUS result; // eax
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // ebx
  NTSTATUS v21; // ebx
  struct _DMA_ADAPTER *v22; // r15
  _DWORD *v23; // rsi
  char v24; // di
  struct _KTHREAD *v25; // rax
  volatile __int32 *v26; // rbx
  __int64 v27; // r9
  char v28; // r12
  PVOID v29; // rdi
  struct _KEVENT *Pool_3; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v32; // rdx
  IRP *v33; // rax
  IRP *Irp; // rbx
  PIO_STATUS_BLOCK v35; // rax
  __int64 v36; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  UNICODE_STRING *v38; // rdi
  ULONG Flags; // eax
  struct _IRP *PoolWithQuota; // rcx
  PMDL Mdl; // rcx
  char v42; // di
  char v43; // al
  char v44; // [rsp+40h] [rbp-78h]
  char v45; // [rsp+41h] [rbp-77h]
  _WORD v46[7]; // [rsp+42h] [rbp-76h] BYREF
  ULONG v47; // [rsp+50h] [rbp-68h]
  ULONG v48; // [rsp+54h] [rbp-64h]
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  PVOID P; // [rsp+60h] [rbp-58h]
  unsigned __int8 *v51; // [rsp+68h] [rbp-50h]
  PIRP v52; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  __int128 v54; // [rsp+80h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  Object = 0LL;
  P = 0LL;
  *(_QWORD *)&v46[3] = 0LL;
  v44 = 0;
  v48 = 0;
  v54 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v45 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( EaList && EaListLength )
    {
      v44 = 1;
      *(_QWORD *)&v46[3] = IopVerifierExAllocatePoolWithQuota((__int64)FileHandle, EaListLength);
      memmove(*(void **)&v46[3], EaList, EaListLength);
    }
    if ( EaIndex )
      v48 = *EaIndex;
LABEL_33:
    v21 = IopReferenceFileObject(FileHandle, 8u, PreviousMode, &Object, 0LL);
    if ( v21 < 0 )
    {
      if ( v44 )
        ExFreePoolWithTag(*(PVOID *)&v46[3], 0);
      return v21;
    }
    v22 = (struct _DMA_ADAPTER *)Object;
    v23 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v24 = (*((_DWORD *)Object + 20) & 4) != 0;
      v25 = KeGetCurrentThread();
      --v25->KernelApcDisable;
      v26 = (volatile __int32 *)Object;
      v27 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
      LOBYTE(v46[0]) = 0;
      if ( _InterlockedExchange(v26 + 29, 1) )
      {
        v22 = (struct _DMA_ADAPTER *)Object;
        v21 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, PreviousMode, v24, v27, v46);
      }
      else
      {
        if ( v27 )
          *(_BYTE *)(v27 + 26) |= 1u;
        v22 = (struct _DMA_ADAPTER *)Object;
        ObfReferenceObject(Object);
        v21 = 0;
      }
      if ( LOBYTE(v46[0]) )
      {
        if ( v44 )
          ExFreePoolWithTag(*(PVOID *)&v46[3], 0);
LABEL_51:
        HalPutDmaAdapter(v22);
        return v21;
      }
      v28 = 1;
      v29 = P;
    }
    else
    {
      Pool_3 = (struct _KEVENT *)IopVerifierExAllocatePool_3();
      v29 = Pool_3;
      P = Pool_3;
      if ( !Pool_3 )
      {
        if ( v44 )
          ExFreePoolWithTag(*(PVOID *)&v46[3], 0);
        v21 = -1073741670;
        goto LABEL_51;
      }
      KeInitializeEvent(Pool_3, SynchronizationEvent, 0);
      v28 = 0;
    }
    IopResetEvent((__int64)v22);
    RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v22);
    LOBYTE(v32) = RelatedDeviceObject->StackSize;
    v33 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v32, 0LL, retaddr);
    Irp = v33;
    v52 = v33;
    if ( !v33 )
    {
      if ( (*v23 & 2) == 0 )
        ExFreePoolWithTag(v29, 0);
      IopAllocateIrpCleanup(v22, 0LL);
      if ( v44 )
        ExFreePoolWithTag(*(PVOID *)&v46[3], 0);
      return -1073741670;
    }
    v33->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v22;
    v33->Tail.Overlay.Thread = CurrentThread;
    v33->RequestorMode = v45;
    if ( v28 )
    {
      v35 = IoStatusBlock;
      v36 = 0LL;
    }
    else
    {
      v33->Flags = 4;
      v35 = (PIO_STATUS_BLOCK)&v54;
      v36 = (__int64)v29;
    }
    Irp->UserEvent = (PKEVENT)v36;
    Irp->UserIosb = v35;
    Irp->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 7;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v22;
    if ( v44 )
    {
      v38 = *(UNICODE_STRING **)&v46[3];
      Irp->Tail.Overlay.AuxiliaryBuffer = *(PCHAR *)&v46[3];
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = v38;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = EaListLength;
    }
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      if ( Length )
      {
        PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v36, Length);
        Irp->AssociatedIrp.MasterIrp = PoolWithQuota;
        if ( !IopDisableBufferedIoInit )
          memset(PoolWithQuota, 0, Length);
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
        Irp->UserBuffer = Buffer;
        goto LABEL_75;
      }
      if ( Length )
      {
        Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        v42 = v45;
        IopProbeAndLockPages_3(
          (__int64)Mdl,
          v45,
          1,
          (__int64)RelatedDeviceObject,
          CurrentStackLocation[-1].MajorFunction);
        goto LABEL_76;
      }
    }
LABEL_75:
    v42 = v45;
LABEL_76:
    CurrentStackLocation[-1].Parameters.Read.Length = Length;
    CurrentStackLocation[-1].Parameters.Create.EaLength = v48;
    CurrentStackLocation[-1].Flags = 0;
    v43 = 0;
    if ( RestartScan )
    {
      CurrentStackLocation[-1].Flags = 1;
      v43 = 1;
    }
    if ( ReturnSingleEntry )
    {
      v43 |= 2u;
      CurrentStackLocation[-1].Flags = v43;
    }
    if ( EaIndex )
      CurrentStackLocation[-1].Flags = v43 | 4;
    result = IopSynchronousServiceTail(RelatedDeviceObject, Irp, (__int64)v22, 0, v42, v28, 2u);
    if ( !v28 )
      return IopSynchronousApiServiceTail(result, P, Irp, v42, (unsigned int *)&v54, IoStatusBlock);
    return result;
  }
  v12 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
    v12 = (__int64)IoStatusBlock;
  *(_DWORD *)v12 = *(_DWORD *)v12;
  ProbeForWrite(Buffer, Length, 4u);
  if ( EaIndex )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EaIndex < 0x7FFFFFFF0000LL )
      v13 = (__int64)EaIndex;
    v48 = *(_DWORD *)v13;
  }
  if ( !EaList || !EaListLength )
    goto LABEL_33;
  v51 = 0LL;
  v47 = 0;
  v44 = 1;
  if ( ((unsigned __int8)EaList & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (char *)EaList + EaListLength;
  if ( (unsigned __int64)v14 > 0x7FFFFFFF0000LL || v14 < EaList )
    MEMORY[0x7FFFFFFF0000] = 0;
  v15 = (unsigned __int8 *)IopVerifierExAllocatePoolWithQuota(0x7FFFFFFF0000LL, EaListLength);
  *(_QWORD *)&v46[3] = v15;
  memmove(v15, EaList, EaListLength);
  v51 = v15;
  v16 = EaListLength;
  v47 = EaListLength;
  while ( 1 )
  {
    if ( v16 < 5 )
    {
      v47 = 0;
      ExFreePoolWithTag(*(PVOID *)&v46[3], 0);
      *(_QWORD *)&v46[3] = 0LL;
      IoStatusBlock->Status = -2147483628;
      IoStatusBlock->Information = 0LL;
      return -2147483628;
    }
    v18 = v15[4] + 6;
    if ( v16 < v18 )
      break;
    v19 = *(unsigned int *)v15;
    if ( !(_DWORD)v19 )
    {
      v47 = v16 - v18;
      if ( (int)(v16 - v18) >= 0 )
        goto LABEL_33;
      break;
    }
    if ( ((v15[4] + 9) & 0xFFFFFFFC) != (_DWORD)v19 )
      break;
    if ( (int)v19 < 0 )
      break;
    v16 -= v19;
    v47 = v16;
    if ( v16 < 0 )
      break;
    v15 += v19;
    v51 = v15;
  }
  v20 = (_DWORD)v15 - *(_DWORD *)&v46[3];
  v47 = (_DWORD)v15 - *(_DWORD *)&v46[3];
  ExFreePoolWithTag(*(PVOID *)&v46[3], 0);
  *(_QWORD *)&v46[3] = 0LL;
  IoStatusBlock->Status = -2147483628;
  IoStatusBlock->Information = v20;
  return -2147483628;
}
