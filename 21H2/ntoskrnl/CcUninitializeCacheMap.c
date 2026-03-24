/*
 * XREFs of CcUninitializeCacheMap @ 0x1402F68B0
 * Callers:
 *     CcPurgeCacheSection @ 0x1402F0920 (CcPurgeCacheSection.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IoDiskIoAttributionDereference @ 0x14028A7B4 (IoDiskIoAttributionDereference.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     CcPurgeCacheSection @ 0x1402F0920 (CcPurgeCacheSection.c)
 *     CcDeleteSharedCacheMap @ 0x1402F3DDC (CcDeleteSharedCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x1402F6CBC (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x1402F6D2C (CcDereferencePartition.c)
 *     CcScheduleLazyWriteScan @ 0x1402F6D5C (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1402F6DE8 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcGetPartition @ 0x140313800 (CcGetPartition.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140336330 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall CcUninitializeCacheMap(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER TruncateSize,
        PCACHE_UNINITIALIZE_EVENT UninitializeEvent)
{
  BOOLEAN v4; // r15
  bool v5; // r12
  PFILE_OBJECT v6; // r13
  __int64 Partition; // rsi
  unsigned __int8 CurrentIrql; // r11
  __int64 v9; // r8
  PFILE_OBJECT *PrivateCacheMap; // rdi
  char *SharedCacheMap; // rbx
  PFILE_OBJECT **v12; // rdx
  PVOID *v13; // rcx
  __int64 v14; // rdx
  PCACHE_UNINITIALIZE_EVENT v15; // r11
  int v16; // eax
  unsigned __int64 OldIrql; // rbx
  __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  unsigned __int64 v21; // rbx
  PFILE_OBJECT v22; // rax
  __int64 v23; // rdx
  _QWORD *p_Type; // rcx
  __int64 FsContext; // rcx
  _DWORD *SchedulerAssist; // r10
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v29; // r9
  int v30; // eax
  bool v31; // zf
  unsigned __int8 v32; // al
  _DWORD *v33; // r9
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  unsigned __int8 v39; // r9
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r8
  int v43; // eax
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r9
  _DWORD *v46; // r8
  int v47; // eax
  struct _KLOCK_QUEUE_HANDLE v48; // [rsp+30h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v50; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int8 v51; // [rsp+C0h] [rbp+40h]
  PCACHE_UNINITIALIZE_EVENT v53; // [rsp+D0h] [rbp+50h]

  v53 = UninitializeEvent;
  v48.LockQueue.Lock = &CcMasterLock;
  v4 = 0;
  v5 = 0;
  v48.LockQueue.Next = 0LL;
  *(_QWORD *)&v48.OldIrql = 0LL;
  v6 = 0LL;
  Partition = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v50, 0, sizeof(v50));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    UninitializeEvent = (PCACHE_UNINITIALIZE_EVENT)((-1LL << (CurrentIrql + 1)) & 4);
    SchedulerAssist[5] |= (unsigned int)UninitializeEvent;
  }
  v48.OldIrql = CurrentIrql;
  KxAcquireQueuedSpinLock(&v48, &CcMasterLock, UninitializeEvent);
  PrivateCacheMap = (PFILE_OBJECT *)FileObject->PrivateCacheMap;
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    Partition = CcGetPartition(FileObject->SectionObjectPointer->SharedCacheMap);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(Partition + 968)) <= 1 )
      __fastfail(0xEu);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  }
  if ( !PrivateCacheMap )
  {
    v14 = 0LL;
    goto LABEL_14;
  }
  if ( PrivateCacheMap[1] != FileObject )
    KeBugCheckEx(0x34u, 0x93DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !Partition )
    KeBugCheckEx(0x34u, 0x943uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( PrivateCacheMap[14] )
  {
    v50.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 192);
    v50.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock(&v50, Partition + 192, v9);
    v22 = PrivateCacheMap[14];
    if ( v22 )
    {
      v23 = *(_QWORD *)&v22->Type;
      v6 = PrivateCacheMap[14];
      ++CcDbgNumberOfNoopedReadAheads;
      p_Type = &v22->DeviceObject->Type;
      if ( *(PFILE_OBJECT *)(v23 + 8) != v22 || (PFILE_OBJECT)*p_Type != v22 )
LABEL_70:
        __fastfail(3u);
      *p_Type = v23;
      *(_QWORD *)(v23 + 8) = p_Type;
      v22->DeviceObject = 0LL;
      *(_QWORD *)&v22->Type = 0LL;
      if ( (PFILE_OBJECT)v22->Vpb != FileObject )
        KeBugCheckEx(0x34u, 0x964uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      --*((_DWORD *)SharedCacheMap + 1);
      --*((_DWORD *)SharedCacheMap + 134);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v50);
  }
  --*((_DWORD *)SharedCacheMap + 1);
  v12 = (PFILE_OBJECT **)PrivateCacheMap[12];
  v13 = (PVOID *)PrivateCacheMap[13];
  if ( v12[1] != PrivateCacheMap + 12 || *v13 != PrivateCacheMap + 12 )
    goto LABEL_70;
  *v13 = v12;
  v12[1] = (PFILE_OBJECT *)v13;
  v14 = 0LL;
  if ( PrivateCacheMap == (PFILE_OBJECT *)(SharedCacheMap + 376) )
  {
    *(_WORD *)PrivateCacheMap = 0;
    PrivateCacheMap = 0LL;
  }
  FileObject->PrivateCacheMap = 0LL;
LABEL_14:
  if ( SharedCacheMap )
  {
    if ( TruncateSize )
    {
      if ( TruncateSize->QuadPart || !*((_QWORD *)SharedCacheMap + 1) )
      {
        if ( *((char **)SharedCacheMap + 28) == SharedCacheMap + 224 )
          *((LARGE_INTEGER *)SharedCacheMap + 1) = *TruncateSize;
      }
      else
      {
        *((_DWORD *)SharedCacheMap + 38) |= 0x10u;
      }
    }
    if ( *((_DWORD *)SharedCacheMap + 1) )
    {
      if ( v53 )
      {
        if ( *((char **)SharedCacheMap + 28) == SharedCacheMap + 224 )
        {
          v53->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 34);
          *((_QWORD *)SharedCacheMap + 34) = v53;
          v5 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
        }
        else
        {
          KeSetEvent(&v53->Event, 0, 0);
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( !KiIrqlFlags )
        goto LABEL_28;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_28;
      v27 = KeGetCurrentIrql();
      if ( v27 > 0xFu )
        goto LABEL_28;
      if ( LockHandle.OldIrql > 0xFu )
        goto LABEL_28;
      if ( v27 < 2u )
        goto LABEL_28;
      CurrentPrcb = KeGetCurrentPrcb();
      v29 = CurrentPrcb->SchedulerAssist;
      v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v31 = (v30 & v29[5]) == 0;
      v29[5] &= v30;
      if ( !v31 )
        goto LABEL_28;
LABEL_95:
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_28:
      __writecr8(OldIrql);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v48);
      v19 = v48.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v35 = KeGetCurrentIrql();
          if ( v35 <= 0xFu && v48.OldIrql <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v37 = v36->SchedulerAssist;
            v38 = ~(unsigned __int16)(-1LL << (v48.OldIrql + 1));
            v31 = (v38 & v37[5]) == 0;
            v18 = (unsigned int)v38 & v37[5];
            v37[5] = v18;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
      }
      __writecr8(v19);
      goto LABEL_30;
    }
    if ( *((char **)SharedCacheMap + 28) != SharedCacheMap + 224 )
      KeBugCheckEx(0x34u, 0x9E0uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v15 = v53;
    if ( v53 )
    {
      v53->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 34);
      *((_QWORD *)SharedCacheMap + 34) = v53;
      v5 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
    }
    v16 = *((_DWORD *)SharedCacheMap + 38);
    if ( (v16 & 4) != 0 || v53 )
    {
      if ( (v16 & 0x20) != 0 )
        goto LABEL_24;
      if ( !*((_DWORD *)SharedCacheMap + 28)
        && ((v16 & 0x400) == 0 || *((_QWORD *)SharedCacheMap + 5) == 0x7FFFFFFFFFFFFFFFLL) )
      {
        CcDeleteSharedCacheMap(SharedCacheMap, &v48, &LockHandle, 0, 0LL);
        v5 = 0;
        v4 = 1;
        goto LABEL_30;
      }
    }
    if ( (v16 & 0x20) == 0 )
      CcInsertIntoDirtySharedCacheMapList(SharedCacheMap);
LABEL_24:
    *(_BYTE *)(Partition + 633) = 1;
    if ( *(_BYTE *)(Partition + 966) )
    {
      *((_DWORD *)SharedCacheMap + 38) |= 0x10000u;
      LOBYTE(v14) = 1;
    }
    else
    {
      LOBYTE(v14) = v15 && (*((_DWORD *)SharedCacheMap + 38) & 0x20) == 0;
    }
    CcScheduleLazyWriteScan(Partition, v14, (unsigned __int8)v14);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_28;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_28;
    v32 = KeGetCurrentIrql();
    if ( v32 > 0xFu )
      goto LABEL_28;
    if ( LockHandle.OldIrql > 0xFu )
      goto LABEL_28;
    if ( v32 < 2u )
      goto LABEL_28;
    CurrentPrcb = KeGetCurrentPrcb();
    v33 = CurrentPrcb->SchedulerAssist;
    v34 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
    v31 = (v34 & v33[5]) == 0;
    v33[5] &= v34;
    if ( !v31 )
      goto LABEL_28;
    goto LABEL_95;
  }
  if ( TruncateSize && !TruncateSize->QuadPart && FileObject->SectionObjectPointer->DataSectionObject )
  {
    if ( Partition )
      KeBugCheckEx(0x34u, 0xA82uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v48);
    v39 = v48.OldIrql;
    v51 = v48.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v40 = KeGetCurrentIrql();
        if ( v40 <= 0xFu && v48.OldIrql <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v43 = ~(unsigned __int16)(-1LL << (v48.OldIrql + 1));
          v31 = (v43 & v42[5]) == 0;
          v42[5] &= v43;
          if ( v31 )
          {
            KiRemoveSystemWorkPriorityKick(v41);
            v39 = v51;
          }
        }
      }
    }
    __writecr8(v39);
    CcPurgeCacheSection(FileObject->SectionObjectPointer, TruncateSize, 0, 0);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v48);
    v21 = v48.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v44 = KeGetCurrentIrql();
        if ( v44 <= 0xFu && v48.OldIrql <= 0xFu && v44 >= 2u )
        {
          v45 = KeGetCurrentPrcb();
          v46 = v45->SchedulerAssist;
          v47 = ~(unsigned __int16)(-1LL << (v48.OldIrql + 1));
          v31 = (v47 & v46[5]) == 0;
          v18 = (unsigned int)v47 & v46[5];
          v46[5] = v18;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(v45);
        }
      }
    }
    __writecr8(v21);
  }
  if ( v53 )
    KeSetEvent(&v53->Event, 0, 0);
LABEL_30:
  if ( PrivateCacheMap )
    ExFreePoolWithTag(PrivateCacheMap, 0);
  if ( v5 )
  {
    LOBYTE(v18) = 1;
    CcAdjustWriteBehindThreadPoolIfNeeded(Partition, v18);
  }
  if ( v6 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)FileObject);
    FsContext = (__int64)v6->FsContext;
    if ( FsContext )
      IoDiskIoAttributionDereference(FsContext);
    CcFreeWorkQueueEntry((PSLIST_ENTRY)v6);
  }
  if ( Partition )
    CcDereferencePartition(Partition);
  return v4;
}
