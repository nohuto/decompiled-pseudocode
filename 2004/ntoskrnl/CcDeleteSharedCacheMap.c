/*
 * XREFs of CcDeleteSharedCacheMap @ 0x1402C655C
 * Callers:
 *     CcWriteBehindInternal @ 0x1402BFC70 (CcWriteBehindInternal.c)
 *     CcInitializeCacheMapEx @ 0x1402C05C0 (CcInitializeCacheMapEx.c)
 *     CcUninitializeCacheMap @ 0x1402C4180 (CcUninitializeCacheMap.c)
 *     CcDeleteSectionsForPartition @ 0x1404E6D64 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x1402C15A0 (CcGetPartition.c)
 *     CcDereferencePartition @ 0x1402C45FC (CcDereferencePartition.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1402C5438 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcUnmapAndPurge @ 0x1402C67F0 (CcUnmapAndPurge.c)
 *     ObFastReplaceObject @ 0x1402C686C (ObFastReplaceObject.c)
 *     CcUninitializeVolumeCacheMap @ 0x1402C691C (CcUninitializeVolumeCacheMap.c)
 *     CcDeleteMbcb @ 0x1402C8B10 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x14035F7D0 (CcDeleteBcbs.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     FsRtlReleaseFile @ 0x1405FBD40 (FsRtlReleaseFile.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeleteSharedCacheMap(
        char *P,
        PKLOCK_QUEUE_HANDLE LockHandle,
        PKLOCK_QUEUE_HANDLE a3,
        _DWORD *a4,
        PFILE_OBJECT FileObject)
{
  int v5; // r12d
  __int64 Partition; // r14
  char **v10; // rdx
  PVOID *v11; // rax
  char **v12; // rdx
  PVOID *v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v16; // rbx
  struct _DMA_ADAPTER *v17; // rcx
  struct _DMA_ADAPTER *v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rbx
  char *v21; // rcx
  char *v22; // rcx
  char *v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v29; // eax
  bool v30; // zf
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  int v37; // eax
  _DWORD *v38; // r8

  v5 = (int)a4;
  Partition = CcGetPartition(P, (__int64)LockHandle, (__int64)a3, a4);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(Partition + 968)) <= 1 )
    __fastfail(0xEu);
  v10 = (char **)*((_QWORD *)P + 17);
  v11 = (PVOID *)*((_QWORD *)P + 18);
  if ( v10[1] != P + 136 || *v11 != P + 136 )
    goto LABEL_59;
  *v11 = v10;
  v10[1] = (char *)v11;
  if ( (*((_DWORD *)P + 38) & 0x3000000) == 0 )
    goto LABEL_8;
  v12 = (char **)*((_QWORD *)P + 15);
  v13 = (PVOID *)*((_QWORD *)P + 16);
  if ( v12[1] != P + 120 || *v13 != P + 120 )
LABEL_59:
    __fastfail(3u);
  *v13 = v12;
  v12[1] = (char *)v13;
LABEL_8:
  *(_QWORD *)(*(_QWORD *)((*((_QWORD *)P + 12) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) = 0LL;
  *((_DWORD *)P + 38) |= 0x80020u;
  if ( LockHandle )
  {
    ++CcSectionDeletionSequencePhase1;
  }
  else if ( !*(_BYTE *)(Partition + 966) )
  {
    KeBugCheckEx(0x34u, 0xE5AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a3);
  OldIrql = a3->OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = -1LL << ((unsigned __int8)OldIrql + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v29 = ~(unsigned __int16)v14;
        v30 = (v29 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v29;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( LockHandle )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
    v16 = LockHandle->OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v31 >= 2u )
        {
          v32 = KeGetCurrentPrcb();
          v14 = -1LL << ((unsigned __int8)v16 + 1);
          v33 = v32->SchedulerAssist;
          v34 = ~(unsigned __int16)v14;
          v30 = (v34 & v33[5]) == 0;
          v33[5] &= v34;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
    }
    __writecr8(v16);
  }
  if ( *((char **)P + 2) != P + 16 )
    CcDeleteBcbs(P);
  LOBYTE(v14) = *((_QWORD *)P + 1) >= 0x100000LL;
  CcUnmapAndPurge(P, v14);
  if ( v5 )
  {
    FsRtlReleaseFile(FileObject);
    CcDereferenceSharedCacheMapFileObject((__int64)P, (unsigned __int64)FileObject);
  }
  v17 = (struct _DMA_ADAPTER *)*((_QWORD *)P + 21);
  if ( v17 )
  {
    HalPutDmaAdapter(v17);
    *((_QWORD *)P + 21) = 0LL;
  }
  if ( *((_QWORD *)P + 20) )
    CcDeleteMbcb(P);
  CcUninitializeVolumeCacheMap(*((PVOID *)P + 63));
  v18 = (struct _DMA_ADAPTER *)ObFastReplaceObject(P + 96, 0LL);
  HalPutDmaAdapter(v18);
  v19 = *((_QWORD *)P + 34);
  if ( v19 )
  {
    do
    {
      v24 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
      v25 = *(_QWORD *)v24;
      KeSetEvent((PRKEVENT)(v24 + 8), 0, 0);
      v19 = v25;
    }
    while ( v25 );
  }
  if ( LockHandle )
  {
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, LockHandle);
    ++CcSectionDeletionSequencePhase2;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
    v20 = LockHandle->OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v35 = KeGetCurrentIrql();
        if ( v35 <= 0xFu && (unsigned __int8)v20 <= 0xFu && v35 >= 2u )
        {
          v36 = KeGetCurrentPrcb();
          v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
          v38 = v36->SchedulerAssist;
          v30 = (v37 & v38[5]) == 0;
          v38[5] &= v37;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick(v36);
        }
      }
    }
    __writecr8(v20);
  }
  v21 = (char *)*((_QWORD *)P + 11);
  if ( v21 != P + 56 && v21 )
    ExFreePoolWithTag(v21, 0);
  v22 = (char *)*((_QWORD *)P + 22);
  if ( v22 && v22 != P + 344 )
    ExFreePoolWithTag(v22, 0);
  v23 = (char *)*((_QWORD *)P + 23);
  if ( v23 && v23 != P + 344 )
    ExFreePoolWithTag(v23, 0);
  CcDereferencePartition(Partition);
  ExFreePoolWithTag(P, 0);
}
