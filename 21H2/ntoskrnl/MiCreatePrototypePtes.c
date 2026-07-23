/*
 * XREFs of MiCreatePrototypePtes @ 0x140302B48
 * Callers:
 *     MiAddViewsForSection @ 0x140320340 (MiAddViewsForSection.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     MiControlAreaRequiresCharge @ 0x14027C22C (MiControlAreaRequiresCharge.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140302FB0 (MiUpdateSystemProtoPtesTree.c)
 *     MiDecrementSubsectionViewCount @ 0x14031FEC0 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140320B30 (MiIncrementSubsectionViewCount.c)
 *     MiGetCommittedPages @ 0x140321A20 (MiGetCommittedPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiGetSubsectionCharges @ 0x140555108 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 *     MiInitializePrototypePtes @ 0x1406FF6DC (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x1408CF670 (MiAllocateFileExtents.c)
 *     MiChargeLargeProtoSubsection @ 0x1408CFDD0 (MiChargeLargeProtoSubsection.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePrototypePtes(
        ULONG_PTR BugCheckParameter2,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v5; // r15
  PVOID Pool; // rax
  void *v9; // r12
  int v10; // ebx
  __int64 CommittedPages; // r12
  __int64 v12; // r14
  unsigned __int64 v13; // r11
  int v14; // eax
  volatile LONG *v15; // r15
  unsigned __int64 v16; // rbx
  int v17; // eax
  int v18; // r13d
  unsigned int v19; // r15d
  _BOOL8 v20; // rdx
  __int64 v22; // rdx
  ULONG_PTR v23; // r14
  struct _KTHREAD *v24; // rbx
  ULONG_PTR v25; // r9
  unsigned __int8 v26; // r13
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rdi
  int v32; // ebx
  int v33; // r13d
  int FileExtents; // ebx
  int SubsectionCharges; // eax
  BOOL v36; // r8d
  bool v37; // zf
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  _DWORD *v40; // r9
  int v41; // eax
  _BOOL8 v42; // rdx
  ULONG_PTR v43; // r15
  struct _KTHREAD *v44; // rbx
  unsigned int SessionId; // edx
  unsigned int v46; // r8d
  __int64 v47; // rcx
  __int64 v48; // r14
  __int64 v49; // rdx
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v57; // eax
  unsigned __int8 v58; // cl
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  int v62; // [rsp+30h] [rbp-40h]
  __int64 v63; // [rsp+48h] [rbp-28h]
  unsigned int v64; // [rsp+50h] [rbp-20h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-18h]
  PVOID P; // [rsp+60h] [rbp-10h]
  BOOL v67; // [rsp+B0h] [rbp+40h]
  int v68; // [rsp+C8h] [rbp+58h]
  unsigned __int8 v69; // [rsp+C8h] [rbp+58h]

  v5 = *(_QWORD *)BugCheckParameter2;
  v68 = 0;
  CurrentThread = KeGetCurrentThread();
  v63 = *(_QWORD *)BugCheckParameter2;
  Pool = MiAllocatePool(274, 8LL * a4, 0x74536D4Du);
  P = Pool;
  v9 = Pool;
  if ( !Pool )
    return 3221225626LL;
  v10 = *(_DWORD *)(v5 + 56) & 0x40000000;
  MiInitializePrototypePtes((ULONG_PTR)Pool);
  v67 = *(_QWORD *)(v5 + 64) != 0LL;
  if ( v10 )
  {
    v32 = 5;
    v33 = a2 & 0x400;
    if ( !v33 || (v32 = 69, (unsigned int)MiChargeLargeProtoSubsection(BugCheckParameter2, 1LL)) )
    {
      FileExtents = MiAllocateFileExtents(BugCheckParameter2, v32);
      if ( FileExtents < 0 )
      {
        ExFreePoolWithTag(v9, 0);
        if ( v33 )
          MiChargeLargeProtoSubsection(BugCheckParameter2, 0LL);
      }
      return (unsigned int)FileExtents;
    }
    return 3221225626LL;
  }
  if ( *(_QWORD *)(v5 + 64) )
  {
    CommittedPages = a3;
    v12 = v5;
  }
  else
  {
    v12 = v5;
    CommittedPages = MiGetCommittedPages(v5);
  }
  LOWORD(v13) = -1;
  if ( (a2 & 4) != 0 )
  {
    v14 = 1;
    v62 = 1;
    goto LABEL_7;
  }
  if ( (a2 & 0x80u) != 0 )
    v22 = 3LL;
  else
    v22 = (a2 >> 7) & 2;
  v14 = MiControlAreaRequiresCharge(v12, v22);
  v62 = v14;
  if ( v14 )
  {
    while ( 1 )
    {
LABEL_7:
      if ( v14 == 2 )
      {
        if ( CommittedPages )
        {
          SubsectionCharges = MiGetSubsectionCharges(BugCheckParameter2, CommittedPages);
          v13 = -1LL;
          v19 = SubsectionCharges;
          if ( SubsectionCharges < 0 )
          {
            CommittedPages = 0LL;
            goto LABEL_21;
          }
        }
      }
      else
      {
        CommittedPages = 0LL;
      }
      if ( !v67 )
      {
        v68 = 1;
        CurrentThread->SpecialApcDisable += v13;
        ExAcquirePushLockExclusiveEx(*(_QWORD *)v12 + 40LL, 0LL);
      }
      v15 = (volatile LONG *)(v12 + 72);
      v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
      if ( v62 != 2
        || (!(v36 = v67)
          ? (v37 = CommittedPages == MiGetCommittedPages(v12))
          : (v37 = CommittedPages == *(_DWORD *)(BugCheckParameter2 + 44)
                                   - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFF)),
            v37) )
      {
        v17 = MiIncrementSubsectionViewCount(BugCheckParameter2);
        v18 = v17;
        if ( v17 != 1 )
        {
          if ( v17 == 3 )
            CommittedPages = 0LL;
          if ( v67 )
            *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
          if ( !*(_QWORD *)(BugCheckParameter2 + 8) )
          {
            *(_QWORD *)(BugCheckParameter2 + 8) = P;
            MiUpdateSystemProtoPtesTree(BugCheckParameter2 + (v67 ? 112LL : 56LL), 1LL);
            ExReleaseSpinLockExclusiveFromDpcLevel(v15);
            if ( KiIrqlFlags
              && (KiIrqlFlags & 1) != 0
              && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu)
              && (unsigned __int8)v16 <= 0xFu )
            {
              v13 = -1LL;
              if ( CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
                v37 = (v57 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v57;
                if ( v37 )
                {
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  goto LABEL_19;
                }
              }
            }
            else
            {
LABEL_19:
              v13 = -1LL;
            }
            __writecr8(v16);
            P = 0LL;
            v19 = 0;
            goto LABEL_21;
          }
          v31 = MiDecrementSubsectionViewCount(BugCheckParameter2);
          ExReleaseSpinLockExclusiveFromDpcLevel(v15);
          if ( KiIrqlFlags
            && (KiIrqlFlags & 1) != 0
            && (v58 = KeGetCurrentIrql(), v58 <= 0xFu)
            && (unsigned __int8)v16 <= 0xFu )
          {
            v13 = -1LL;
            if ( v58 >= 2u )
            {
              v59 = KeGetCurrentPrcb();
              v60 = v59->SchedulerAssist;
              v61 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
              v37 = (v61 & v60[5]) == 0;
              v60[5] &= v61;
              if ( v37 )
              {
                KiRemoveSystemWorkPriorityKick(v59);
                goto LABEL_56;
              }
            }
          }
          else
          {
LABEL_56:
            v13 = -1LL;
          }
          v19 = -1073741302;
          if ( v18 == 3 )
            CommittedPages = v31;
LABEL_59:
          __writecr8(v16);
          goto LABEL_21;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v15);
        if ( KiIrqlFlags
          && (KiIrqlFlags & 1) != 0
          && (v50 = KeGetCurrentIrql(), v50 <= 0xFu)
          && (unsigned __int8)v16 <= 0xFu )
        {
          v13 = -1LL;
          if ( v50 >= 2u )
          {
            v51 = KeGetCurrentPrcb();
            v52 = v51->SchedulerAssist;
            v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
            v37 = (v53 & v52[5]) == 0;
            v52[5] &= v53;
            if ( v37 )
            {
              KiRemoveSystemWorkPriorityKick(v51);
              goto LABEL_119;
            }
          }
        }
        else
        {
LABEL_119:
          v13 = -1LL;
        }
        v19 = -1073741670;
        goto LABEL_59;
      }
      v64 = CommittedPages;
      if ( v36 )
        CommittedPages = *(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFFu);
      else
        CommittedPages = MiGetCommittedPages(v12);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v38 = KeGetCurrentIrql();
          if ( v38 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v38 >= 2u )
          {
            v39 = KeGetCurrentPrcb();
            v40 = v39->SchedulerAssist;
            v41 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
            v37 = (v41 & v40[5]) == 0;
            v40[5] &= v41;
            if ( v37 )
              KiRemoveSystemWorkPriorityKick(v39);
          }
        }
      }
      __writecr8(v16);
      v42 = v67;
      if ( !v67 )
      {
        v43 = *(_QWORD *)v12 + 40LL;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v43, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v43);
        v44 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v43) == 1 )
          SessionId = MmGetSessionIdEx(v44->ApcState.Process);
        else
          SessionId = -1;
        --v44->SpecialApcDisable;
        v69 = ++v44->AbAllocationRegionCount;
        v46 = ((char)v44->AbEntrySummary | (char)v44->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v37 = !_BitScanReverse((unsigned int *)&v47, v46);
          if ( v37 )
            goto LABEL_93;
          v48 = (__int64)&v44->LockEntries[v47];
          v46 &= ~(1 << v47);
          if ( (*(_BYTE *)(v48 + 26) & 1) != 0
            && (*(_DWORD *)(v48 + 32) & 1) == 0
            && (*(_QWORD *)(v48 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v43 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v48 + 40) == SessionId )
          {
            *(_BYTE *)(v48 + 26) &= ~1u;
            if ( *(_QWORD *)(v48 + 32) )
              break;
          }
        }
        if ( !v48 )
        {
LABEL_93:
          if ( (*((_DWORD *)&v44->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v44, v43, SessionId, 0LL);
          goto LABEL_105;
        }
        *(_BYTE *)(v48 + 32) |= 2u;
        if ( *(__int64 *)(v48 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v48);
        *(_DWORD *)(v48 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v48 + 25) &= ~1u;
        *(_QWORD *)(v48 + 32) = 0LL;
        v49 = (signed __int64)(v48 - (unsigned __int64)v44->LockEntries) / 96;
        if ( v69 == 1 )
          v44->AbEntrySummary |= 1 << v49;
        else
          _InterlockedOr8((volatile signed __int8 *)&v44->AbOrphanedEntrySummary, 1 << v49);
LABEL_105:
        --v44->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v44);
        v37 = v44->SpecialApcDisable++ == -1;
        if ( v37 && ($C459BD0D405E8E46662177FB3D0A143F *)v44->ApcState.ApcListHead[0].Flink != &v44->152 )
          KiCheckForKernelApcDelivery();
        KiLeaveGuardedRegionUnsafe(CurrentThread);
        v12 = v63;
        v42 = 0LL;
        v68 = 0;
      }
      LOWORD(v13) = -1;
      v14 = 2;
      if ( v64 )
      {
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(v12 + 60) & 0x3FF)),
          v42,
          v64);
        v14 = 2;
        LOWORD(v13) = -1;
      }
    }
  }
  CommittedPages = 0LL;
  v19 = -1073740277;
LABEL_21:
  v20 = v67;
  if ( !v67 && v68 == 1 )
  {
    v23 = *(_QWORD *)v63 + 40LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, v13) & 6) == 2 )
      ExfTryToWakePushLock(v23);
    v24 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v23) == 1 )
      v25 = (unsigned int)MmGetSessionIdEx(v24->ApcState.Process);
    else
      v25 = 0xFFFFFFFFLL;
    --v24->SpecialApcDisable;
    v26 = ++v24->AbAllocationRegionCount;
    v27 = ((char)v24->AbEntrySummary | (char)v24->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v37 = !_BitScanReverse((unsigned int *)&v28, v27);
      if ( v37 )
        break;
      v29 = (__int64)&v24->LockEntries[v28];
      v27 &= ~(1 << v28);
      if ( (*(_BYTE *)(v29 + 26) & 1) != 0
        && (*(_DWORD *)(v29 + 32) & 1) == 0
        && (*(_QWORD *)(v29 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v23 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v29 + 40) == (_DWORD)v25 )
      {
        *(_BYTE *)(v29 + 26) &= ~1u;
        if ( *(_QWORD *)(v29 + 32) )
        {
          if ( v29 )
          {
            *(_BYTE *)(v29 + 32) |= 2u;
            if ( *(__int64 *)(v29 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v29);
            *(_DWORD *)(v29 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v29 + 25) &= ~1u;
            *(_QWORD *)(v29 + 32) = 0LL;
            v30 = (signed __int64)(v29 - (unsigned __int64)v24->LockEntries) / 96;
            if ( v26 == 1 )
              v24->AbEntrySummary |= 1 << v30;
            else
              _InterlockedOr8((volatile signed __int8 *)&v24->AbOrphanedEntrySummary, 1 << v30);
            goto LABEL_48;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v24->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v24, v23, v25, 0LL);
LABEL_48:
    --v24->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v24);
    v37 = v24->SpecialApcDisable++ == -1;
    if ( v37 && ($C459BD0D405E8E46662177FB3D0A143F *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    v20 = 0LL;
  }
  if ( CommittedPages )
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(v63 + 60) & 0x3FF)),
      v20,
      CommittedPages);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v19;
}
