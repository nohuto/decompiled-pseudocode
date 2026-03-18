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
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rdx
  char v35; // dl
  __int64 v36; // rdi
  int v37; // ebx
  int v38; // r13d
  int FileExtents; // ebx
  int SubsectionCharges; // eax
  BOOL v41; // r8d
  bool v42; // zf
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // eax
  _BOOL8 v47; // rdx
  __int64 v48; // r15
  struct _KTHREAD *v49; // rbx
  __int64 SessionId; // rdx
  __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // r14
  __int64 v54; // rdx
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r10
  _DWORD *v57; // r9
  int v58; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v62; // eax
  unsigned __int8 v63; // cl
  struct _KPRCB *v64; // r10
  _DWORD *v65; // r9
  int v66; // eax
  int v67; // [rsp+30h] [rbp-40h]
  _DWORD v68[3]; // [rsp+34h] [rbp-3Ch] BYREF
  int v69; // [rsp+40h] [rbp-30h] BYREF
  __int64 v70; // [rsp+48h] [rbp-28h]
  unsigned int v71; // [rsp+50h] [rbp-20h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-18h]
  PVOID P; // [rsp+60h] [rbp-10h]
  BOOL v74; // [rsp+B0h] [rbp+40h]
  int v75; // [rsp+C8h] [rbp+58h]
  unsigned __int8 v76; // [rsp+C8h] [rbp+58h]

  v5 = *(_QWORD *)BugCheckParameter2;
  v75 = 0;
  CurrentThread = KeGetCurrentThread();
  v70 = v5;
  Pool = MiAllocatePool(274, 8LL * a4, 0x74536D4Du);
  P = Pool;
  v9 = Pool;
  if ( !Pool )
    return 3221225626LL;
  v10 = *(_DWORD *)(v5 + 56) & 0x40000000;
  MiInitializePrototypePtes((ULONG_PTR)Pool);
  v74 = *(_QWORD *)(v5 + 64) != 0LL;
  if ( v10 )
  {
    v37 = 5;
    v38 = a2 & 0x400;
    if ( !v38 || (v37 = 69, (unsigned int)MiChargeLargeProtoSubsection(BugCheckParameter2, 1LL)) )
    {
      FileExtents = MiAllocateFileExtents(BugCheckParameter2, v37);
      if ( FileExtents < 0 )
      {
        ExFreePoolWithTag(v9, 0);
        if ( v38 )
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
    v67 = 1;
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
      if ( !v74 )
      {
        v75 = 1;
        CurrentThread->SpecialApcDisable += v13;
        ExAcquirePushLockExclusiveEx(*(_QWORD *)v12 + 40LL, 0LL);
      }
      v16 = (volatile LONG *)(v12 + 72);
      v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
      v18 = v67;
      v19 = v17;
      if ( v67 != 2
        || (!(v41 = v74)
          ? (v42 = CommittedPages == MiGetCommittedPages((_QWORD *)v12))
          : (v42 = CommittedPages == *(_DWORD *)(BugCheckParameter2 + 44)
                                   - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFF)),
            v42) )
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
          if ( v74 )
            *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
          if ( !*(_QWORD *)(BugCheckParameter2 + 8) )
          {
            *(_QWORD *)(BugCheckParameter2 + 8) = P;
            MiUpdateSystemProtoPtesTree(BugCheckParameter2 + (v74 ? 112LL : 56LL), 1LL);
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
                v62 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
                v42 = (v62 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v62;
                if ( v42 )
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
          v35 = v20 | 0x10;
          if ( v67 != 2 )
            v35 = v20;
          v36 = MiDecrementSubsectionViewCount((__int64 *)BugCheckParameter2, v35);
          ExReleaseSpinLockExclusiveFromDpcLevel(v16);
          if ( KiIrqlFlags
            && (KiIrqlFlags & 1) != 0
            && (v63 = KeGetCurrentIrql(), v63 <= 0xFu)
            && (unsigned __int8)v19 <= 0xFu )
          {
            v13 = -1LL;
            if ( v63 >= 2u )
            {
              v64 = KeGetCurrentPrcb();
              v65 = v64->SchedulerAssist;
              v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
              v42 = (v66 & v65[5]) == 0;
              v65[5] &= v66;
              if ( v42 )
              {
                KiRemoveSystemWorkPriorityKick(v64);
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
            CommittedPages = v36;
LABEL_61:
          __writecr8(v19);
          goto LABEL_24;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v16);
        if ( KiIrqlFlags
          && (KiIrqlFlags & 1) != 0
          && (v55 = KeGetCurrentIrql(), v55 <= 0xFu)
          && (unsigned __int8)v19 <= 0xFu )
        {
          v13 = -1LL;
          if ( v55 >= 2u )
          {
            v56 = KeGetCurrentPrcb();
            v57 = v56->SchedulerAssist;
            v58 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
            v42 = (v58 & v57[5]) == 0;
            v57[5] &= v58;
            if ( v42 )
            {
              KiRemoveSystemWorkPriorityKick(v56);
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
      v71 = CommittedPages;
      if ( v41 )
        CommittedPages = *(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFFu);
      else
        CommittedPages = MiGetCommittedPages((_QWORD *)v12);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v43 = KeGetCurrentIrql();
          if ( v43 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v43 >= 2u )
          {
            v44 = KeGetCurrentPrcb();
            v45 = v44->SchedulerAssist;
            v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
            v42 = (v46 & v45[5]) == 0;
            v45[5] &= v46;
            if ( v42 )
              KiRemoveSystemWorkPriorityKick(v44);
          }
        }
      }
      __writecr8(v19);
      v47 = v74;
      if ( !v74 )
      {
        v48 = *(_QWORD *)v12 + 40LL;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v48);
        v68[0] = 0;
        v49 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v48) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx((__int64)v49->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --v49->SpecialApcDisable;
        v76 = ++v49->AbAllocationRegionCount;
        LODWORD(v51) = ((char)v49->AbEntrySummary | (char)v49->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v42 = !_BitScanReverse((unsigned int *)&v52, v51);
          v68[1] = v52;
          if ( v42 )
            goto LABEL_95;
          v53 = (__int64)&v49->LockEntries[v52];
          v51 = ~(1 << v52) & (unsigned int)v51;
          if ( (*(_BYTE *)(v53 + 26) & 1) != 0
            && (*(_DWORD *)(v53 + 32) & 1) == 0
            && (*(_QWORD *)(v53 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v48 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v53 + 40) == (_DWORD)SessionId )
          {
            *(_BYTE *)(v53 + 26) &= ~1u;
            if ( *(_QWORD *)(v53 + 32) )
              break;
          }
        }
        if ( !v53 )
        {
LABEL_95:
          if ( (*((_DWORD *)&v49->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v49, v48, (unsigned int)SessionId, 0LL);
          goto LABEL_107;
        }
        *(_BYTE *)(v53 + 32) |= 2u;
        if ( *(__int64 *)(v53 + 32) < 0 )
          KiAbEntryRemoveFromTree(v53, SessionId, v51);
        v68[0] = 0;
        v68[0] = *(_DWORD *)(v53 + 88) & 0x1FFFF;
        *(_DWORD *)(v53 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v53 + 25) &= ~1u;
        *(_QWORD *)(v53 + 32) = 0LL;
        v54 = (signed __int64)(v53 - (unsigned __int64)v49->LockEntries) / 96;
        if ( v76 == 1 )
          v49->AbEntrySummary |= 1 << v54;
        else
          _InterlockedOr8((volatile signed __int8 *)&v49->AbOrphanedEntrySummary, 1 << v54);
LABEL_107:
        --v49->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v49, v48, v68);
        v42 = v49->SpecialApcDisable++ == -1;
        if ( v42 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v49->ApcState.ApcListHead[0].Flink != &v49->152 )
          KiCheckForKernelApcDelivery();
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v12 = v70;
        v47 = 0LL;
        v75 = 0;
      }
      LOWORD(v13) = -1;
      v14 = 2;
      if ( v71 )
      {
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(v12 + 60) & 0x3FF)),
          v47,
          v71);
        v14 = 2;
        LOWORD(v13) = -1;
      }
    }
  }
  v14 = MiControlAreaRequiresCharge(v12);
  v67 = v14;
  if ( v14 )
    goto LABEL_7;
  CommittedPages = 0LL;
  v23 = -1073740277;
LABEL_24:
  v24 = v74;
  if ( !v74 && v75 == 1 )
  {
    v26 = *(_QWORD *)v70 + 40LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v26, v13) & 6) == 2 )
      ExfTryToWakePushLock(v26);
    v69 = 0;
    v27 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v26) == 1 )
      v28 = (unsigned int)MmGetSessionIdEx((__int64)v27->ApcState.Process);
    else
      v28 = 0xFFFFFFFFLL;
    --v27->SpecialApcDisable;
    v29 = ++v27->AbAllocationRegionCount;
    v30 = v26 & 0x7FFFFFFFFFFFFFFCLL;
    LODWORD(v31) = ((char)v27->AbEntrySummary | (char)v27->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v42 = !_BitScanReverse((unsigned int *)&v32, v31);
      v68[2] = v32;
      if ( v42 )
        break;
      v33 = (__int64)&v27->LockEntries[v32];
      v31 = ~(1 << v32) & (unsigned int)v31;
      if ( (*(_BYTE *)(v33 + 26) & 1) != 0
        && (*(_DWORD *)(v33 + 32) & 1) == 0
        && (*(_QWORD *)(v33 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v30
        && *(_DWORD *)(v33 + 40) == (_DWORD)v28 )
      {
        *(_BYTE *)(v33 + 26) &= ~1u;
        if ( *(_QWORD *)(v33 + 32) )
        {
          if ( v33 )
          {
            *(_BYTE *)(v33 + 32) |= 2u;
            if ( *(__int64 *)(v33 + 32) < 0 )
              KiAbEntryRemoveFromTree(v33, v31, v30);
            v69 = *(_DWORD *)(v33 + 88) & 0x1FFFF;
            *(_DWORD *)(v33 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v33 + 25) &= ~1u;
            *(_QWORD *)(v33 + 32) = 0LL;
            v34 = (signed __int64)(v33 - (unsigned __int64)v27->LockEntries) / 96;
            if ( v29 == 1 )
              v27->AbEntrySummary |= 1 << v34;
            else
              _InterlockedOr8((volatile signed __int8 *)&v27->AbOrphanedEntrySummary, 1 << v34);
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
    KiAbThreadRemoveBoosts((ULONG_PTR)v27, v26, &v69);
    v42 = v27->SpecialApcDisable++ == -1;
    if ( v42 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v24 = 0LL;
  }
  if ( CommittedPages )
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(v70 + 60) & 0x3FF)),
      v24,
      CommittedPages);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v23;
}
