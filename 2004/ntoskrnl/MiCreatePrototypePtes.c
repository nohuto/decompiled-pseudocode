/*
 * XREFs of MiCreatePrototypePtes @ 0x14026356C
 * Callers:
 *     MiAddViewsForSection @ 0x140248C90 (MiAddViewsForSection.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiIncrementSubsectionViewCount @ 0x140249480 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x14024A370 (MiDecrementSubsectionViewCount.c)
 *     MiGetCommittedPages @ 0x14024A698 (MiGetCommittedPages.c)
 *     MiControlAreaRequiresCharge @ 0x14024B1C8 (MiControlAreaRequiresCharge.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402639D0 (MiUpdateSystemProtoPtesTree.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiGetSubsectionCharges @ 0x14054FA28 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054FC4C (MiReturnCrossPartitionSectionCharges.c)
 *     MiInitializePrototypePtes @ 0x14060A974 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x1408CBF10 (MiAllocateFileExtents.c)
 *     MiChargeLargeProtoSubsection @ 0x1408CC670 (MiChargeLargeProtoSubsection.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePrototypePtes(ULONG_PTR BugCheckParameter2, __int16 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r15
  PVOID Pool; // rax
  void *v9; // r12
  int v10; // ebx
  __int64 CommittedPages; // r12
  __int64 v12; // r14
  unsigned __int64 v13; // r11
  int v14; // eax
  int v15; // r13d
  volatile LONG *v16; // r15
  KIRQL v17; // al
  int v18; // r9d
  unsigned __int64 v19; // rbx
  unsigned int v20; // r14d
  int v21; // eax
  int v22; // r13d
  unsigned int v23; // r15d
  _BOOL8 v24; // rdx
  __int64 v26; // r14
  struct _KTHREAD *v27; // rbx
  ULONG_PTR v28; // r9
  unsigned __int8 v29; // r13
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rdx
  char v34; // dl
  __int64 v35; // rdi
  int v36; // ebx
  int v37; // r13d
  int FileExtents; // ebx
  int SubsectionCharges; // eax
  BOOL v40; // r8d
  bool v41; // zf
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r10
  _DWORD *v44; // r9
  int v45; // eax
  _BOOL8 v46; // rdx
  __int64 v47; // r15
  struct _KTHREAD *v48; // rbx
  unsigned int SessionId; // edx
  unsigned int v50; // r8d
  __int64 v51; // rcx
  __int64 v52; // r14
  __int64 v53; // rdx
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  _DWORD *v56; // r9
  int v57; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v61; // eax
  unsigned __int8 v62; // cl
  struct _KPRCB *v63; // r10
  _DWORD *v64; // r9
  int v65; // eax
  int v66; // [rsp+30h] [rbp-40h]
  _DWORD v67[3]; // [rsp+34h] [rbp-3Ch] BYREF
  int v68; // [rsp+40h] [rbp-30h] BYREF
  __int64 v69; // [rsp+48h] [rbp-28h]
  unsigned int v70; // [rsp+50h] [rbp-20h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-18h]
  PVOID P; // [rsp+60h] [rbp-10h]
  BOOL v73; // [rsp+B0h] [rbp+40h]
  int v74; // [rsp+C8h] [rbp+58h]
  unsigned __int8 v75; // [rsp+C8h] [rbp+58h]

  v5 = *(_QWORD *)BugCheckParameter2;
  v74 = 0;
  CurrentThread = KeGetCurrentThread();
  v69 = v5;
  Pool = MiAllocatePool(274, 8LL * a4, 0x74536D4Du);
  P = Pool;
  v9 = Pool;
  if ( !Pool )
    return 3221225626LL;
  v10 = *(_DWORD *)(v5 + 56) & 0x40000000;
  MiInitializePrototypePtes((ULONG_PTR)Pool);
  v73 = *(_QWORD *)(v5 + 64) != 0LL;
  if ( v10 )
  {
    v36 = 5;
    v37 = a2 & 0x400;
    if ( !v37 || (v36 = 69, (unsigned int)MiChargeLargeProtoSubsection(BugCheckParameter2, 1LL)) )
    {
      FileExtents = MiAllocateFileExtents(BugCheckParameter2, v36);
      if ( FileExtents < 0 )
      {
        ExFreePoolWithTag(v9, 0);
        if ( v37 )
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
    CommittedPages = MiGetCommittedPages((_QWORD *)v5);
  }
  LOWORD(v13) = -1;
  if ( (a2 & 4) != 0 )
  {
    v14 = 1;
    v66 = 1;
LABEL_7:
    v15 = a2 & 0x180;
    while ( 1 )
    {
      if ( v14 == 2 )
      {
        if ( CommittedPages )
        {
          SubsectionCharges = MiGetSubsectionCharges(BugCheckParameter2, CommittedPages);
          v13 = -1LL;
          v23 = SubsectionCharges;
          if ( SubsectionCharges < 0 )
          {
            CommittedPages = 0LL;
            goto LABEL_24;
          }
        }
      }
      else
      {
        CommittedPages = 0LL;
      }
      if ( !v73 )
      {
        v74 = 1;
        CurrentThread->SpecialApcDisable += v13;
        ExAcquirePushLockExclusiveEx(*(_QWORD *)v12 + 40LL, 0LL);
      }
      v16 = (volatile LONG *)(v12 + 72);
      v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
      v18 = v66;
      v19 = v17;
      if ( v66 != 2
        || (!(v40 = v73)
          ? (v41 = CommittedPages == MiGetCommittedPages((_QWORD *)v12))
          : (v41 = CommittedPages == *(_DWORD *)(BugCheckParameter2 + 44)
                                   - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFF)),
            v41) )
      {
        v20 = v15 | 0x20;
        if ( v18 == 2 )
          v20 = v15 | 0x28;
        v21 = MiIncrementSubsectionViewCount((_QWORD *)BugCheckParameter2, v20);
        v22 = v21;
        if ( v21 != 1 )
        {
          if ( v21 == 3 )
            CommittedPages = 0LL;
          if ( v73 )
            *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
          if ( !*(_QWORD *)(BugCheckParameter2 + 8) )
          {
            *(_QWORD *)(BugCheckParameter2 + 8) = P;
            MiUpdateSystemProtoPtesTree(BugCheckParameter2 + (v73 ? 112LL : 56LL), 1LL);
            ExReleaseSpinLockExclusiveFromDpcLevel(v16);
            if ( KiIrqlFlags
              && (KiIrqlFlags & 1) != 0
              && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu)
              && (unsigned __int8)v19 <= 0xFu )
            {
              v13 = -1LL;
              if ( CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v61 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
                v41 = (v61 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v61;
                if ( v41 )
                {
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  goto LABEL_22;
                }
              }
            }
            else
            {
LABEL_22:
              v13 = -1LL;
            }
            __writecr8(v19);
            P = 0LL;
            v23 = 0;
            goto LABEL_24;
          }
          v34 = v20 | 0x10;
          if ( v66 != 2 )
            v34 = v20;
          v35 = MiDecrementSubsectionViewCount((__int64 *)BugCheckParameter2, v34);
          ExReleaseSpinLockExclusiveFromDpcLevel(v16);
          if ( KiIrqlFlags
            && (KiIrqlFlags & 1) != 0
            && (v62 = KeGetCurrentIrql(), v62 <= 0xFu)
            && (unsigned __int8)v19 <= 0xFu )
          {
            v13 = -1LL;
            if ( v62 >= 2u )
            {
              v63 = KeGetCurrentPrcb();
              v64 = v63->SchedulerAssist;
              v65 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
              v41 = (v65 & v64[5]) == 0;
              v64[5] &= v65;
              if ( v41 )
              {
                KiRemoveSystemWorkPriorityKick(v63);
                goto LABEL_58;
              }
            }
          }
          else
          {
LABEL_58:
            v13 = -1LL;
          }
          v23 = -1073741302;
          if ( v22 == 3 )
            CommittedPages = v35;
LABEL_61:
          __writecr8(v19);
          goto LABEL_24;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v16);
        if ( KiIrqlFlags
          && (KiIrqlFlags & 1) != 0
          && (v54 = KeGetCurrentIrql(), v54 <= 0xFu)
          && (unsigned __int8)v19 <= 0xFu )
        {
          v13 = -1LL;
          if ( v54 >= 2u )
          {
            v55 = KeGetCurrentPrcb();
            v56 = v55->SchedulerAssist;
            v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
            v41 = (v57 & v56[5]) == 0;
            v56[5] &= v57;
            if ( v41 )
            {
              KiRemoveSystemWorkPriorityKick(v55);
              goto LABEL_121;
            }
          }
        }
        else
        {
LABEL_121:
          v13 = -1LL;
        }
        v23 = -1073741670;
        goto LABEL_61;
      }
      v70 = CommittedPages;
      if ( v40 )
        CommittedPages = *(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFFu);
      else
        CommittedPages = MiGetCommittedPages((_QWORD *)v12);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v42 = KeGetCurrentIrql();
          if ( v42 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v42 >= 2u )
          {
            v43 = KeGetCurrentPrcb();
            v44 = v43->SchedulerAssist;
            v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
            v41 = (v45 & v44[5]) == 0;
            v44[5] &= v45;
            if ( v41 )
              KiRemoveSystemWorkPriorityKick(v43);
          }
        }
      }
      __writecr8(v19);
      v46 = v73;
      if ( !v73 )
      {
        v47 = *(_QWORD *)v12 + 40LL;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v47, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v47);
        v67[0] = 0;
        v48 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v47) == 1 )
          SessionId = MmGetSessionIdEx((__int64)v48->ApcState.Process);
        else
          SessionId = -1;
        --v48->SpecialApcDisable;
        v75 = ++v48->AbAllocationRegionCount;
        v50 = ((char)v48->AbEntrySummary | (char)v48->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v41 = !_BitScanReverse((unsigned int *)&v51, v50);
          v67[1] = v51;
          if ( v41 )
            goto LABEL_95;
          v52 = (__int64)&v48->LockEntries[v51];
          v50 &= ~(1 << v51);
          if ( (*(_BYTE *)(v52 + 26) & 1) != 0
            && (*(_DWORD *)(v52 + 32) & 1) == 0
            && (*(_QWORD *)(v52 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v47 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v52 + 40) == SessionId )
          {
            *(_BYTE *)(v52 + 26) &= ~1u;
            if ( *(_QWORD *)(v52 + 32) )
              break;
          }
        }
        if ( !v52 )
        {
LABEL_95:
          if ( (*((_DWORD *)&v48->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v48, v47, SessionId, 0LL);
          goto LABEL_107;
        }
        *(_BYTE *)(v52 + 32) |= 2u;
        if ( *(__int64 *)(v52 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v52);
        v67[0] = 0;
        v67[0] = *(_DWORD *)(v52 + 88) & 0x1FFFF;
        *(_DWORD *)(v52 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v52 + 25) &= ~1u;
        *(_QWORD *)(v52 + 32) = 0LL;
        v53 = (signed __int64)(v52 - (unsigned __int64)v48->LockEntries) / 96;
        if ( v75 == 1 )
          v48->AbEntrySummary |= 1 << v53;
        else
          _InterlockedOr8((volatile signed __int8 *)&v48->AbOrphanedEntrySummary, 1 << v53);
LABEL_107:
        --v48->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v48, v47, v67);
        v41 = v48->SpecialApcDisable++ == -1;
        if ( v41 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v48->ApcState.ApcListHead[0].Flink != &v48->152 )
          KiCheckForKernelApcDelivery();
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v12 = v69;
        v46 = 0LL;
        v74 = 0;
      }
      LOWORD(v13) = -1;
      v14 = 2;
      if ( v70 )
      {
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(v12 + 60) & 0x3FF)),
          v46,
          v70);
        v14 = 2;
        LOWORD(v13) = -1;
      }
    }
  }
  v14 = MiControlAreaRequiresCharge(v12);
  v66 = v14;
  if ( v14 )
    goto LABEL_7;
  CommittedPages = 0LL;
  v23 = -1073740277;
LABEL_24:
  v24 = v73;
  if ( !v73 && v74 == 1 )
  {
    v26 = *(_QWORD *)v69 + 40LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v26, v13) & 6) == 2 )
      ExfTryToWakePushLock(v26);
    v68 = 0;
    v27 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v26) == 1 )
      v28 = (unsigned int)MmGetSessionIdEx((__int64)v27->ApcState.Process);
    else
      v28 = 0xFFFFFFFFLL;
    --v27->SpecialApcDisable;
    v29 = ++v27->AbAllocationRegionCount;
    v30 = ((char)v27->AbEntrySummary | (char)v27->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v41 = !_BitScanReverse((unsigned int *)&v31, v30);
      v67[2] = v31;
      if ( v41 )
        break;
      v32 = (__int64)&v27->LockEntries[v31];
      v30 &= ~(1 << v31);
      if ( (*(_BYTE *)(v32 + 26) & 1) != 0
        && (*(_DWORD *)(v32 + 32) & 1) == 0
        && (*(_QWORD *)(v32 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v26 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v32 + 40) == (_DWORD)v28 )
      {
        *(_BYTE *)(v32 + 26) &= ~1u;
        if ( *(_QWORD *)(v32 + 32) )
        {
          if ( v32 )
          {
            *(_BYTE *)(v32 + 32) |= 2u;
            if ( *(__int64 *)(v32 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v32);
            v68 = *(_DWORD *)(v32 + 88) & 0x1FFFF;
            *(_DWORD *)(v32 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v32 + 25) &= ~1u;
            *(_QWORD *)(v32 + 32) = 0LL;
            v33 = (signed __int64)(v32 - (unsigned __int64)v27->LockEntries) / 96;
            if ( v29 == 1 )
              v27->AbEntrySummary |= 1 << v33;
            else
              _InterlockedOr8((volatile signed __int8 *)&v27->AbOrphanedEntrySummary, 1 << v33);
            goto LABEL_49;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v27->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v27, v26, v28, 0LL);
LABEL_49:
    --v27->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v27, v26, &v68);
    v41 = v27->SpecialApcDisable++ == -1;
    if ( v41 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v24 = 0LL;
  }
  if ( CommittedPages )
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(v69 + 60) & 0x3FF)),
      v24,
      CommittedPages);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v23;
}
