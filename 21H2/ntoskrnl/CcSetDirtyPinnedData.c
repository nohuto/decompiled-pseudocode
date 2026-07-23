/*
 * XREFs of CcSetDirtyPinnedData @ 0x140304060
 * Callers:
 *     CcZeroDataInCache @ 0x140299A48 (CcZeroDataInCache.c)
 *     CcReleaseByteRangeFromWrite @ 0x1402FEE3C (CcReleaseByteRangeFromWrite.c)
 *     CcUnpinRepinnedBcb @ 0x1404EA9A0 (CcUnpinRepinnedBcb.c)
 *     CcPreparePinWrite @ 0x1405F3640 (CcPreparePinWrite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402D5E10 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExpReleaseFastMutexContended @ 0x1402FC46C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1402FD910 (ExpAcquireFastMutexContended.c)
 *     CcScheduleLazyWriteScan @ 0x140301AAC (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140301B38 (CcInsertIntoDirtySharedCacheMapList.c)
 *     CcChargeDirtyPages @ 0x140340F60 (CcChargeDirtyPages.c)
 *     CcSetDirtyInMask @ 0x1403411C0 (CcSetDirtyInMask.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __stdcall CcSetDirtyPinnedData(PVOID BcbVoid, PLARGE_INTEGER Lsn)
{
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  __int16 v5; // ax
  __int64 *v7; // r12
  _QWORD *v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r14
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  ULONG_PTR *v16; // rsi
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // r14
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *v23; // rdi
  unsigned __int8 AbEntrySummary; // al
  __int64 v25; // rcx
  __int64 v26; // rsi
  int SessionId; // eax
  bool v28; // zf
  unsigned __int8 v29; // bl
  int v30; // eax
  __int64 v31; // rbx
  LONGLONG v32; // rcx
  LONGLONG QuadPart; // rax
  LONGLONG v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rbx
  signed __int32 v37; // eax
  unsigned int v38; // esi
  unsigned __int64 OldIrql; // r15
  unsigned int v40; // esi
  unsigned __int64 DeepFreezeStartTime; // rdx
  _DWORD *v42; // rcx
  __int64 AbOrphanedEntrySummary; // rax
  int v44; // eax
  int v45; // eax
  unsigned __int32 v46; // eax
  int v47; // eax
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r10
  _DWORD *v50; // r9
  int v51; // eax
  unsigned __int8 v52; // al
  struct _KPRCB *v53; // r10
  _DWORD *v54; // r9
  int v55; // eax
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r10
  _DWORD *v58; // r9
  int v59; // eax
  __int64 v60; // [rsp+30h] [rbp-68h]
  _QWORD v61[2]; // [rsp+38h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v64; // [rsp+A0h] [rbp+8h] BYREF
  int v65; // [rsp+B0h] [rbp+18h]
  int v66; // [rsp+B8h] [rbp+20h]

  v5 = *(_WORD *)BcbVoid;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v5 != 765 && v5 != 762 )
    KeBugCheckEx(0x34u, 0xE7AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v7 = v61;
  v8 = BcbVoid;
  v61[0] = BcbVoid;
  v61[1] = 0LL;
  if ( v5 == 762 )
  {
    v8 = (_QWORD *)*((_QWORD *)BcbVoid + 2);
    v7 = (__int64 *)((char *)BcbVoid + 16);
  }
  v9 = v8[22];
  v10 = *(_QWORD *)(v9 + 528);
  v60 = v10;
  if ( *(_QWORD *)(v9 + 168) )
  {
    v11 = *(_QWORD *)((*(_QWORD *)(v9 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v2 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = v2;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C9C0, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v64 = 0;
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v44 = v14[6];
          v14[6] = v44 + 1;
          if ( v44 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_140C4C9C0, 0x1Fu) )
      {
        v42 = CurrentPrcb->SchedulerAssist;
        if ( v42 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v45 = v42[6] - 1;
            v42[6] = v45;
            if ( !v45 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v64 = ExpWaitForSpinLockExclusiveAndAcquire(
                (unsigned __int64)&dword_140C4C9C0,
                CurrentIrql,
                v2,
                SchedulerAssist);
      }
      v15 = (unsigned int)dword_140C4C9C0;
      if ( (dword_140C4C9C0 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v15 & 0x40000000) == 0 )
          {
            v46 = _InterlockedCompareExchange(&dword_140C4C9C0, v15 | 0x40000000, v15);
            v28 = (_DWORD)v15 == v46;
            v15 = v46;
            if ( !v28 )
              continue;
          }
          KeYieldProcessorEx(&v64, v15, v2, (__int64)SchedulerAssist);
          v15 = (unsigned int)dword_140C4C9C0;
        }
        while ( (v15 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    if ( *(_QWORD *)v11 )
      v16 = *(ULONG_PTR **)(qword_140C4E688 + 8LL * (*(_WORD *)(*(_QWORD *)v11 + 60LL) & 0x3FF));
    else
      v16 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C4C9C0, retaddr);
    else
      dword_140C4C9C0 = 0;
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v47 = v18[6] - 1;
        v18[6] = v47;
        if ( !v47 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v48 = KeGetCurrentIrql();
        if ( v48 <= 0xFu && CurrentIrql <= 0xFu && v48 >= 2u )
        {
          v49 = KeGetCurrentPrcb();
          v50 = v49->SchedulerAssist;
          v51 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v28 = (v51 & v50[5]) == 0;
          v50[5] &= v51;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(v49);
        }
      }
    }
    __writecr8(CurrentIrql);
    v10 = v60;
    if ( v60 != *(_QWORD *)(v16[22] + 8) )
      KeBugCheckEx(0x34u, 0x1314uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  v19 = *(_DWORD *)(v9 + 152);
  if ( (v19 & 0x1000000) != 0 && *(_QWORD *)(*(_QWORD *)(v9 + 240) + 136LL) == -1LL )
  {
    *(_QWORD *)(*(_QWORD *)(v9 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
    v19 = *(_DWORD *)(v9 + 152);
  }
  if ( (v19 & 0x200) != 0 )
  {
    v20 = *v7;
    if ( *v7 )
    {
      while ( 1 )
      {
        v61[0] = v20;
        ++v7;
        if ( (v20 & 1) != 0 )
          KeBugCheckEx(0x34u, 0xEDAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v21 = *(_QWORD *)(v20 + 176);
        v66 = 0;
        CurrentThread = KeGetCurrentThread();
        v23 = (volatile signed __int32 *)(v21 + 280);
        --CurrentThread->SpecialApcDisable;
        if ( ++CurrentThread->AbAllocationRegionCount != 1 )
          KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v21 + 280, KeGetCurrentIrql(), 0LL);
        AbEntrySummary = CurrentThread->AbEntrySummary;
        v65 = 0;
        if ( !AbEntrySummary )
        {
          if ( !CurrentThread->AbOrphanedEntrySummary )
          {
            v26 = 0LL;
            if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
              EtwTraceAutoBoostEntryExhaustion(CurrentThread, v21 + 280);
LABEL_72:
            _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
            goto LABEL_30;
          }
          AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
          CurrentThread->AbOrphanedEntrySummary = 0;
          AbEntrySummary = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
        }
        _BitScanForward((unsigned int *)&v25, AbEntrySummary);
        v65 = v25;
        CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v25);
        v26 = (__int64)&CurrentThread->LockEntries[v25];
        if ( !v26 )
          goto LABEL_72;
        if ( (unsigned __int64)v23 >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState[1537] + (((unsigned __int64)v23 >> 39) & 0x1FF)) == 1 )
        {
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        }
        else
        {
          SessionId = -1;
        }
        *(_DWORD *)(v26 + 40) = SessionId;
        *(_QWORD *)(v26 + 32) = (unsigned __int64)v23 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_30:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v28 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v28
          && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        v29 = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset(v23, 0) )
          ExpAcquireFastMutexContended(v21 + 280, (PRTL_BALANCED_NODE)v26);
        if ( v26 )
          *(_BYTE *)(v26 + 26) |= 1u;
        *(_QWORD *)(v21 + 288) = KeGetCurrentThread();
        v30 = v29;
        v31 = v61[0];
        *(_DWORD *)(v21 + 328) = v30;
        if ( !*(_BYTE *)(v31 + 2) )
        {
          v38 = *(_DWORD *)(v31 + 4) >> 12;
          *(_BYTE *)(v31 + 2) = 1;
          if ( Lsn )
          {
            *(LARGE_INTEGER *)(v31 + 40) = *Lsn;
            *(LARGE_INTEGER *)(v31 + 48) = *Lsn;
          }
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 128), &LockHandle);
          if ( !*(_DWORD *)(v21 + 112) && (*(_DWORD *)(v21 + 152) & 2) == 0 )
          {
            CcScheduleLazyWriteScan(v10, 0, 0);
            CcInsertIntoDirtySharedCacheMapList(v21);
          }
          CcChargeDirtyPages(v21, 0LL, 0LL, v38);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v52 = KeGetCurrentIrql();
              if ( v52 <= 0xFu && LockHandle.OldIrql <= 0xFu && v52 >= 2u )
              {
                v53 = KeGetCurrentPrcb();
                v54 = v53->SchedulerAssist;
                v55 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v28 = (v55 & v54[5]) == 0;
                v54[5] &= v55;
                if ( v28 )
                  KiRemoveSystemWorkPriorityKick(v53);
                v31 = v61[0];
              }
            }
          }
          __writecr8(OldIrql);
          if ( (*(_DWORD *)(v21 + 152) & 0x10000000) != 0 )
          {
            v40 = v38 << 12;
            DeepFreezeStartTime = KeGetCurrentThread()->Process[2].DeepFreezeStartTime;
            if ( DeepFreezeStartTime )
            {
              if ( v40 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 8), v40);
              _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 24), 1uLL);
              v31 = v61[0];
            }
            else
            {
              v31 = v61[0];
            }
          }
        }
        if ( Lsn )
        {
          v32 = *(_QWORD *)(v31 + 40);
          QuadPart = Lsn->QuadPart;
          if ( !v32 || QuadPart < v32 )
          {
            *(_QWORD *)(v31 + 40) = QuadPart;
            QuadPart = Lsn->QuadPart;
          }
          v34 = *(_QWORD *)(v31 + 48);
          if ( !v34 || QuadPart > v34 )
          {
            *(_QWORD *)(v31 + 48) = QuadPart;
            QuadPart = Lsn->QuadPart;
          }
          if ( QuadPart > *(_QWORD *)(v21 + 256) )
            *(_QWORD *)(v21 + 256) = QuadPart;
        }
        v35 = *(_QWORD *)(v31 + 32);
        if ( v35 > *(_QWORD *)(v21 + 48) )
          *(_QWORD *)(v21 + 48) = v35;
        v36 = *(unsigned __int8 *)(v21 + 328);
        *(_QWORD *)(v21 + 288) = 0LL;
        v37 = _InterlockedCompareExchange(v23, 1, 0);
        if ( v37 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)(v21 + 280), v37);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v56 = KeGetCurrentIrql();
            if ( v56 <= 0xFu && (unsigned __int8)v36 <= 0xFu && v56 >= 2u )
            {
              v57 = KeGetCurrentPrcb();
              v58 = v57->SchedulerAssist;
              v59 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
              v28 = (v59 & v58[5]) == 0;
              v58[5] &= v59;
              if ( v28 )
                KiRemoveSystemWorkPriorityKick(v57);
            }
          }
        }
        __writecr8(v36);
        KeAbPostRelease(v21 + 280);
        v20 = *v7;
        if ( !*v7 )
          return;
        v10 = v60;
      }
    }
  }
  else
  {
    CcSetDirtyInMask(v9, (char *)BcbVoid + 8, *((unsigned int *)BcbVoid + 1), 0LL);
  }
}
