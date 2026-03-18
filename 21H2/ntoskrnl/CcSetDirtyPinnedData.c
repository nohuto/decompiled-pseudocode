/*
 * XREFs of CcSetDirtyPinnedData @ 0x14029D3D0
 * Callers:
 *     CcReleaseByteRangeFromWrite @ 0x14028A258 (CcReleaseByteRangeFromWrite.c)
 *     CcZeroDataInCache @ 0x14029C34C (CcZeroDataInCache.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 *     CcPreparePinWrite @ 0x140705F90 (CcPreparePinWrite.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140276758 (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x1402767FC (CcInsertIntoDirtySharedCacheMapList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     CcChargeDirtyPages @ 0x14029D818 (CcChargeDirtyPages.c)
 *     CcSetDirtyInMask @ 0x14029D860 (CcSetDirtyInMask.c)
 *     ExpAcquireFastMutexContended @ 0x14029EF4C (ExpAcquireFastMutexContended.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14029F6A8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpReleaseFastMutexContended @ 0x140359548 (ExpReleaseFastMutexContended.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall CcSetDirtyPinnedData(PVOID BcbVoid, PLARGE_INTEGER Lsn)
{
  __int16 v3; // ax
  __int64 *v5; // r14
  _QWORD *v6; // r10
  __int64 v7; // r10
  __int64 v8; // r13
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rdi
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int32 *v14; // rbx
  unsigned int AbEntrySummary; // eax
  __int64 v16; // rdx
  int SessionId; // eax
  unsigned __int8 CurrentIrql; // r15
  __int64 v19; // rdi
  LONGLONG v20; // rcx
  LONGLONG QuadPart; // rax
  LONGLONG v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  unsigned __int32 v25; // eax
  unsigned int v26; // r15d
  unsigned __int64 OldIrql; // r13
  unsigned int v28; // r15d
  unsigned __int64 DeepFreezeStartTime; // rcx
  unsigned __int8 v30; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  bool v34; // zf
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  _QWORD v39[2]; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  __int64 v41; // [rsp+B0h] [rbp+18h]
  __int64 v42; // [rsp+B8h] [rbp+20h]

  v3 = *(_WORD *)BcbVoid;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v3 != 765 && v3 != 762 )
    KeBugCheckEx(0x34u, 0xF0EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v39[0] = BcbVoid;
  v5 = v39;
  v39[1] = 0LL;
  v6 = BcbVoid;
  if ( v3 == 762 )
  {
    v6 = (_QWORD *)*((_QWORD *)BcbVoid + 2);
    v5 = (__int64 *)((char *)BcbVoid + 16);
  }
  v7 = v6[22];
  v42 = *(_QWORD *)(v7 + 528);
  if ( CcEnablePerVolumeLazyWriter == 1 )
    v8 = *(_QWORD *)(v7 + 592);
  else
    v8 = 0LL;
  v9 = *(_DWORD *)(v7 + 152);
  v41 = v8;
  if ( (v9 & 0x1000000) != 0 && *(_QWORD *)(*(_QWORD *)(v7 + 240) + 136LL) == -1LL )
  {
    *(_QWORD *)(*(_QWORD *)(v7 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
    v9 = *(_DWORD *)(v7 + 152);
  }
  if ( (v9 & 0x200) != 0 )
  {
    v10 = *v5;
    while ( *v5 )
    {
      v39[0] = v10;
      ++v5;
      if ( (v10 & 1) != 0 )
        KeBugCheckEx(0x34u, 0xF6FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v11 = *(_QWORD *)(v10 + 176);
      v12 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v14 = (volatile signed __int32 *)(v11 + 280);
      _disable();
      AbEntrySummary = CurrentThread->AbEntrySummary;
      if ( CurrentThread->AbEntrySummary
        || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v11 + 280, CurrentThread)) != 0 )
      {
        _BitScanForward((unsigned int *)&v16, AbEntrySummary);
        CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v16);
        _enable();
        v12 = (__int64)(&CurrentThread[1].Process + 12 * v16);
        if ( (unsigned __int64)v14 - qword_140C50630 < 0x8000000000LL )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v12 + 8) = SessionId;
        *(_QWORD *)v12 = (unsigned __int64)v14 & 0x7FFFFFFFFFFFFFFCLL;
      }
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !_interlockedbittestandreset(v14, 0) )
        ExpAcquireFastMutexContended(v11 + 280, v12);
      if ( v12 )
        *(_BYTE *)(v12 + 18) = 1;
      v19 = v39[0];
      *(_QWORD *)(v11 + 288) = KeGetCurrentThread();
      *(_DWORD *)(v11 + 328) = CurrentIrql;
      if ( *(_BYTE *)(v19 + 2) )
        goto LABEL_21;
      v26 = *(_DWORD *)(v19 + 4) >> 12;
      *(_BYTE *)(v19 + 2) = 1;
      if ( Lsn )
      {
        *(LARGE_INTEGER *)(v19 + 40) = *Lsn;
        *(LARGE_INTEGER *)(v19 + 48) = *Lsn;
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v42 + 704), &LockHandle);
      if ( !*(_DWORD *)(v11 + 112) && (*(_DWORD *)(v11 + 152) & 2) == 0 )
      {
        CcScheduleLazyWriteScan((_BYTE *)v42, v8, 0LL, 0);
        CcInsertIntoDirtySharedCacheMapList(v11);
      }
      CcChargeDirtyPages(v11, 0LL, 0LL, v26);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v30 = KeGetCurrentIrql();
          if ( v30 <= 0xFu && LockHandle.OldIrql <= 0xFu && v30 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v33 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v34 = (v33 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v33;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v19 = v39[0];
          }
        }
      }
      __writecr8(OldIrql);
      if ( (*(_DWORD *)(v11 + 152) & 0x10000000) != 0 )
      {
        v28 = v26 << 12;
        DeepFreezeStartTime = KeGetCurrentThread()->Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          if ( v28 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 8), v28);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 24), 1uLL);
          v19 = v39[0];
          v8 = v41;
          goto LABEL_21;
        }
        v19 = v39[0];
      }
      v8 = v41;
LABEL_21:
      if ( Lsn )
      {
        v20 = *(_QWORD *)(v19 + 40);
        QuadPart = Lsn->QuadPart;
        if ( !v20 || QuadPart < v20 )
        {
          *(_QWORD *)(v19 + 40) = QuadPart;
          QuadPart = Lsn->QuadPart;
        }
        v22 = *(_QWORD *)(v19 + 48);
        if ( !v22 || QuadPart > v22 )
        {
          *(_QWORD *)(v19 + 48) = QuadPart;
          QuadPart = Lsn->QuadPart;
        }
        if ( QuadPart > *(_QWORD *)(v11 + 256) )
          *(_QWORD *)(v11 + 256) = QuadPart;
      }
      v23 = *(_QWORD *)(v19 + 32);
      if ( v23 > *(_QWORD *)(v11 + 48) )
        *(_QWORD *)(v11 + 48) = v23;
      v24 = *(unsigned __int8 *)(v11 + 328);
      *(_QWORD *)(v11 + 288) = 0LL;
      v25 = _InterlockedCompareExchange(v14, 1, 0);
      if ( v25 )
        ExpReleaseFastMutexContended(v11 + 280, v25);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v35 = KeGetCurrentIrql();
          if ( v35 <= 0xFu && (unsigned __int8)v24 <= 0xFu && v35 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v37 = v36->SchedulerAssist;
            v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
            v34 = (v38 & v37[5]) == 0;
            v37[5] &= v38;
            if ( v34 )
              KiRemoveSystemWorkPriorityKick(v36);
          }
        }
      }
      __writecr8(v24);
      KeAbPostRelease(v11 + 280);
      v10 = *v5;
    }
  }
  else
  {
    CcSetDirtyInMask(v7, (char *)BcbVoid + 8, *((unsigned int *)BcbVoid + 1), 0LL);
  }
}
