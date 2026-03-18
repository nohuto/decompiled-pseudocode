/*
 * XREFs of MiCreatePrototypePtes @ 0x1402D51CC
 * Callers:
 *     MiAddViewsForSection @ 0x14022C750 (MiAddViewsForSection.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     MiDecrementSubsectionViewCount @ 0x14022BF20 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x14022CF40 (MiIncrementSubsectionViewCount.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiGetCommittedPages @ 0x14022E938 (MiGetCommittedPages.c)
 *     MiControlAreaRequiresCharge @ 0x140232D6C (MiControlAreaRequiresCharge.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402D5630 (MiUpdateSystemProtoPtesTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiGetSubsectionCharges @ 0x1405533F8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055361C (MiReturnCrossPartitionSectionCharges.c)
 *     MiInitializePrototypePtes @ 0x14068304C (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x1408D1D50 (MiAllocateFileExtents.c)
 *     MiChargeLargeProtoSubsection @ 0x1408D24B0 (MiChargeLargeProtoSubsection.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  char v15; // r13
  volatile LONG *v16; // r15
  KIRQL v17; // al
  int v18; // r9d
  unsigned __int64 v19; // rbx
  char v20; // r14
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
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  char v39; // dl
  __int64 v40; // rdi
  int v41; // ebx
  int v42; // r13d
  int FileExtents; // ebx
  int SubsectionCharges; // eax
  BOOL v45; // r8d
  bool v46; // zf
  unsigned __int8 v47; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  _BOOL8 v51; // rdx
  __int64 v52; // r15
  struct _KTHREAD *v53; // rbx
  __int64 SessionId; // rdx
  __int64 v55; // r8
  __int64 v56; // rcx
  __int64 v57; // r14
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r10
  _DWORD *v65; // r9
  int v66; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v70; // eax
  unsigned __int8 v71; // cl
  struct _KPRCB *v72; // r10
  _DWORD *v73; // r9
  int v74; // eax
  int v75; // [rsp+30h] [rbp-40h]
  _DWORD v76[3]; // [rsp+34h] [rbp-3Ch] BYREF
  int v77; // [rsp+40h] [rbp-30h] BYREF
  __int64 v78; // [rsp+48h] [rbp-28h]
  unsigned int v79; // [rsp+50h] [rbp-20h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-18h]
  PVOID P; // [rsp+60h] [rbp-10h]
  BOOL v82; // [rsp+B0h] [rbp+40h]
  int v83; // [rsp+C8h] [rbp+58h]
  unsigned __int8 v84; // [rsp+C8h] [rbp+58h]

  v5 = *(_QWORD *)BugCheckParameter2;
  v83 = 0;
  CurrentThread = KeGetCurrentThread();
  v78 = v5;
  Pool = MiAllocatePool(274, 8LL * a4, 0x74536D4Du);
  P = Pool;
  v9 = Pool;
  if ( !Pool )
    return 3221225626LL;
  v10 = *(_DWORD *)(v5 + 56) & 0x40000000;
  MiInitializePrototypePtes((ULONG_PTR)Pool);
  v82 = *(_QWORD *)(v5 + 64) != 0LL;
  if ( v10 )
  {
    v41 = 5;
    v42 = a2 & 0x400;
    if ( !v42 || (v41 = 69, (unsigned int)MiChargeLargeProtoSubsection(BugCheckParameter2, 1LL)) )
    {
      FileExtents = MiAllocateFileExtents(BugCheckParameter2, v41);
      if ( FileExtents < 0 )
      {
        ExFreePoolWithTag(v9, 0);
        if ( v42 )
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
    v75 = 1;
LABEL_7:
    v15 = a2 & 0x80;
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
      if ( !v82 )
      {
        v83 = 1;
        CurrentThread->SpecialApcDisable += v13;
        ExAcquirePushLockExclusiveEx(*(_QWORD *)v12 + 40LL, 0LL);
      }
      v16 = (volatile LONG *)(v12 + 72);
      v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
      v18 = v75;
      v19 = v17;
      if ( v75 != 2
        || (!(v45 = v82)
          ? (v46 = CommittedPages == MiGetCommittedPages((_QWORD *)v12))
          : (v46 = CommittedPages == *(_DWORD *)(BugCheckParameter2 + 44)
                                   - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFF)),
            v46) )
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
          if ( v82 )
            *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
          if ( !*(_QWORD *)(BugCheckParameter2 + 8) )
          {
            *(_QWORD *)(BugCheckParameter2 + 8) = P;
            MiUpdateSystemProtoPtesTree(BugCheckParameter2 + (v82 ? 112LL : 56LL), 1LL);
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
                v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
                v46 = (v70 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v70;
                if ( v46 )
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
          v39 = v20 | 0x10;
          if ( v75 != 2 )
            v39 = v20;
          v40 = MiDecrementSubsectionViewCount((_QWORD *)BugCheckParameter2, v39);
          ExReleaseSpinLockExclusiveFromDpcLevel(v16);
          if ( KiIrqlFlags
            && (KiIrqlFlags & 1) != 0
            && (v71 = KeGetCurrentIrql(), v71 <= 0xFu)
            && (unsigned __int8)v19 <= 0xFu )
          {
            v13 = -1LL;
            if ( v71 >= 2u )
            {
              v72 = KeGetCurrentPrcb();
              v73 = v72->SchedulerAssist;
              v74 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
              v46 = (v74 & v73[5]) == 0;
              v73[5] &= v74;
              if ( v46 )
              {
                KiRemoveSystemWorkPriorityKick(v72);
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
            CommittedPages = v40;
LABEL_61:
          __writecr8(v19);
          goto LABEL_24;
        }
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
            v46 = (v66 & v65[5]) == 0;
            v65[5] &= v66;
            if ( v46 )
            {
              KiRemoveSystemWorkPriorityKick(v64);
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
      v79 = CommittedPages;
      if ( v45 )
        CommittedPages = *(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFFu);
      else
        CommittedPages = MiGetCommittedPages((_QWORD *)v12);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v47 = KeGetCurrentIrql();
          if ( v47 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v47 >= 2u )
          {
            v48 = KeGetCurrentPrcb();
            v49 = v48->SchedulerAssist;
            v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
            v46 = (v50 & v49[5]) == 0;
            v49[5] &= v50;
            if ( v46 )
              KiRemoveSystemWorkPriorityKick(v48);
          }
        }
      }
      __writecr8(v19);
      v51 = v82;
      if ( !v82 )
      {
        v52 = *(_QWORD *)v12 + 40LL;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v52, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v52);
        v76[0] = 0;
        v53 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v52) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx((__int64)v53->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --v53->SpecialApcDisable;
        v84 = ++v53->AbAllocationRegionCount;
        LODWORD(v55) = ((char)v53->AbEntrySummary | (char)v53->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v46 = !_BitScanReverse((unsigned int *)&v56, v55);
          v76[1] = v56;
          if ( v46 )
            goto LABEL_95;
          v57 = (__int64)&v53->LockEntries[v56];
          v55 = ~(1 << v56) & (unsigned int)v55;
          if ( (*(_BYTE *)(v57 + 26) & 1) != 0
            && (*(_DWORD *)(v57 + 32) & 1) == 0
            && (*(_QWORD *)(v57 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v52 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v57 + 40) == (_DWORD)SessionId )
          {
            *(_BYTE *)(v57 + 26) &= ~1u;
            if ( *(_QWORD *)(v57 + 32) )
              break;
          }
        }
        if ( !v57 )
        {
LABEL_95:
          if ( (*((_DWORD *)&v53->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v53, v52, (unsigned int)SessionId, 0LL);
          goto LABEL_107;
        }
        *(_BYTE *)(v57 + 32) |= 2u;
        if ( *(__int64 *)(v57 + 32) < 0 )
          KiAbEntryRemoveFromTree(v57, SessionId, v55);
        v76[0] = 0;
        v76[0] = *(_DWORD *)(v57 + 88) & 0x1FFFF;
        *(_DWORD *)(v57 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v57 + 25) &= ~1u;
        *(_QWORD *)(v57 + 32) = 0LL;
        v58 = (signed __int64)(v57 - (unsigned __int64)v53->LockEntries) / 96;
        if ( v84 == 1 )
          v53->AbEntrySummary |= 1 << v58;
        else
          _InterlockedOr8((volatile signed __int8 *)&v53->AbOrphanedEntrySummary, 1 << v58);
LABEL_107:
        --v53->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v53, v52, v76);
        v46 = v53->SpecialApcDisable++ == -1;
        if ( v46 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v53->ApcState.ApcListHead[0].Flink != &v53->152 )
          KiCheckForKernelApcDelivery(v60, v59, v61, v62);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v12 = v78;
        v51 = 0LL;
        v83 = 0;
      }
      LOWORD(v13) = -1;
      v14 = 2;
      if ( v79 )
      {
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(v12 + 60) & 0x3FF)),
          v51,
          v79);
        v14 = 2;
        LOWORD(v13) = -1;
      }
    }
  }
  v14 = MiControlAreaRequiresCharge(v12);
  v75 = v14;
  if ( v14 )
    goto LABEL_7;
  CommittedPages = 0LL;
  v23 = -1073740277;
LABEL_24:
  v24 = v82;
  if ( !v82 && v83 == 1 )
  {
    v26 = *(_QWORD *)v78 + 40LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v26, v13) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v26);
    v77 = 0;
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
      v46 = !_BitScanReverse((unsigned int *)&v32, v31);
      v76[2] = v32;
      if ( v46 )
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
            v77 = *(_DWORD *)(v33 + 88) & 0x1FFFF;
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
    KiAbThreadRemoveBoosts((ULONG_PTR)v27, v26, &v77);
    v46 = v27->SpecialApcDisable++ == -1;
    if ( v46 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
      KiCheckForKernelApcDelivery(v36, v35, v37, v38);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v24 = 0LL;
  }
  if ( CommittedPages )
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(v78 + 60) & 0x3FF)),
      v24,
      CommittedPages);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v23;
}
