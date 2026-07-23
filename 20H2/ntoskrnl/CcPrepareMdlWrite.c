/*
 * XREFs of CcPrepareMdlWrite @ 0x14032B1B0
 * Callers:
 *     FsRtlPrepareMdlWriteDev @ 0x14088DD10 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     IoFreeMdl @ 0x14020A410 (IoFreeMdl.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IoAllocateMdl @ 0x140248500 (IoAllocateMdl.c)
 *     MiProbeAndLockPages @ 0x14026BB80 (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x14029ADE0 (CcGetPartition.c)
 *     CcGetVirtualAddress @ 0x1402A4660 (CcGetVirtualAddress.c)
 *     CcMapAndRead @ 0x1402A4B30 (CcMapAndRead.c)
 *     CcSetDirtyInMask @ 0x1402B96C0 (CcSetDirtyInMask.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     CcForceWriteThrough @ 0x14032B52C (CcForceWriteThrough.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall CcPrepareMdlWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus)
{
  ULONG v5; // edi
  ULONG v7; // esi
  struct _FAST_MUTEX *SharedCacheMap; // r14
  LONGLONG QuadPart; // rbx
  unsigned int v10; // r12d
  LONGLONG v11; // rdi
  int v12; // esi
  __int64 v13; // rbx
  char v14; // bl
  __int64 v15; // rbx
  PMDL v16; // rcx
  struct _KEVENT *v17; // rcx
  struct _MDL *Next; // rax
  __int64 Partition; // rax
  unsigned __int8 OldIrql; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v24; // eax
  bool v25; // zf
  ULONG v26; // [rsp+30h] [rbp-C8h] BYREF
  int v27; // [rsp+34h] [rbp-C4h]
  int v28; // [rsp+38h] [rbp-C0h]
  int v29; // [rsp+40h] [rbp-B8h]
  unsigned __int64 v30; // [rsp+48h] [rbp-B0h]
  struct _MDL *Mdl; // [rsp+50h] [rbp-A8h]
  volatile signed __int32 *v32; // [rsp+58h] [rbp-A0h] BYREF
  LONGLONG v33; // [rsp+60h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-90h] BYREF
  struct _FAST_MUTEX *v35; // [rsp+80h] [rbp-78h]
  LONGLONG v36; // [rsp+88h] [rbp-70h]
  PVOID VirtualAddress; // [rsp+90h] [rbp-68h]
  PMDL i; // [rsp+98h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-58h]
  struct _KTHREAD *v40; // [rsp+A8h] [rbp-50h]
  struct _KTHREAD *v41; // [rsp+B0h] [rbp-48h]
  ULONG v42; // [rsp+110h] [rbp+18h]

  v42 = Length;
  v5 = Length;
  Mdl = 0LL;
  v30 = 0LL;
  v28 = 0;
  v7 = 0;
  v29 = 0;
  v32 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedCacheMap = (struct _FAST_MUTEX *)FileObject->SectionObjectPointer->SharedCacheMap;
  v35 = SharedCacheMap;
  if ( (FileObject->Flags & 0x10) == 0 && (unsigned __int8)CcForceWriteThrough(FileObject, Length, SharedCacheMap, 0LL) )
    RtlRaiseStatus(-1073741670);
  QuadPart = FileOffset->QuadPart;
  v33 = QuadPart;
  while ( v5 )
  {
    v26 = 0;
    v36 = 0LL;
    VirtualAddress = (PVOID)CcGetVirtualAddress((__int64)SharedCacheMap, QuadPart, &v32, &v26, 0, 0);
    v10 = v26;
    if ( v26 > v5 )
      v10 = v5;
    v26 = v10;
    v11 = QuadPart + v10;
    v36 = v11;
    v12 = 2;
    v27 = 2;
    if ( (QuadPart & 0xFFF) == 0 )
    {
      if ( v10 >= 0x1000 )
        v12 = 3;
      v27 = v12;
    }
    if ( (v11 & 0xFFF) == 0 )
    {
      v12 |= 4u;
      v27 = v12;
    }
    v30 = QuadPart & 0xFFFFFFFFFFFFF000uLL;
    ExAcquireFastMutex(SharedCacheMap + 5);
    v30 = *(_QWORD *)&SharedCacheMap->OldIrql - v30;
    v13 = v30;
    KeReleaseGuardedMutex(SharedCacheMap + 5);
    if ( v13 <= 0 )
    {
      v12 |= 7u;
LABEL_15:
      v27 = v12;
      goto LABEL_16;
    }
    if ( (unsigned int)v30 <= 0x1000 && !HIDWORD(v30) )
    {
      v12 |= 6u;
      goto LABEL_15;
    }
LABEL_16:
    CcMapAndRead(v10, v12, 1, (__int64)VirtualAddress);
    Mdl = IoAllocateMdl(VirtualAddress, v10, 0, 0, 0LL);
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    CurrentThread = KeGetCurrentThread();
    v14 = BYTE5(CurrentThread[1].Queue) + 2;
    v28 = BYTE5(CurrentThread[1].Queue) + 2;
    v40 = CurrentThread;
    BYTE5(CurrentThread[1].Queue) = 1;
    MiProbeAndLockPages((__int64)Mdl, 0, 1);
    v41 = KeGetCurrentThread();
    BYTE5(v41[1].Queue) = v14 - 2;
    v28 = 0;
    ExAcquireFastMutex(SharedCacheMap + 5);
    if ( v11 > *(_QWORD *)&SharedCacheMap->OldIrql )
      *(_QWORD *)&SharedCacheMap->OldIrql = v11;
    KeReleaseGuardedMutex(SharedCacheMap + 5);
    v15 = *((_QWORD *)v32 + 1);
    if ( !(unsigned __int16)_InterlockedDecrement(v32 + 4) )
    {
      v17 = *(struct _KEVENT **)(v15 + 184);
      if ( v17 )
        KeSetEvent(v17, 0, 0);
      _InterlockedAdd((volatile signed __int32 *)(v15 + 544), 0xFFFFFFFF);
    }
    v32 = 0LL;
    v16 = *MdlChain;
    if ( *MdlChain )
    {
      for ( i = *MdlChain; ; i = Next )
      {
        Next = v16->Next;
        if ( !v16->Next )
          break;
        v16 = v16->Next;
      }
      v16->Next = Mdl;
    }
    else
    {
      *MdlChain = Mdl;
    }
    Mdl = 0LL;
    QuadPart = v11;
    v33 = v11;
    v7 = v26 + v29;
    v29 += v26;
    v5 = v42 - v26;
    v42 -= v26;
  }
  Partition = CcGetPartition(SharedCacheMap);
  IoStatus->Status = 0;
  IoStatus->Information = v7;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  ++*(&SharedCacheMap->Count + 1);
  ++LODWORD(SharedCacheMap[9].Event.Header.WaitListHead.Flink);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v25 = (v24 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v24;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
}
