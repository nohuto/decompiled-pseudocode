/*
 * XREFs of NtQueryEaFile @ 0x1406C9520
 * Callers:
 *     <none>
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x1402054FC (IopVerifierExAllocatePoolWithQuota.c)
 *     IoGetRelatedDeviceObject @ 0x140252E60 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140253320 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x140263EB0 (IopReferenceFileObject.c)
 *     IoAllocateMdl @ 0x1402BE6D0 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     IopProbeAndLockPages_2 @ 0x140502CF0 (IopProbeAndLockPages_2.c)
 *     IopVerifierExAllocatePool_3 @ 0x140502D5C (IopVerifierExAllocatePool_3.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x1406C796C (IopSynchronousApiServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14070A3B8 (IopWaitAndAcquireFileObjectLock.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x14088CA14 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14088D1F8 (IopExceptionCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  char *v13; // rax
  unsigned __int8 *v14; // rdi
  signed int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  NTSTATUS result; // eax
  int v20; // ebx
  NTSTATUS v21; // ebx
  struct _FILE_OBJECT *v22; // r15
  _DWORD *v23; // rsi
  struct _KTHREAD *v24; // rax
  volatile __int32 *v25; // rbx
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  _DWORD *v29; // r9
  char v30; // r12
  PVOID v31; // rdi
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  IRP *v33; // rax
  IRP *Irp; // rbx
  PIO_STATUS_BLOCK v35; // rax
  __int64 v36; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  UNICODE_STRING *v38; // rdi
  ULONG Flags; // eax
  char v40; // di
  char v41; // al
  struct _KEVENT *Pool_3; // rax
  struct _IRP *PoolWithQuota; // rcx
  PMDL Mdl; // rcx
  char v45; // [rsp+40h] [rbp-78h]
  char v46; // [rsp+41h] [rbp-77h]
  _WORD v47[7]; // [rsp+42h] [rbp-76h] BYREF
  ULONG v48; // [rsp+50h] [rbp-68h]
  ULONG v49; // [rsp+54h] [rbp-64h]
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  PVOID P; // [rsp+60h] [rbp-58h]
  unsigned __int8 *v52; // [rsp+68h] [rbp-50h]
  PIRP v53; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  __int128 v55; // [rsp+80h] [rbp-38h] BYREF

  Object = 0LL;
  P = 0LL;
  *(_QWORD *)&v47[3] = 0LL;
  v45 = 0;
  v49 = 0;
  v55 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v46 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( EaList && EaListLength )
    {
      v45 = 1;
      *(_QWORD *)&v47[3] = IopVerifierExAllocatePoolWithQuota((__int64)FileHandle, EaListLength);
      memmove(*(void **)&v47[3], EaList, EaListLength);
    }
    if ( EaIndex )
      v49 = *EaIndex;
LABEL_30:
    v21 = IopReferenceFileObject(FileHandle, 8u, PreviousMode, &Object, 0LL);
    if ( v21 < 0 )
    {
      if ( v45 )
        ExFreePoolWithTag(*(PVOID *)&v47[3], 0);
    }
    else
    {
      v22 = (struct _FILE_OBJECT *)Object;
      v23 = (char *)Object + 80;
      if ( (*((_DWORD *)Object + 20) & 2) != 0 )
      {
        v24 = KeGetCurrentThread();
        --v24->KernelApcDisable;
        v25 = (volatile __int32 *)Object;
        v26 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
        LOBYTE(v47[0]) = 0;
        if ( _InterlockedExchange(v25 + 29, 1) )
        {
          v22 = (struct _FILE_OBJECT *)Object;
          v21 = IopWaitAndAcquireFileObjectLock(Object, (__int64)v47);
        }
        else
        {
          if ( v26 )
            *(_BYTE *)(v26 + 26) |= 1u;
          v22 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
          v21 = 0;
        }
        if ( !LOBYTE(v47[0]) )
        {
          v30 = 1;
          v31 = P;
          goto LABEL_38;
        }
        if ( v45 )
          ExFreePoolWithTag(*(PVOID *)&v47[3], 0);
      }
      else
      {
        Pool_3 = (struct _KEVENT *)IopVerifierExAllocatePool_3();
        v31 = Pool_3;
        P = Pool_3;
        if ( Pool_3 )
        {
          KeInitializeEvent(Pool_3, SynchronizationEvent, 0);
          v30 = 0;
LABEL_38:
          IopResetEvent((__int64)v22, v27, v28, v29);
          RelatedDeviceObject = IoGetRelatedDeviceObject(v22);
          v33 = (IRP *)IopAllocateIrpExReturn();
          Irp = v33;
          v53 = v33;
          if ( !v33 )
          {
            if ( (*v23 & 2) == 0 )
              ExFreePoolWithTag(v31, 0);
            IopAllocateIrpCleanup((PADAPTER_OBJECT)v22, 0LL);
            if ( v45 )
              ExFreePoolWithTag(*(PVOID *)&v47[3], 0);
            return -1073741670;
          }
          v33->Tail.Overlay.OriginalFileObject = v22;
          v33->Tail.Overlay.Thread = CurrentThread;
          v33->RequestorMode = v46;
          if ( v30 )
          {
            v35 = IoStatusBlock;
            v36 = 0LL;
          }
          else
          {
            v33->Flags = 4;
            v35 = (PIO_STATUS_BLOCK)&v55;
            v36 = (__int64)v31;
          }
          Irp->UserEvent = (PKEVENT)v36;
          Irp->UserIosb = v35;
          Irp->Overlay.AllocationSize.QuadPart = 0LL;
          CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].MajorFunction = 7;
          CurrentStackLocation[-1].FileObject = v22;
          if ( v45 )
          {
            v38 = *(UNICODE_STRING **)&v47[3];
            Irp->Tail.Overlay.AuxiliaryBuffer = *(PCHAR *)&v47[3];
            CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = v38;
            CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = EaListLength;
          }
          Flags = RelatedDeviceObject->Flags;
          if ( (Flags & 4) != 0 )
          {
            if ( !Length )
            {
              Irp->AssociatedIrp.MasterIrp = 0LL;
              Irp->Flags |= 0x50u;
              goto LABEL_46;
            }
            PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v36, Length);
            Irp->AssociatedIrp.MasterIrp = PoolWithQuota;
            if ( !IopDisableBufferedIoInit )
              memset(PoolWithQuota, 0, Length);
            Irp->Flags |= 0x70u;
          }
          else if ( (Flags & 0x10) != 0 )
          {
            if ( Length )
            {
              Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
              if ( !Mdl )
                RtlRaiseStatus(-1073741670);
              v40 = v46;
              IopProbeAndLockPages_2(Mdl, v46, 1, (__int64)RelatedDeviceObject, CurrentStackLocation[-1].MajorFunction);
              goto LABEL_47;
            }
LABEL_46:
            v40 = v46;
LABEL_47:
            CurrentStackLocation[-1].Parameters.Read.Length = Length;
            CurrentStackLocation[-1].Parameters.Create.EaLength = v49;
            CurrentStackLocation[-1].Flags = 0;
            v41 = 0;
            if ( RestartScan )
            {
              CurrentStackLocation[-1].Flags = 1;
              v41 = 1;
            }
            if ( ReturnSingleEntry )
            {
              v41 |= 2u;
              CurrentStackLocation[-1].Flags = v41;
            }
            if ( EaIndex )
              CurrentStackLocation[-1].Flags = v41 | 4;
            result = IopSynchronousServiceTail(RelatedDeviceObject, Irp, (__int64)v22, 0LL, v40, v30, 2u);
            if ( !v30 )
              return IopSynchronousApiServiceTail(result, P, Irp, v40, (unsigned int *)&v55, IoStatusBlock);
            return result;
          }
          Irp->UserBuffer = Buffer;
          goto LABEL_46;
        }
        if ( v45 )
          ExFreePoolWithTag(*(PVOID *)&v47[3], 0);
        v21 = -1073741670;
      }
      HalPutDmaAdapter((PADAPTER_OBJECT)v22);
    }
    return v21;
  }
  v12 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
    v12 = (__int64)IoStatusBlock;
  *(_DWORD *)v12 = *(_DWORD *)v12;
  ProbeForWrite(Buffer, Length, 4u);
  if ( EaIndex )
  {
    v18 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EaIndex < 0x7FFFFFFF0000LL )
      v18 = (__int64)EaIndex;
    v49 = *(_DWORD *)v18;
  }
  if ( !EaList || !EaListLength )
    goto LABEL_30;
  v52 = 0LL;
  v48 = 0;
  v45 = 1;
  if ( ((unsigned __int8)EaList & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = (char *)EaList + EaListLength;
  if ( (unsigned __int64)v13 > 0x7FFFFFFF0000LL || v13 < EaList )
    MEMORY[0x7FFFFFFF0000] = 0;
  v14 = (unsigned __int8 *)IopVerifierExAllocatePoolWithQuota(0x7FFFFFFF0000LL, EaListLength);
  *(_QWORD *)&v47[3] = v14;
  memmove(v14, EaList, EaListLength);
  v52 = v14;
  v15 = EaListLength;
  v48 = EaListLength;
  while ( 1 )
  {
    if ( v15 < 5 )
    {
      v48 = 0;
      ExFreePoolWithTag(*(PVOID *)&v47[3], 0);
      *(_QWORD *)&v47[3] = 0LL;
      IoStatusBlock->Status = -2147483628;
      IoStatusBlock->Information = 0LL;
      return -2147483628;
    }
    v16 = v14[4] + 6;
    if ( v15 < v16 )
      break;
    v17 = *(unsigned int *)v14;
    if ( !(_DWORD)v17 )
    {
      v48 = v15 - v16;
      if ( (int)(v15 - v16) >= 0 )
        goto LABEL_30;
      break;
    }
    if ( ((v14[4] + 9) & 0xFFFFFFFC) != (_DWORD)v17 )
      break;
    if ( (int)v17 < 0 )
      break;
    v15 -= v17;
    v48 = v15;
    if ( v15 < 0 )
      break;
    v14 += v17;
    v52 = v14;
  }
  v20 = (_DWORD)v14 - *(_DWORD *)&v47[3];
  v48 = (_DWORD)v14 - *(_DWORD *)&v47[3];
  ExFreePoolWithTag(*(PVOID *)&v47[3], 0);
  *(_QWORD *)&v47[3] = 0LL;
  IoStatusBlock->Status = -2147483628;
  IoStatusBlock->Information = v20;
  return -2147483628;
}
