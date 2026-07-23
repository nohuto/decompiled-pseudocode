/*
 * XREFs of CcDeleteSharedCacheMap @ 0x1402FEB2C
 * Callers:
 *     CcWriteBehindInternal @ 0x1402D22C0 (CcWriteBehindInternal.c)
 *     CcInitializeCacheMapEx @ 0x1402D2E10 (CcInitializeCacheMapEx.c)
 *     CcUninitializeCacheMap @ 0x140301600 (CcUninitializeCacheMap.c)
 *     CcDeleteSectionsForPartition @ 0x1404EC0C4 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     CcDeleteBcbs @ 0x140250A10 (CcDeleteBcbs.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDeleteMbcb @ 0x1402FD68C (CcDeleteMbcb.c)
 *     CcUnmapAndPurge @ 0x1402FEDC0 (CcUnmapAndPurge.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1403004D4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcDereferencePartition @ 0x140301A7C (CcDereferencePartition.c)
 *     ObFastReplaceObject @ 0x140301BD0 (ObFastReplaceObject.c)
 *     CcUninitializeVolumeCacheMap @ 0x140301C80 (CcUninitializeVolumeCacheMap.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     FsRtlReleaseFile @ 0x14071EE50 (FsRtlReleaseFile.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeleteSharedCacheMap(
        char *P,
        PKLOCK_QUEUE_HANDLE LockHandle,
        PKLOCK_QUEUE_HANDLE a3,
        int a4,
        PFILE_OBJECT FileObject)
{
  __int64 Partition; // r14
  char **v10; // rdx
  PVOID *v11; // rax
  char **v12; // rdx
  PVOID *v13; // rcx
  __int64 v14; // rdx
  int v15; // r8d
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v17; // rbx
  char v18; // dl
  char v19; // r8
  struct _DMA_ADAPTER *v20; // rcx
  struct _DMA_ADAPTER *v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  char *v24; // rcx
  char *v25; // rcx
  char *v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  int v40; // eax
  _DWORD *v41; // r8

  Partition = CcGetPartition(P, (_BYTE)LockHandle, (_BYTE)a3);
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
    KeBugCheckEx(0x34u, 0xE53uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
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
        v32 = ~(unsigned __int16)v14;
        v33 = (v32 & SchedulerAssist[5]) == 0;
        v15 = v32 & SchedulerAssist[5];
        SchedulerAssist[5] = v15;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( LockHandle )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
    v17 = LockHandle->OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v34 = KeGetCurrentIrql();
        if ( v34 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v34 >= 2u )
        {
          v35 = KeGetCurrentPrcb();
          v14 = -1LL << ((unsigned __int8)v17 + 1);
          v36 = v35->SchedulerAssist;
          v37 = ~(unsigned __int16)v14;
          v33 = (v37 & v36[5]) == 0;
          v15 = v37 & v36[5];
          v36[5] = v15;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(v35);
        }
      }
    }
    __writecr8(v17);
  }
  if ( *((char **)P + 2) != P + 16 )
    CcDeleteBcbs((__int64)P, v14, v15);
  LOBYTE(v14) = *((_QWORD *)P + 1) >= 0x100000LL;
  CcUnmapAndPurge(P, v14);
  if ( a4 )
  {
    FsRtlReleaseFile(FileObject);
    CcDereferenceSharedCacheMapFileObject(P, FileObject);
  }
  v20 = (struct _DMA_ADAPTER *)*((_QWORD *)P + 21);
  if ( v20 )
  {
    HalPutDmaAdapter(v20);
    *((_QWORD *)P + 21) = 0LL;
  }
  if ( *((_QWORD *)P + 20) )
    CcDeleteMbcb((__int64)P, v18, v19);
  CcUninitializeVolumeCacheMap(*((PVOID *)P + 63));
  v21 = (struct _DMA_ADAPTER *)ObFastReplaceObject(P + 96, 0LL);
  HalPutDmaAdapter(v21);
  v22 = *((_QWORD *)P + 34);
  if ( v22 )
  {
    do
    {
      v27 = v22 & 0xFFFFFFFFFFFFFFFEuLL;
      v28 = *(_QWORD *)v27;
      KeSetEvent((PRKEVENT)(v27 + 8), 0, 0);
      v22 = v28;
    }
    while ( v28 );
  }
  if ( LockHandle )
  {
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, LockHandle);
    ++CcSectionDeletionSequencePhase2;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
    v23 = LockHandle->OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v38 = KeGetCurrentIrql();
        if ( v38 <= 0xFu && (unsigned __int8)v23 <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v23 + 1));
          v41 = v39->SchedulerAssist;
          v33 = (v40 & v41[5]) == 0;
          v41[5] &= v40;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
    }
    __writecr8(v23);
  }
  v24 = (char *)*((_QWORD *)P + 11);
  if ( v24 != P + 56 && v24 )
    ExFreePoolWithTag(v24, 0);
  v25 = (char *)*((_QWORD *)P + 22);
  if ( v25 && v25 != P + 344 )
    ExFreePoolWithTag(v25, 0);
  v26 = (char *)*((_QWORD *)P + 23);
  if ( v26 && v26 != P + 344 )
    ExFreePoolWithTag(v26, 0);
  CcDereferencePartition(Partition);
  ExFreePoolWithTag(P, 0);
}
