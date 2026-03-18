/*
 * XREFs of CcUninitializeCacheMap @ 0x140231350
 * Callers:
 *     CcPurgeCacheSection @ 0x1402CF540 (CcPurgeCacheSection.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x14022E770 (CcGetPartition.c)
 *     CcFreeWorkQueueEntry @ 0x14023175C (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x1402317CC (CcDereferencePartition.c)
 *     CcScheduleLazyWriteScan @ 0x14023188C (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140231918 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcDeleteSharedCacheMap @ 0x14023372C (CcDeleteSharedCacheMap.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14027BB40 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     CcPurgeCacheSection @ 0x1402CF540 (CcPurgeCacheSection.c)
 *     IoDiskIoAttributionDereference @ 0x1402DB1B4 (IoDiskIoAttributionDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  PFILE_OBJECT *PrivateCacheMap; // rdi
  char *SharedCacheMap; // rbx
  PFILE_OBJECT **v11; // rdx
  PVOID *v12; // rcx
  __int64 v13; // rdx
  PCACHE_UNINITIALIZE_EVENT v14; // r11
  int v15; // eax
  unsigned __int64 OldIrql; // rbx
  __int64 v17; // rdx
  _DWORD *v18; // r8
  unsigned __int64 v19; // rbx
  unsigned __int64 v21; // rbx
  PFILE_OBJECT v22; // rax
  __int64 v23; // rdx
  _QWORD *p_Type; // rcx
  PVOID FsContext; // rcx
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
  int v37; // eax
  unsigned __int8 v38; // r9
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r10
  _DWORD *v41; // r8
  int v42; // eax
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  int v45; // eax
  struct _KLOCK_QUEUE_HANDLE v46; // [rsp+30h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v48; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int8 v49; // [rsp+C0h] [rbp+40h]

  v46.LockQueue.Lock = &CcMasterLock;
  v4 = 0;
  v5 = 0;
  v46.LockQueue.Next = 0LL;
  *(_QWORD *)&v46.OldIrql = 0LL;
  v6 = 0LL;
  Partition = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v48, 0, sizeof(v48));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v46.OldIrql = CurrentIrql;
  KxAcquireQueuedSpinLock((__int64)&v46, (volatile __int64 *)&CcMasterLock);
  PrivateCacheMap = (PFILE_OBJECT *)FileObject->PrivateCacheMap;
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    Partition = CcGetPartition((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(Partition + 968)) <= 1 )
      __fastfail(0xEu);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  }
  if ( !PrivateCacheMap )
  {
    v13 = 0LL;
    goto LABEL_14;
  }
  if ( PrivateCacheMap[1] != FileObject )
    KeBugCheckEx(0x34u, 0x944uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !Partition )
    KeBugCheckEx(0x34u, 0x94AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( PrivateCacheMap[14] )
  {
    v48.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 192);
    v48.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock((__int64)&v48, (volatile __int64 *)(Partition + 192));
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
        KeBugCheckEx(0x34u, 0x96BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      --*((_DWORD *)SharedCacheMap + 1);
      --*((_DWORD *)SharedCacheMap + 134);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v48);
  }
  --*((_DWORD *)SharedCacheMap + 1);
  v11 = (PFILE_OBJECT **)PrivateCacheMap[12];
  v12 = (PVOID *)PrivateCacheMap[13];
  if ( v11[1] != PrivateCacheMap + 12 || *v12 != PrivateCacheMap + 12 )
    goto LABEL_70;
  *v12 = v11;
  v11[1] = (PFILE_OBJECT *)v12;
  v13 = 0LL;
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
      if ( UninitializeEvent )
      {
        if ( *((char **)SharedCacheMap + 28) == SharedCacheMap + 224 )
        {
          UninitializeEvent->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 34);
          *((_QWORD *)SharedCacheMap + 34) = UninitializeEvent;
          v5 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
        }
        else
        {
          KeSetEvent(&UninitializeEvent->Event, 0, 0);
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
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v46);
      v19 = v46.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v35 = KeGetCurrentIrql();
          if ( v35 <= 0xFu && v46.OldIrql <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v18 = v36->SchedulerAssist;
            v37 = ~(unsigned __int16)(-1LL << (v46.OldIrql + 1));
            v31 = (v37 & v18[5]) == 0;
            v17 = (unsigned int)v37 & v18[5];
            v18[5] = v17;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
      }
      __writecr8(v19);
      goto LABEL_30;
    }
    if ( *((char **)SharedCacheMap + 28) != SharedCacheMap + 224 )
      KeBugCheckEx(0x34u, 0x9E7uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v14 = UninitializeEvent;
    if ( UninitializeEvent )
    {
      UninitializeEvent->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 34);
      *((_QWORD *)SharedCacheMap + 34) = UninitializeEvent;
      v5 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
    }
    v15 = *((_DWORD *)SharedCacheMap + 38);
    if ( (v15 & 4) != 0 || UninitializeEvent )
    {
      if ( (v15 & 0x20) != 0 )
        goto LABEL_24;
      if ( !*((_DWORD *)SharedCacheMap + 28)
        && ((v15 & 0x400) == 0 || *((_QWORD *)SharedCacheMap + 5) == 0x7FFFFFFFFFFFFFFFLL) )
      {
        CcDeleteSharedCacheMap(SharedCacheMap, &v46, &LockHandle, 0LL);
        v5 = 0;
        v4 = 1;
        goto LABEL_30;
      }
    }
    if ( (v15 & 0x20) == 0 )
      CcInsertIntoDirtySharedCacheMapList(SharedCacheMap);
LABEL_24:
    *(_BYTE *)(Partition + 633) = 1;
    if ( *(_BYTE *)(Partition + 966) )
    {
      *((_DWORD *)SharedCacheMap + 38) |= 0x10000u;
      LOBYTE(v13) = 1;
    }
    else
    {
      LOBYTE(v13) = v14 && (*((_DWORD *)SharedCacheMap + 38) & 0x20) == 0;
    }
    CcScheduleLazyWriteScan(Partition, v13, (unsigned __int8)v13);
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
      KeBugCheckEx(0x34u, 0xA89uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v46);
    v38 = v46.OldIrql;
    v49 = v46.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v39 = KeGetCurrentIrql();
        if ( v39 <= 0xFu && v46.OldIrql <= 0xFu && v39 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v42 = ~(unsigned __int16)(-1LL << (v46.OldIrql + 1));
          v31 = (v42 & v41[5]) == 0;
          v41[5] &= v42;
          if ( v31 )
          {
            KiRemoveSystemWorkPriorityKick(v40);
            v38 = v49;
          }
        }
      }
    }
    __writecr8(v38);
    CcPurgeCacheSection(FileObject->SectionObjectPointer, TruncateSize, 0, 0);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v46);
    v21 = v46.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v43 = KeGetCurrentIrql();
        if ( v43 <= 0xFu && v46.OldIrql <= 0xFu && v43 >= 2u )
        {
          v44 = KeGetCurrentPrcb();
          v18 = v44->SchedulerAssist;
          v45 = ~(unsigned __int16)(-1LL << (v46.OldIrql + 1));
          v31 = (v45 & v18[5]) == 0;
          v17 = (unsigned int)v45 & v18[5];
          v18[5] = v17;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(v44);
        }
      }
    }
    __writecr8(v21);
  }
  if ( UninitializeEvent )
    KeSetEvent(&UninitializeEvent->Event, 0, 0);
LABEL_30:
  if ( PrivateCacheMap )
    ExFreePoolWithTag(PrivateCacheMap, 0);
  if ( v5 )
  {
    LOBYTE(v17) = 1;
    CcAdjustWriteBehindThreadPoolIfNeeded(Partition, v17, v18);
  }
  if ( v6 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)FileObject);
    FsContext = v6->FsContext;
    if ( FsContext )
      IoDiskIoAttributionDereference(FsContext);
    CcFreeWorkQueueEntry((PSLIST_ENTRY)v6);
  }
  if ( Partition )
    CcDereferencePartition(Partition);
  return v4;
}
