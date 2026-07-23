/*
 * XREFs of CcUninitializeCacheMap @ 0x140301600
 * Callers:
 *     CcPurgeCacheSection @ 0x1402FB670 (CcPurgeCacheSection.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IoDiskIoAttributionDereference @ 0x140207954 (IoDiskIoAttributionDereference.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPurgeCacheSection @ 0x1402FB670 (CcPurgeCacheSection.c)
 *     CcDeleteSharedCacheMap @ 0x1402FEB2C (CcDeleteSharedCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x140301A0C (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x140301A7C (CcDereferencePartition.c)
 *     CcScheduleLazyWriteScan @ 0x140301AAC (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140301B38 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140341080 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall CcUninitializeCacheMap(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER TruncateSize,
        PCACHE_UNINITIALIZE_EVENT UninitializeEvent)
{
  __int64 v3; // r9
  BOOLEAN v5; // r15
  bool v6; // r12
  PFILE_OBJECT v7; // r13
  __int64 Partition; // rsi
  unsigned __int8 CurrentIrql; // r11
  char v10; // dl
  __int64 v11; // r8
  __int64 v12; // r9
  PFILE_OBJECT *PrivateCacheMap; // rdi
  char *SharedCacheMap; // rbx
  PFILE_OBJECT **v15; // rdx
  PVOID *v16; // rcx
  __int64 v17; // rdx
  PCACHE_UNINITIALIZE_EVENT v18; // r11
  int v19; // eax
  unsigned __int64 OldIrql; // rbx
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  unsigned __int64 v24; // rbx
  PFILE_OBJECT v25; // rax
  __int64 v26; // rdx
  _QWORD *p_Type; // rcx
  __int64 FsContext; // rcx
  _DWORD *SchedulerAssist; // r10
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v32; // r9
  int v33; // eax
  bool v34; // zf
  unsigned __int8 v35; // al
  _DWORD *v36; // r9
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  _DWORD *v40; // r8
  int v41; // eax
  unsigned __int8 v42; // r9
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r8
  int v46; // eax
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r9
  _DWORD *v49; // r8
  int v50; // eax
  struct _KLOCK_QUEUE_HANDLE v51; // [rsp+30h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v53; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int8 v54; // [rsp+C0h] [rbp+40h]
  PCACHE_UNINITIALIZE_EVENT v56; // [rsp+D0h] [rbp+50h]

  v56 = UninitializeEvent;
  v51.LockQueue.Lock = &CcMasterLock;
  v5 = 0;
  v6 = 0;
  v51.LockQueue.Next = 0LL;
  *(_QWORD *)&v51.OldIrql = 0LL;
  v7 = 0LL;
  Partition = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v53, 0, sizeof(v53));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    UninitializeEvent = (PCACHE_UNINITIALIZE_EVENT)((-1LL << (CurrentIrql + 1)) & 4);
    v3 = (unsigned int)UninitializeEvent | SchedulerAssist[5];
    SchedulerAssist[5] = v3;
  }
  v51.OldIrql = CurrentIrql;
  KxAcquireQueuedSpinLock(&v51, &CcMasterLock, UninitializeEvent, v3);
  PrivateCacheMap = (PFILE_OBJECT *)FileObject->PrivateCacheMap;
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    Partition = CcGetPartition(FileObject->SectionObjectPointer->SharedCacheMap, v10, v11);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(Partition + 968)) <= 1 )
      __fastfail(0xEu);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  }
  if ( !PrivateCacheMap )
  {
    v17 = 0LL;
    goto LABEL_14;
  }
  if ( PrivateCacheMap[1] != FileObject )
    KeBugCheckEx(0x34u, 0x93DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !Partition )
    KeBugCheckEx(0x34u, 0x943uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( PrivateCacheMap[14] )
  {
    v53.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 192);
    v53.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock(&v53, Partition + 192, v11, v12);
    v25 = PrivateCacheMap[14];
    if ( v25 )
    {
      v26 = *(_QWORD *)&v25->Type;
      v7 = PrivateCacheMap[14];
      ++CcDbgNumberOfNoopedReadAheads;
      p_Type = &v25->DeviceObject->Type;
      if ( *(PFILE_OBJECT *)(v26 + 8) != v25 || (PFILE_OBJECT)*p_Type != v25 )
LABEL_70:
        __fastfail(3u);
      *p_Type = v26;
      *(_QWORD *)(v26 + 8) = p_Type;
      v25->DeviceObject = 0LL;
      *(_QWORD *)&v25->Type = 0LL;
      if ( (PFILE_OBJECT)v25->Vpb != FileObject )
        KeBugCheckEx(0x34u, 0x964uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      --*((_DWORD *)SharedCacheMap + 1);
      --*((_DWORD *)SharedCacheMap + 134);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v53);
  }
  --*((_DWORD *)SharedCacheMap + 1);
  v15 = (PFILE_OBJECT **)PrivateCacheMap[12];
  v16 = (PVOID *)PrivateCacheMap[13];
  if ( v15[1] != PrivateCacheMap + 12 || *v16 != PrivateCacheMap + 12 )
    goto LABEL_70;
  *v16 = v15;
  v15[1] = (PFILE_OBJECT *)v16;
  v17 = 0LL;
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
      if ( v56 )
      {
        if ( *((char **)SharedCacheMap + 28) == SharedCacheMap + 224 )
        {
          v56->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 34);
          *((_QWORD *)SharedCacheMap + 34) = v56;
          v6 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
        }
        else
        {
          KeSetEvent(&v56->Event, 0, 0);
        }
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( !KiIrqlFlags )
        goto LABEL_28;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_28;
      v30 = KeGetCurrentIrql();
      if ( v30 > 0xFu )
        goto LABEL_28;
      if ( LockHandle.OldIrql > 0xFu )
        goto LABEL_28;
      if ( v30 < 2u )
        goto LABEL_28;
      CurrentPrcb = KeGetCurrentPrcb();
      v32 = CurrentPrcb->SchedulerAssist;
      v33 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v34 = (v33 & v32[5]) == 0;
      v32[5] &= v33;
      if ( !v34 )
        goto LABEL_28;
LABEL_95:
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_28:
      __writecr8(OldIrql);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v51);
      v22 = v51.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v38 = KeGetCurrentIrql();
          if ( v38 <= 0xFu && v51.OldIrql <= 0xFu && v38 >= 2u )
          {
            v39 = KeGetCurrentPrcb();
            v40 = v39->SchedulerAssist;
            v41 = ~(unsigned __int16)(-1LL << (v51.OldIrql + 1));
            v34 = (v41 & v40[5]) == 0;
            v21 = (unsigned int)v41 & v40[5];
            v40[5] = v21;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(v39);
          }
        }
      }
      __writecr8(v22);
      goto LABEL_30;
    }
    if ( *((char **)SharedCacheMap + 28) != SharedCacheMap + 224 )
      KeBugCheckEx(0x34u, 0x9E0uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v18 = v56;
    if ( v56 )
    {
      v56->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 34);
      *((_QWORD *)SharedCacheMap + 34) = v56;
      v6 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
    }
    v19 = *((_DWORD *)SharedCacheMap + 38);
    if ( (v19 & 4) != 0 || v56 )
    {
      if ( (v19 & 0x20) != 0 )
        goto LABEL_24;
      if ( !*((_DWORD *)SharedCacheMap + 28)
        && ((v19 & 0x400) == 0 || *((_QWORD *)SharedCacheMap + 5) == 0x7FFFFFFFFFFFFFFFLL) )
      {
        CcDeleteSharedCacheMap(SharedCacheMap, &v51, &LockHandle, 0, 0LL);
        v6 = 0;
        v5 = 1;
        goto LABEL_30;
      }
    }
    if ( (v19 & 0x20) == 0 )
      CcInsertIntoDirtySharedCacheMapList(SharedCacheMap);
LABEL_24:
    *(_BYTE *)(Partition + 633) = 1;
    if ( *(_BYTE *)(Partition + 966) )
    {
      *((_DWORD *)SharedCacheMap + 38) |= 0x10000u;
      LOBYTE(v17) = 1;
    }
    else
    {
      LOBYTE(v17) = v18 && (*((_DWORD *)SharedCacheMap + 38) & 0x20) == 0;
    }
    CcScheduleLazyWriteScan(Partition, v17, (unsigned __int8)v17);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_28;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_28;
    v35 = KeGetCurrentIrql();
    if ( v35 > 0xFu )
      goto LABEL_28;
    if ( LockHandle.OldIrql > 0xFu )
      goto LABEL_28;
    if ( v35 < 2u )
      goto LABEL_28;
    CurrentPrcb = KeGetCurrentPrcb();
    v36 = CurrentPrcb->SchedulerAssist;
    v37 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
    v34 = (v37 & v36[5]) == 0;
    v36[5] &= v37;
    if ( !v34 )
      goto LABEL_28;
    goto LABEL_95;
  }
  if ( TruncateSize && !TruncateSize->QuadPart && FileObject->SectionObjectPointer->DataSectionObject )
  {
    if ( Partition )
      KeBugCheckEx(0x34u, 0xA82uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v51);
    v42 = v51.OldIrql;
    v54 = v51.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v43 = KeGetCurrentIrql();
        if ( v43 <= 0xFu && v51.OldIrql <= 0xFu && v43 >= 2u )
        {
          v44 = KeGetCurrentPrcb();
          v45 = v44->SchedulerAssist;
          v46 = ~(unsigned __int16)(-1LL << (v51.OldIrql + 1));
          v34 = (v46 & v45[5]) == 0;
          v45[5] &= v46;
          if ( v34 )
          {
            KiRemoveSystemWorkPriorityKick(v44);
            v42 = v54;
          }
        }
      }
    }
    __writecr8(v42);
    CcPurgeCacheSection(FileObject->SectionObjectPointer, TruncateSize, 0, 0);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v51);
    v24 = v51.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v47 = KeGetCurrentIrql();
        if ( v47 <= 0xFu && v51.OldIrql <= 0xFu && v47 >= 2u )
        {
          v48 = KeGetCurrentPrcb();
          v49 = v48->SchedulerAssist;
          v50 = ~(unsigned __int16)(-1LL << (v51.OldIrql + 1));
          v34 = (v50 & v49[5]) == 0;
          v21 = (unsigned int)v50 & v49[5];
          v49[5] = v21;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(v48);
        }
      }
    }
    __writecr8(v24);
  }
  if ( v56 )
    KeSetEvent(&v56->Event, 0, 0);
LABEL_30:
  if ( PrivateCacheMap )
    ExFreePoolWithTag(PrivateCacheMap, 0);
  if ( v6 )
  {
    LOBYTE(v21) = 1;
    CcAdjustWriteBehindThreadPoolIfNeeded(Partition, v21);
  }
  if ( v7 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)FileObject);
    FsContext = (__int64)v7->FsContext;
    if ( FsContext )
      IoDiskIoAttributionDereference(FsContext);
    CcFreeWorkQueueEntry((PSLIST_ENTRY)v7);
  }
  if ( Partition )
    CcDereferencePartition(Partition);
  return v5;
}
