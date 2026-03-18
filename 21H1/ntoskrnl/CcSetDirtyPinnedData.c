/*
 * XREFs of CcSetDirtyPinnedData @ 0x14022FAB0
 * Callers:
 *     CcReleaseByteRangeFromWrite @ 0x140230088 (CcReleaseByteRangeFromWrite.c)
 *     CcZeroDataInCache @ 0x1402C0B3C (CcZeroDataInCache.c)
 *     CcUnpinRepinnedBcb @ 0x1404E5090 (CcUnpinRepinnedBcb.c)
 *     CcPreparePinWrite @ 0x1406C41D0 (CcPreparePinWrite.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcScheduleLazyWriteScan @ 0x14023188C (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140231918 (CcInsertIntoDirtySharedCacheMapList.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14023C7F0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     CcSetDirtyInMask @ 0x14027B2A0 (CcSetDirtyInMask.c)
 *     CcChargeDirtyPages @ 0x14027BA20 (CcChargeDirtyPages.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x140359D60 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x14035A82C (ExpReleaseFastMutexContended.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B00F4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

void __stdcall CcSetDirtyPinnedData(PVOID BcbVoid, PLARGE_INTEGER Lsn)
{
  __int16 v3; // ax
  __int64 *v5; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v12; // rcx
  signed __int32 v13; // edx
  ULONG_PTR *v14; // rsi
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // r14
  struct _KTHREAD *CurrentThread; // rbx
  volatile signed __int32 *v21; // rdi
  unsigned __int8 AbEntrySummary; // al
  __int64 v23; // rcx
  __int64 v24; // rsi
  int SessionId; // eax
  bool v26; // zf
  unsigned __int8 v27; // bl
  int v28; // eax
  __int64 v29; // rbx
  LONGLONG v30; // rcx
  LONGLONG QuadPart; // rax
  LONGLONG v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  unsigned __int32 v35; // eax
  unsigned int v36; // esi
  unsigned __int64 OldIrql; // r15
  unsigned int v38; // esi
  unsigned __int64 DeepFreezeStartTime; // rdx
  _DWORD *v40; // rcx
  __int64 AbOrphanedEntrySummary; // rax
  _DWORD *SchedulerAssist; // r9
  int v43; // eax
  int v44; // eax
  signed __int32 v45; // eax
  int v46; // eax
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  __int64 v59; // [rsp+30h] [rbp-68h]
  _QWORD v60[2]; // [rsp+38h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v63; // [rsp+A0h] [rbp+8h] BYREF
  int v64; // [rsp+B0h] [rbp+18h]
  int v65; // [rsp+B8h] [rbp+20h]

  v3 = *(_WORD *)BcbVoid;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v3 != 765 && v3 != 762 )
    KeBugCheckEx(0x34u, 0xE73uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = v60;
  v6 = BcbVoid;
  v60[0] = BcbVoid;
  v60[1] = 0LL;
  if ( v3 == 762 )
  {
    v6 = (_QWORD *)*((_QWORD *)BcbVoid + 2);
    v5 = (__int64 *)((char *)BcbVoid + 16);
  }
  v7 = v6[22];
  v8 = *(_QWORD *)(v7 + 528);
  v59 = v8;
  if ( *(_QWORD *)(v7 + 168) )
  {
    v9 = *(_QWORD *)((*(_QWORD *)(v7 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C8C0, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v63 = 0;
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v43 = v12[6];
          v12[6] = v43 + 1;
          if ( v43 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_140C4C8C0, 0x1Fu) )
      {
        v40 = CurrentPrcb->SchedulerAssist;
        if ( v40 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v44 = v40[6] - 1;
            v40[6] = v44;
            if ( !v44 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v63 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_140C4C8C0, CurrentIrql);
      }
      v13 = dword_140C4C8C0;
      while ( (v13 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (v13 & 0x40000000) == 0 )
        {
          v45 = _InterlockedCompareExchange(&dword_140C4C8C0, v13 | 0x40000000, v13);
          v26 = v13 == v45;
          v13 = v45;
          if ( !v26 )
            continue;
        }
        KeYieldProcessorEx(&v63);
        v13 = dword_140C4C8C0;
      }
    }
    if ( *(_QWORD *)v9 )
      v14 = *(ULONG_PTR **)(qword_140C4E588 + 8LL * (*(_WORD *)(*(_QWORD *)v9 + 60LL) & 0x3FF));
    else
      v14 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C4C8C0, retaddr);
    else
      dword_140C4C8C0 = 0;
    v15 = KeGetCurrentPrcb();
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v46 = v16[6] - 1;
        v16[6] = v46;
        if ( !v46 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v47 = KeGetCurrentIrql();
        if ( v47 <= 0xFu && CurrentIrql <= 0xFu && v47 >= 2u )
        {
          v48 = KeGetCurrentPrcb();
          v49 = v48->SchedulerAssist;
          v50 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v26 = (v50 & v49[5]) == 0;
          v49[5] &= v50;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(v48);
        }
      }
    }
    __writecr8(CurrentIrql);
    v8 = v59;
    if ( v59 != *(_QWORD *)(v14[22] + 8) )
      KeBugCheckEx(0x34u, 0x1311uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  v17 = *(_DWORD *)(v7 + 152);
  if ( (v17 & 0x1000000) != 0 && *(_QWORD *)(*(_QWORD *)(v7 + 240) + 136LL) == -1LL )
  {
    *(_QWORD *)(*(_QWORD *)(v7 + 240) + 136LL) = MEMORY[0xFFFFF78000000320];
    v17 = *(_DWORD *)(v7 + 152);
  }
  if ( (v17 & 0x200) != 0 )
  {
    v18 = *v5;
    if ( *v5 )
    {
      while ( 1 )
      {
        v60[0] = v18;
        ++v5;
        if ( (v18 & 1) != 0 )
          KeBugCheckEx(0x34u, 0xED3uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v19 = *(_QWORD *)(v18 + 176);
        v65 = 0;
        CurrentThread = KeGetCurrentThread();
        v21 = (volatile signed __int32 *)(v19 + 280);
        --CurrentThread->SpecialApcDisable;
        if ( ++CurrentThread->AbAllocationRegionCount != 1 )
          KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v19 + 280, KeGetCurrentIrql(), 0LL);
        AbEntrySummary = CurrentThread->AbEntrySummary;
        v64 = 0;
        if ( !AbEntrySummary )
        {
          if ( !CurrentThread->AbOrphanedEntrySummary )
          {
            v24 = 0LL;
            if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
              EtwTraceAutoBoostEntryExhaustion(CurrentThread, v19 + 280, 0xFFFF800000000000uLL, MiState);
LABEL_72:
            _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
            goto LABEL_30;
          }
          AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
          CurrentThread->AbOrphanedEntrySummary = 0;
          AbEntrySummary = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
        }
        _BitScanForward((unsigned int *)&v23, AbEntrySummary);
        v64 = v23;
        CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v23);
        v24 = (__int64)&CurrentThread->LockEntries[v23];
        if ( !v24 )
          goto LABEL_72;
        if ( (unsigned __int64)v21 >= 0xFFFF800000000000uLL
          && *((_BYTE *)&MiState[1537] + (((unsigned __int64)v21 >> 39) & 0x1FF)) == 1 )
        {
          SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
        }
        else
        {
          SessionId = -1;
        }
        *(_DWORD *)(v24 + 40) = SessionId;
        *(_QWORD *)(v24 + 32) = (unsigned __int64)v21 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_30:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
        v26 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v26
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        v27 = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset(v21, 0) )
          ExpAcquireFastMutexContended(v19 + 280);
        if ( v24 )
          *(_BYTE *)(v24 + 26) |= 1u;
        *(_QWORD *)(v19 + 288) = KeGetCurrentThread();
        v28 = v27;
        v29 = v60[0];
        *(_DWORD *)(v19 + 328) = v28;
        if ( !*(_BYTE *)(v29 + 2) )
        {
          v36 = *(_DWORD *)(v29 + 4) >> 12;
          *(_BYTE *)(v29 + 2) = 1;
          if ( Lsn )
          {
            *(LARGE_INTEGER *)(v29 + 40) = *Lsn;
            *(LARGE_INTEGER *)(v29 + 48) = *Lsn;
          }
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 128), &LockHandle);
          if ( !*(_DWORD *)(v19 + 112) && (*(_DWORD *)(v19 + 152) & 2) == 0 )
          {
            CcScheduleLazyWriteScan(v8, 0LL, 0LL);
            CcInsertIntoDirtySharedCacheMapList(v19);
          }
          CcChargeDirtyPages(v19, 0LL, 0LL, v36);
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v51 = KeGetCurrentIrql();
              if ( v51 <= 0xFu && LockHandle.OldIrql <= 0xFu && v51 >= 2u )
              {
                v52 = KeGetCurrentPrcb();
                v53 = v52->SchedulerAssist;
                v54 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v26 = (v54 & v53[5]) == 0;
                v53[5] &= v54;
                if ( v26 )
                  KiRemoveSystemWorkPriorityKick(v52);
                v29 = v60[0];
              }
            }
          }
          __writecr8(OldIrql);
          if ( (*(_DWORD *)(v19 + 152) & 0x10000000) != 0 )
          {
            v38 = v36 << 12;
            DeepFreezeStartTime = KeGetCurrentThread()->Process[2].DeepFreezeStartTime;
            if ( DeepFreezeStartTime )
            {
              if ( v38 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 8), v38);
              _InterlockedExchangeAdd64((volatile signed __int64 *)(DeepFreezeStartTime + 24), 1uLL);
              v29 = v60[0];
            }
            else
            {
              v29 = v60[0];
            }
          }
        }
        if ( Lsn )
        {
          v30 = *(_QWORD *)(v29 + 40);
          QuadPart = Lsn->QuadPart;
          if ( !v30 || QuadPart < v30 )
          {
            *(_QWORD *)(v29 + 40) = QuadPart;
            QuadPart = Lsn->QuadPart;
          }
          v32 = *(_QWORD *)(v29 + 48);
          if ( !v32 || QuadPart > v32 )
          {
            *(_QWORD *)(v29 + 48) = QuadPart;
            QuadPart = Lsn->QuadPart;
          }
          if ( QuadPart > *(_QWORD *)(v19 + 256) )
            *(_QWORD *)(v19 + 256) = QuadPart;
        }
        v33 = *(_QWORD *)(v29 + 32);
        if ( v33 > *(_QWORD *)(v19 + 48) )
          *(_QWORD *)(v19 + 48) = v33;
        v34 = *(unsigned __int8 *)(v19 + 328);
        *(_QWORD *)(v19 + 288) = 0LL;
        v35 = _InterlockedCompareExchange(v21, 1, 0);
        if ( v35 )
          ExpReleaseFastMutexContended(v19 + 280, v35);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v55 = KeGetCurrentIrql();
            if ( v55 <= 0xFu && (unsigned __int8)v34 <= 0xFu && v55 >= 2u )
            {
              v56 = KeGetCurrentPrcb();
              v57 = v56->SchedulerAssist;
              v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v34 + 1));
              v26 = (v58 & v57[5]) == 0;
              v57[5] &= v58;
              if ( v26 )
                KiRemoveSystemWorkPriorityKick(v56);
            }
          }
        }
        __writecr8(v34);
        KeAbPostRelease(v19 + 280);
        v18 = *v5;
        if ( !*v5 )
          return;
        v8 = v59;
      }
    }
  }
  else
  {
    CcSetDirtyInMask(v7, (char *)BcbVoid + 8, *((unsigned int *)BcbVoid + 1), 0LL);
  }
}
