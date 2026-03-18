/*
 * XREFs of CcUninitializeCacheMap @ 0x1402C4180
 * Callers:
 *     CcPurgeCacheSection @ 0x14031F970 (CcPurgeCacheSection.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140222AF0 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     IoDiskIoAttributionDereference @ 0x14027A2C4 (IoDiskIoAttributionDereference.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x1402C15A0 (CcGetPartition.c)
 *     CcFreeWorkQueueEntry @ 0x1402C458C (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x1402C45FC (CcDereferencePartition.c)
 *     CcScheduleLazyWriteScan @ 0x1402C46BC (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1402C4748 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcDeleteSharedCacheMap @ 0x1402C655C (CcDeleteSharedCacheMap.c)
 *     CcPurgeCacheSection @ 0x14031F970 (CcPurgeCacheSection.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9
  PFILE_OBJECT *PrivateCacheMap; // rdi
  char *SharedCacheMap; // rbx
  PFILE_OBJECT **v14; // rdx
  PVOID *v15; // rcx
  __int64 v16; // rdx
  PCACHE_UNINITIALIZE_EVENT v17; // r11
  int v18; // eax
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v20; // rbx
  unsigned __int64 v22; // rbx
  PFILE_OBJECT v23; // rax
  __int64 v24; // rdx
  _QWORD *p_Type; // rcx
  __int64 FsContext; // rcx
  _DWORD *SchedulerAssist; // r10
  unsigned __int8 v28; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v30; // r9
  int v31; // eax
  bool v32; // zf
  unsigned __int8 v33; // al
  _DWORD *v34; // r9
  int v35; // eax
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  unsigned __int8 v40; // r9
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r8
  int v44; // eax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  int v48; // eax
  struct _KLOCK_QUEUE_HANDLE v49; // [rsp+30h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v51; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int8 v52; // [rsp+C0h] [rbp+40h]

  v49.LockQueue.Lock = &CcMasterLock;
  v4 = 0;
  v5 = 0;
  v49.LockQueue.Next = 0LL;
  *(_QWORD *)&v49.OldIrql = 0LL;
  v6 = 0LL;
  Partition = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v51, 0, sizeof(v51));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v49.OldIrql = CurrentIrql;
  KxAcquireQueuedSpinLock((__int64)&v49, (volatile __int64 *)&CcMasterLock);
  PrivateCacheMap = (PFILE_OBJECT *)FileObject->PrivateCacheMap;
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    Partition = CcGetPartition((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap, v9, v10, v11);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(Partition + 968)) <= 1 )
      __fastfail(0xEu);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  }
  if ( !PrivateCacheMap )
  {
    v16 = 0LL;
    goto LABEL_14;
  }
  if ( PrivateCacheMap[1] != FileObject )
    KeBugCheckEx(0x34u, 0x944uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !Partition )
    KeBugCheckEx(0x34u, 0x94AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( PrivateCacheMap[14] )
  {
    v51.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 192);
    v51.LockQueue.Next = 0LL;
    KxAcquireQueuedSpinLock((__int64)&v51, (volatile __int64 *)(Partition + 192));
    v23 = PrivateCacheMap[14];
    if ( v23 )
    {
      v24 = *(_QWORD *)&v23->Type;
      v6 = PrivateCacheMap[14];
      ++CcDbgNumberOfNoopedReadAheads;
      p_Type = &v23->DeviceObject->Type;
      if ( *(PFILE_OBJECT *)(v24 + 8) != v23 || (PFILE_OBJECT)*p_Type != v23 )
LABEL_70:
        __fastfail(3u);
      *p_Type = v24;
      *(_QWORD *)(v24 + 8) = p_Type;
      v23->DeviceObject = 0LL;
      *(_QWORD *)&v23->Type = 0LL;
      if ( (PFILE_OBJECT)v23->Vpb != FileObject )
        KeBugCheckEx(0x34u, 0x96BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      --*((_DWORD *)SharedCacheMap + 1);
      --*((_DWORD *)SharedCacheMap + 134);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v51);
  }
  --*((_DWORD *)SharedCacheMap + 1);
  v14 = (PFILE_OBJECT **)PrivateCacheMap[12];
  v15 = (PVOID *)PrivateCacheMap[13];
  if ( v14[1] != PrivateCacheMap + 12 || *v15 != PrivateCacheMap + 12 )
    goto LABEL_70;
  *v15 = v14;
  v14[1] = (PFILE_OBJECT *)v15;
  v16 = 0LL;
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
      v28 = KeGetCurrentIrql();
      if ( v28 > 0xFu )
        goto LABEL_28;
      if ( LockHandle.OldIrql > 0xFu )
        goto LABEL_28;
      if ( v28 < 2u )
        goto LABEL_28;
      CurrentPrcb = KeGetCurrentPrcb();
      v30 = CurrentPrcb->SchedulerAssist;
      v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v32 = (v31 & v30[5]) == 0;
      v30[5] &= v31;
      if ( !v32 )
        goto LABEL_28;
LABEL_95:
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
LABEL_28:
      __writecr8(OldIrql);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v49);
      v20 = v49.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v36 = KeGetCurrentIrql();
          if ( v36 <= 0xFu && v49.OldIrql <= 0xFu && v36 >= 2u )
          {
            v37 = KeGetCurrentPrcb();
            v38 = v37->SchedulerAssist;
            v39 = ~(unsigned __int16)(-1LL << (v49.OldIrql + 1));
            v32 = (v39 & v38[5]) == 0;
            v38[5] &= v39;
            if ( v32 )
              KiRemoveSystemWorkPriorityKick(v37);
          }
        }
      }
      __writecr8(v20);
      goto LABEL_30;
    }
    if ( *((char **)SharedCacheMap + 28) != SharedCacheMap + 224 )
      KeBugCheckEx(0x34u, 0x9E7uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v17 = UninitializeEvent;
    if ( UninitializeEvent )
    {
      UninitializeEvent->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 34);
      *((_QWORD *)SharedCacheMap + 34) = UninitializeEvent;
      v5 = (FileObject->DeviceObject->Characteristics & 0x10) != 0;
    }
    v18 = *((_DWORD *)SharedCacheMap + 38);
    if ( (v18 & 4) != 0 || UninitializeEvent )
    {
      if ( (v18 & 0x20) != 0 )
        goto LABEL_24;
      if ( !*((_DWORD *)SharedCacheMap + 28)
        && ((v18 & 0x400) == 0 || *((_QWORD *)SharedCacheMap + 5) == 0x7FFFFFFFFFFFFFFFLL) )
      {
        CcDeleteSharedCacheMap(SharedCacheMap, &v49, &LockHandle, 0LL);
        v5 = 0;
        v4 = 1;
        goto LABEL_30;
      }
    }
    if ( (v18 & 0x20) == 0 )
      CcInsertIntoDirtySharedCacheMapList(SharedCacheMap);
LABEL_24:
    *(_BYTE *)(Partition + 633) = 1;
    if ( *(_BYTE *)(Partition + 966) )
    {
      *((_DWORD *)SharedCacheMap + 38) |= 0x10000u;
      LOBYTE(v16) = 1;
    }
    else
    {
      LOBYTE(v16) = v17 && (*((_DWORD *)SharedCacheMap + 38) & 0x20) == 0;
    }
    CcScheduleLazyWriteScan(Partition, v16, (unsigned __int8)v16);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( !KiIrqlFlags )
      goto LABEL_28;
    if ( (KiIrqlFlags & 1) == 0 )
      goto LABEL_28;
    v33 = KeGetCurrentIrql();
    if ( v33 > 0xFu )
      goto LABEL_28;
    if ( LockHandle.OldIrql > 0xFu )
      goto LABEL_28;
    if ( v33 < 2u )
      goto LABEL_28;
    CurrentPrcb = KeGetCurrentPrcb();
    v34 = CurrentPrcb->SchedulerAssist;
    v35 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
    v32 = (v35 & v34[5]) == 0;
    v34[5] &= v35;
    if ( !v32 )
      goto LABEL_28;
    goto LABEL_95;
  }
  if ( TruncateSize && !TruncateSize->QuadPart && FileObject->SectionObjectPointer->DataSectionObject )
  {
    if ( Partition )
      KeBugCheckEx(0x34u, 0xA89uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v49);
    v40 = v49.OldIrql;
    v52 = v49.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v41 = KeGetCurrentIrql();
        if ( v41 <= 0xFu && v49.OldIrql <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << (v49.OldIrql + 1));
          v32 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v32 )
          {
            KiRemoveSystemWorkPriorityKick(v42);
            v40 = v52;
          }
        }
      }
    }
    __writecr8(v40);
    CcPurgeCacheSection(FileObject->SectionObjectPointer, TruncateSize, 0, 0);
  }
  else
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v49);
    v22 = v49.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v45 = KeGetCurrentIrql();
        if ( v45 <= 0xFu && v49.OldIrql <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = v46->SchedulerAssist;
          v48 = ~(unsigned __int16)(-1LL << (v49.OldIrql + 1));
          v32 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v46);
        }
      }
    }
    __writecr8(v22);
  }
  if ( UninitializeEvent )
    KeSetEvent(&UninitializeEvent->Event, 0, 0);
LABEL_30:
  if ( PrivateCacheMap )
    ExFreePoolWithTag(PrivateCacheMap, 0);
  if ( v5 )
    CcAdjustWriteBehindThreadPoolIfNeeded(Partition, 1);
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
