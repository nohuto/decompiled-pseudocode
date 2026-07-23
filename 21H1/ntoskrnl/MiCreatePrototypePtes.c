/*
 * XREFs of MiCreatePrototypePtes @ 0x1402BC59C
 * Callers:
 *     MiAddViewsForSection @ 0x1402A1CC0 (MiAddViewsForSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiIncrementSubsectionViewCount @ 0x1402A24B0 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1402A33A0 (MiDecrementSubsectionViewCount.c)
 *     MiGetCommittedPages @ 0x1402A36C8 (MiGetCommittedPages.c)
 *     MiControlAreaRequiresCharge @ 0x1402A41F8 (MiControlAreaRequiresCharge.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402BCA00 (MiUpdateSystemProtoPtesTree.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiGetSubsectionCharges @ 0x14054F3D8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054F5FC (MiReturnCrossPartitionSectionCharges.c)
 *     MiInitializePrototypePtes @ 0x14063FAC4 (MiInitializePrototypePtes.c)
 *     MiAllocateFileExtents @ 0x1408CABC0 (MiAllocateFileExtents.c)
 *     MiChargeLargeProtoSubsection @ 0x1408CB320 (MiChargeLargeProtoSubsection.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  char v38; // dl
  __int64 v39; // rdi
  int v40; // ebx
  int v41; // r13d
  int FileExtents; // ebx
  int SubsectionCharges; // eax
  BOOL v44; // r8d
  bool v45; // zf
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // eax
  _BOOL8 v50; // rdx
  __int64 v51; // r15
  struct _KTHREAD *v52; // rbx
  unsigned int SessionId; // edx
  unsigned int v54; // r8d
  __int64 v55; // rcx
  __int64 v56; // r14
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r10
  _DWORD *v64; // r9
  int v65; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v69; // eax
  unsigned __int8 v70; // cl
  struct _KPRCB *v71; // r10
  _DWORD *v72; // r9
  int v73; // eax
  int v74; // [rsp+30h] [rbp-40h]
  _DWORD v75[3]; // [rsp+34h] [rbp-3Ch] BYREF
  int v76; // [rsp+40h] [rbp-30h] BYREF
  __int64 v77; // [rsp+48h] [rbp-28h]
  unsigned int v78; // [rsp+50h] [rbp-20h]
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-18h]
  PVOID P; // [rsp+60h] [rbp-10h]
  BOOL v81; // [rsp+B0h] [rbp+40h]
  int v82; // [rsp+C8h] [rbp+58h]
  unsigned __int8 v83; // [rsp+C8h] [rbp+58h]

  v5 = *(_QWORD *)BugCheckParameter2;
  v82 = 0;
  CurrentThread = KeGetCurrentThread();
  v77 = v5;
  Pool = MiAllocatePool(274, 8LL * a4, 0x74536D4Du);
  P = Pool;
  v9 = Pool;
  if ( !Pool )
    return 3221225626LL;
  v10 = *(_DWORD *)(v5 + 56) & 0x40000000;
  MiInitializePrototypePtes((ULONG_PTR)Pool);
  v81 = *(_QWORD *)(v5 + 64) != 0LL;
  if ( v10 )
  {
    v40 = 5;
    v41 = a2 & 0x400;
    if ( !v41 || (v40 = 69, (unsigned int)MiChargeLargeProtoSubsection(BugCheckParameter2, 1LL)) )
    {
      FileExtents = MiAllocateFileExtents(BugCheckParameter2, v40);
      if ( FileExtents < 0 )
      {
        ExFreePoolWithTag(v9, 0);
        if ( v41 )
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
    v74 = 1;
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
      if ( !v81 )
      {
        v82 = 1;
        CurrentThread->SpecialApcDisable += v13;
        ExAcquirePushLockExclusiveEx(*(_QWORD *)v12 + 40LL, 0LL);
      }
      v16 = (volatile LONG *)(v12 + 72);
      v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
      v18 = v74;
      v19 = v17;
      if ( v74 != 2
        || (!(v44 = v81)
          ? (v45 = CommittedPages == MiGetCommittedPages((_QWORD *)v12))
          : (v45 = CommittedPages == *(_DWORD *)(BugCheckParameter2 + 44)
                                   - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFF)),
            v45) )
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
          if ( v81 )
            *(_WORD *)(BugCheckParameter2 + 32) |= 1u;
          if ( !*(_QWORD *)(BugCheckParameter2 + 8) )
          {
            *(_QWORD *)(BugCheckParameter2 + 8) = P;
            MiUpdateSystemProtoPtesTree(BugCheckParameter2 + (v81 ? 112LL : 56LL), 1LL);
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
                v69 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
                v45 = (v69 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v69;
                if ( v45 )
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
          v38 = v20 | 0x10;
          if ( v74 != 2 )
            v38 = v20;
          v39 = MiDecrementSubsectionViewCount((__int64 *)BugCheckParameter2, v38);
          ExReleaseSpinLockExclusiveFromDpcLevel(v16);
          if ( KiIrqlFlags
            && (KiIrqlFlags & 1) != 0
            && (v70 = KeGetCurrentIrql(), v70 <= 0xFu)
            && (unsigned __int8)v19 <= 0xFu )
          {
            v13 = -1LL;
            if ( v70 >= 2u )
            {
              v71 = KeGetCurrentPrcb();
              v72 = v71->SchedulerAssist;
              v73 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
              v45 = (v73 & v72[5]) == 0;
              v72[5] &= v73;
              if ( v45 )
              {
                KiRemoveSystemWorkPriorityKick(v71);
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
            CommittedPages = v39;
LABEL_61:
          __writecr8(v19);
          goto LABEL_24;
        }
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
            v45 = (v65 & v64[5]) == 0;
            v64[5] &= v65;
            if ( v45 )
            {
              KiRemoveSystemWorkPriorityKick(v63);
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
      v78 = CommittedPages;
      if ( v44 )
        CommittedPages = *(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFFu);
      else
        CommittedPages = MiGetCommittedPages((_QWORD *)v12);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v46 = KeGetCurrentIrql();
          if ( v46 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v46 >= 2u )
          {
            v47 = KeGetCurrentPrcb();
            v48 = v47->SchedulerAssist;
            v49 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
            v45 = (v49 & v48[5]) == 0;
            v48[5] &= v49;
            if ( v45 )
              KiRemoveSystemWorkPriorityKick(v47);
          }
        }
      }
      __writecr8(v19);
      v50 = v81;
      if ( !v81 )
      {
        v51 = *(_QWORD *)v12 + 40LL;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v51, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v51);
        v75[0] = 0;
        v52 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v51) == 1 )
          SessionId = MmGetSessionIdEx((__int64)v52->ApcState.Process);
        else
          SessionId = -1;
        --v52->SpecialApcDisable;
        v83 = ++v52->AbAllocationRegionCount;
        v54 = ((char)v52->AbEntrySummary | (char)v52->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v45 = !_BitScanReverse((unsigned int *)&v55, v54);
          v75[1] = v55;
          if ( v45 )
            goto LABEL_95;
          v56 = (__int64)&v52->LockEntries[v55];
          v54 &= ~(1 << v55);
          if ( (*(_BYTE *)(v56 + 26) & 1) != 0
            && (*(_DWORD *)(v56 + 32) & 1) == 0
            && (*(_QWORD *)(v56 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v51 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v56 + 40) == SessionId )
          {
            *(_BYTE *)(v56 + 26) &= ~1u;
            if ( *(_QWORD *)(v56 + 32) )
              break;
          }
        }
        if ( !v56 )
        {
LABEL_95:
          if ( (*((_DWORD *)&v52->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v52, v51, SessionId, 0LL);
          goto LABEL_107;
        }
        *(_BYTE *)(v56 + 32) |= 2u;
        if ( *(__int64 *)(v56 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v56);
        v75[0] = 0;
        v75[0] = *(_DWORD *)(v56 + 88) & 0x1FFFF;
        *(_DWORD *)(v56 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v56 + 25) &= ~1u;
        *(_QWORD *)(v56 + 32) = 0LL;
        v57 = (signed __int64)(v56 - (unsigned __int64)v52->LockEntries) / 96;
        if ( v83 == 1 )
          v52->AbEntrySummary |= 1 << v57;
        else
          _InterlockedOr8((volatile signed __int8 *)&v52->AbOrphanedEntrySummary, 1 << v57);
LABEL_107:
        --v52->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v52, v51, v75);
        v45 = v52->SpecialApcDisable++ == -1;
        if ( v45 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v52->ApcState.ApcListHead[0].Flink != &v52->152 )
          KiCheckForKernelApcDelivery(v59);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v58, v60, v61);
        v12 = v77;
        v50 = 0LL;
        v82 = 0;
      }
      LOWORD(v13) = -1;
      v14 = 2;
      if ( v78 )
      {
        MiReturnCrossPartitionSectionCharges(
          *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(v12 + 60) & 0x3FF)),
          v50,
          v78);
        v14 = 2;
        LOWORD(v13) = -1;
      }
    }
  }
  v14 = MiControlAreaRequiresCharge(v12);
  v74 = v14;
  if ( v14 )
    goto LABEL_7;
  CommittedPages = 0LL;
  v23 = -1073740277;
LABEL_24:
  v24 = v81;
  if ( !v81 && v82 == 1 )
  {
    v26 = *(_QWORD *)v77 + 40LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v26, v13) & 6) == 2 )
      ExfTryToWakePushLock(v26);
    v76 = 0;
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
      v45 = !_BitScanReverse((unsigned int *)&v31, v30);
      v75[2] = v31;
      if ( v45 )
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
            v76 = *(_DWORD *)(v32 + 88) & 0x1FFFF;
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
    KiAbThreadRemoveBoosts((ULONG_PTR)v27, v26, &v76);
    v45 = v27->SpecialApcDisable++ == -1;
    if ( v45 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
      KiCheckForKernelApcDelivery(v35);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v34, v36, v37);
    v24 = 0LL;
  }
  if ( CommittedPages )
    MiReturnCrossPartitionSectionCharges(
      *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(v77 + 60) & 0x3FF)),
      v24,
      CommittedPages);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v23;
}
