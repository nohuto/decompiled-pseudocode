/*
 * XREFs of MiAddViewsForSection @ 0x140320340
 * Callers:
 *     MiReferenceDataSubsections @ 0x140307E7C (MiReferenceDataSubsections.c)
 *     MmMapViewInSystemCache @ 0x14031BB30 (MmMapViewInSystemCache.c)
 *     MiCommitPagefileBackedSection @ 0x1405FAC44 (MiCommitPagefileBackedSection.c)
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 *     MiPfPrepareSequentialReadList @ 0x1407051B0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140706CF0 (MiPfPrepareReadList.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402C1A70 (ExpAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiCreatePrototypePtes @ 0x140302B48 (MiCreatePrototypePtes.c)
 *     MiCheckControlArea @ 0x14031F800 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x14031FE10 (MiDecrementSubsections.c)
 *     MiReferenceActiveSubsection @ 0x140320A50 (MiReferenceActiveSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5FBC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAllocateFileExtents @ 0x1408CF670 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiAddViewsForSection(
        __int64 *BugCheckParameter2,
        unsigned __int64 a2,
        _DWORD *SchedulerAssist,
        __int64 a4)
{
  __int64 v4; // r15
  unsigned int v5; // r14d
  unsigned int v6; // edi
  ULONG_PTR v8; // rsi
  volatile signed __int32 *v9; // rcx
  unsigned __int8 CurrentIrql; // r12
  int active; // eax
  unsigned __int64 v12; // rcx
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  __int64 result; // rax
  ULONG_PTR v16; // rsi
  struct _KTHREAD *v17; // rdi
  unsigned __int8 v18; // r15
  unsigned int v19; // edx
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rbx
  unsigned int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  ULONG_PTR SessionId; // r9
  ULONG_PTR v28; // r10
  unsigned int v29; // edx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  unsigned __int8 v33; // al
  unsigned __int8 v34; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v36; // r9
  int v37; // edx
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r11
  _DWORD *v40; // r10
  int v41; // edx
  volatile LONG *v42; // rsi
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // edx
  unsigned int v47; // r12d
  __int64 v48; // rcx
  ULONG_PTR v49; // r9
  ULONG_PTR v50; // r10
  unsigned int v51; // r8d
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rdx
  unsigned __int8 v55; // al
  __int64 v56; // r13
  unsigned __int8 v57; // cl
  KIRQL v58; // r14
  struct _KPRCB *v59; // r9
  int v60; // eax
  _DWORD *v61; // r8
  int v62; // eax
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r10
  _DWORD *v65; // r9
  int v66; // edx
  unsigned __int8 v67; // al
  struct _KPRCB *v68; // r10
  _DWORD *v69; // r9
  int v70; // edx
  __int64 v71; // rcx
  unsigned int v72; // r8d
  unsigned int v73; // edx
  __int64 v74; // rcx
  int v75; // eax
  __int64 v76; // rcx
  KIRQL v77; // al
  _DWORD *v78; // r8
  unsigned int v79; // [rsp+30h] [rbp-69h]
  char v80; // [rsp+34h] [rbp-65h]
  ULONG_PTR BugCheckParameter2a; // [rsp+38h] [rbp-61h]
  ULONG_PTR BugCheckParameter2b; // [rsp+38h] [rbp-61h]
  ULONG_PTR BugCheckParameter2c; // [rsp+38h] [rbp-61h]
  int BugCheckParameter3; // [rsp+40h] [rbp-59h]
  __int64 v85; // [rsp+48h] [rbp-51h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-49h]
  int v87; // [rsp+74h] [rbp-25h]
  __int64 v88; // [rsp+78h] [rbp-21h]
  ULONG_PTR v89; // [rsp+80h] [rbp-19h]
  __int64 v90; // [rsp+80h] [rbp-19h]
  struct _KTHREAD *BugCheckParameter1; // [rsp+88h] [rbp-11h]
  int v92; // [rsp+90h] [rbp-9h]
  __int64 v93; // [rsp+98h] [rbp-1h]
  __int64 v94; // [rsp+98h] [rbp-1h]
  _DWORD *v95; // [rsp+A0h] [rbp+7h]
  void *retaddr; // [rsp+F8h] [rbp+5Fh]
  int v97; // [rsp+100h] [rbp+67h]
  struct _KTHREAD *v98; // [rsp+100h] [rbp+67h]
  unsigned __int8 v100; // [rsp+110h] [rbp+77h]
  unsigned __int8 v101; // [rsp+110h] [rbp+77h]
  KIRQL v102; // [rsp+110h] [rbp+77h]
  unsigned __int8 v103; // [rsp+110h] [rbp+77h]
  unsigned int v104; // [rsp+118h] [rbp+7Fh]
  unsigned int v105; // [rsp+118h] [rbp+7Fh]

  v4 = *BugCheckParameter2;
  v5 = 0;
  v6 = (unsigned int)SchedulerAssist;
  v79 = (unsigned int)SchedulerAssist;
  v88 = 0LL;
  v8 = (ULONG_PTR)BugCheckParameter2;
  if ( *(_QWORD *)(*BugCheckParameter2 + 64) )
  {
    v97 = 1;
    CurrentThread = 0LL;
    v85 = 0LL;
  }
  else
  {
    v25 = *(_QWORD *)v4;
    v97 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v85 = v25;
    ExAcquirePushLockExclusiveEx(v25 + 40, 0LL);
  }
  v9 = (volatile signed __int32 *)(v4 + 72);
  v95 = (_DWORD *)(v4 + 72);
  v87 = v6 & 0x180;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v9 = (volatile signed __int32 *)(v4 + 72);
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v9, CurrentIrql, (__int64)SchedulerAssist, a4);
  if ( (v6 & 1) != 0 )
  {
    ++*(_QWORD *)(v4 + 40);
    ++*(_DWORD *)(v4 + 88);
    v6 |= 4u;
    v79 = v6;
  }
  BugCheckParameter3 = -1;
  v80 = CurrentIrql + 1;
  while ( 1 )
  {
    v104 = *(_DWORD *)(v8 + 44);
    v89 = v8;
    if ( *(_QWORD *)(v8 + 8) )
      break;
    v92 = *(_DWORD *)(v8 + 52) & 0x3FFFFFFF;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v34 = KeGetCurrentIrql();
        if ( v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v36 = CurrentPrcb->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << v80);
          v20 = (v37 & v36[5]) == 0;
          v36[5] &= v37;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( !v97 )
    {
      v26 = v85 + 40;
      BugCheckParameter2a = v85 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v85 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v26);
        v26 = v85 + 40;
      }
      BugCheckParameter1 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v26) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx(BugCheckParameter1->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      v28 = (ULONG_PTR)BugCheckParameter1;
      --BugCheckParameter1->SpecialApcDisable;
      v100 = ++BugCheckParameter1->AbAllocationRegionCount;
      v29 = (*(char *)(v28 + 792) | *(char *)(v28 + 870)) ^ 0x3F;
      v20 = !_BitScanReverse((unsigned int *)&v30, v29);
      if ( v20 )
        goto LABEL_80;
      while ( 1 )
      {
        v31 = ~(1 << v30);
        v32 = (__int64)&BugCheckParameter1->LockEntries[v30];
        v29 &= v31;
        v93 = v32;
        if ( (*(_BYTE *)(v32 + 26) & 1) != 0
          && (*(_DWORD *)(v32 + 32) & 1) == 0
          && (*(_QWORD *)(v32 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2a & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v32 + 40) == (_DWORD)SessionId )
        {
          *(_BYTE *)(v32 + 26) &= ~1u;
          if ( *(_QWORD *)(v32 + 32) )
            break;
        }
        v20 = !_BitScanReverse((unsigned int *)&v30, v29);
        if ( v20 )
          goto LABEL_80;
      }
      if ( !v32 )
      {
LABEL_80:
        if ( (*((_DWORD *)&BugCheckParameter1->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)BugCheckParameter1, BugCheckParameter2a, SessionId, 0LL);
      }
      else
      {
        *(_BYTE *)(v32 + 32) |= 2u;
        if ( *(__int64 *)(v32 + 32) < 0 )
        {
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v32);
          v32 = v93;
          v28 = (ULONG_PTR)BugCheckParameter1;
        }
        *(_DWORD *)(v32 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v32 + 25) &= ~1u;
        *(_QWORD *)(v32 + 32) = 0LL;
        v33 = 1 << ((v32 - *(_QWORD *)(v28 + 800)) / 96);
        if ( v100 == 1 )
          *(_BYTE *)(v28 + 792) |= v33;
        else
          _InterlockedOr8((volatile signed __int8 *)(v28 + 870), v33);
      }
      --*(_BYTE *)(v28 + 794);
      KiAbThreadRemoveBoosts(v28);
      v20 = BugCheckParameter1->SpecialApcDisable++ == -1;
      if ( v20
        && ($C459BD0D405E8E46662177FB3D0A143F *)BugCheckParameter1->ApcState.ApcListHead[0].Flink != &BugCheckParameter1->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      KiLeaveGuardedRegionUnsafe(CurrentThread);
    }
    if ( (v6 & 2) != 0 )
      return 3221225865LL;
    result = MiCreatePrototypePtes(v8, v79, v104 - v92, v104);
    v105 = result;
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741302 )
        goto LABEL_191;
      if ( !v97 )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v85 + 40, 0LL);
      }
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
      goto LABEL_56;
    }
    if ( !v97 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v85 + 40, 0LL);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
      goto LABEL_14;
    }
LABEL_48:
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
LABEL_14:
    if ( a2 )
    {
      v12 = *(unsigned int *)(v8 + 44);
      if ( a2 <= v12 )
        goto LABEL_16;
      a2 -= v12;
    }
    v8 = *(_QWORD *)(v8 + 16);
    v88 = v89;
    if ( !v97 )
    {
      v88 = v89;
      v79 = v87 | 4;
    }
LABEL_56:
    if ( !v8 )
    {
LABEL_16:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v95, retaddr);
      else
        *v95 = 0;
      v13 = KeGetCurrentPrcb();
      v14 = v13->SchedulerAssist;
      if ( v14 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v62 = v14[6] - 1;
          v14[6] = v62;
          if ( !v62 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v63 = KeGetCurrentIrql();
          if ( v63 <= 0xFu && CurrentIrql <= 0xFu && v63 >= 2u )
          {
            v64 = KeGetCurrentPrcb();
            v65 = v64->SchedulerAssist;
            v66 = ~(unsigned __int16)(-1LL << v80);
            v20 = (v66 & v65[5]) == 0;
            v65[5] &= v66;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(v64);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v97 )
        return 0LL;
      v16 = v85 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v85 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v16);
      v17 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v16) == 1 )
        BugCheckParameter3 = MmGetSessionIdEx(v17->ApcState.Process);
      --v17->SpecialApcDisable;
      v18 = ++v17->AbAllocationRegionCount;
      v19 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
      v20 = !_BitScanReverse((unsigned int *)&v21, v19);
      if ( v20 )
      {
LABEL_50:
        v23 = BugCheckParameter3;
      }
      else
      {
        while ( 1 )
        {
          v22 = (__int64)&v17->LockEntries[v21];
          v19 &= ~(1 << v21);
          if ( (*(_BYTE *)(v22 + 26) & 1) != 0
            && (*(_DWORD *)(v22 + 32) & 1) == 0
            && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v16 & 0x7FFFFFFFFFFFFFFCLL) )
          {
            v23 = BugCheckParameter3;
            if ( *(_DWORD *)(v22 + 40) == BugCheckParameter3 )
            {
              *(_BYTE *)(v22 + 26) &= ~1u;
              if ( *(_QWORD *)(v22 + 32) )
                break;
            }
          }
          v20 = !_BitScanReverse((unsigned int *)&v21, v19);
          if ( v20 )
            goto LABEL_50;
        }
        if ( v22 )
        {
          *(_BYTE *)(v22 + 32) |= 2u;
          if ( *(__int64 *)(v22 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22);
          *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v22 + 25) &= ~1u;
          *(_QWORD *)(v22 + 32) = 0LL;
          v24 = (signed __int64)(v22 - (unsigned __int64)v17->LockEntries) / 96;
          if ( v18 == 1 )
            v17->AbEntrySummary |= 1 << v24;
          else
            _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v24);
LABEL_38:
          --v17->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v17);
          v20 = v17->SpecialApcDisable++ == -1;
          if ( v20 && ($C459BD0D405E8E46662177FB3D0A143F *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
            KiCheckForKernelApcDelivery();
          KiLeaveGuardedRegionUnsafe(CurrentThread);
          return 0LL;
        }
      }
      if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v17, v16, v23, 0LL);
      goto LABEL_38;
    }
  }
  if ( (v6 & 0x400) == 0 )
  {
    active = MiReferenceActiveSubsection(v8);
    v105 = active;
    if ( active < 0 )
    {
      if ( active != -1073741302 )
      {
        v42 = (volatile LONG *)(v4 + 72);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v43 = KeGetCurrentIrql();
            if ( v43 <= 0xFu && CurrentIrql <= 0xFu && v43 >= 2u )
            {
              v44 = KeGetCurrentPrcb();
              v45 = v44->SchedulerAssist;
              v46 = ~(unsigned __int16)(-1LL << v80);
              v20 = (v46 & v45[5]) == 0;
              v45[5] &= v46;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v44);
            }
          }
        }
        __writecr8(CurrentIrql);
        v47 = v97;
        if ( !v97 )
        {
          v48 = v85 + 40;
          BugCheckParameter2b = v85 + 40;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v85 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          {
            ExfTryToWakePushLock(v48);
            v48 = v85 + 40;
          }
          v98 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v48) == 1 )
            v49 = (unsigned int)MmGetSessionIdEx(v98->ApcState.Process);
          else
            v49 = 0xFFFFFFFFLL;
          v50 = (ULONG_PTR)v98;
          --v98->SpecialApcDisable;
          v101 = ++v98->AbAllocationRegionCount;
          v51 = ((char)v98->AbEntrySummary | (char)v98->AbOrphanedEntrySummary) ^ 0x3F;
          v20 = !_BitScanReverse((unsigned int *)&v52, v51);
          if ( v20 )
            goto LABEL_135;
          while ( 1 )
          {
            v53 = (__int64)&v98->LockEntries[v52];
            v94 = v53;
            v51 &= ~(1 << v52);
            if ( (*(_BYTE *)(v53 + 26) & 1) != 0
              && (*(_DWORD *)(v53 + 32) & 1) == 0
              && (*(_QWORD *)(v53 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2b & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v53 + 40) == (_DWORD)v49 )
            {
              *(_BYTE *)(v53 + 26) &= ~1u;
              if ( *(_QWORD *)(v53 + 32) )
                break;
            }
            v20 = !_BitScanReverse((unsigned int *)&v52, v51);
            if ( v20 )
              goto LABEL_135;
          }
          if ( !v53 )
          {
LABEL_135:
            if ( (*((_DWORD *)&v98->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v98, BugCheckParameter2b, v49, 0LL);
          }
          else
          {
            *(_BYTE *)(v53 + 32) |= 2u;
            if ( *(__int64 *)(v53 + 32) < 0 )
            {
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v53);
              v50 = (ULONG_PTR)v98;
              v53 = v94;
            }
            *(_DWORD *)(v53 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v53 + 25) &= ~1u;
            *(_QWORD *)(v53 + 32) = 0LL;
            v54 = (__int64)((unsigned __int128)((v53 - *(_QWORD *)(v50 + 800)) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
            v55 = 1 << (v54 + (v54 < 0));
            if ( v101 == 1 )
            {
              *(_BYTE *)(v50 + 792) |= v55;
              goto LABEL_138;
            }
LABEL_137:
            _InterlockedOr8((volatile signed __int8 *)(v50 + 870), v55);
          }
          goto LABEL_138;
        }
        goto LABEL_142;
      }
      goto LABEL_56;
    }
    v88 = v8;
    if ( v97 != 1 || (*(_DWORD *)(v8 + 52) & 0x40000000) == 0 )
      goto LABEL_14;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v38 = KeGetCurrentIrql();
        if ( v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = v39->SchedulerAssist;
          v41 = ~(unsigned __int16)(-1LL << v80);
          v20 = (v41 & v40[5]) == 0;
          v40[5] &= v41;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
    }
    __writecr8(CurrentIrql);
    result = MiAllocateFileExtents(v8, 0);
    v105 = result;
    if ( (int)result < 0 )
    {
LABEL_191:
      v47 = v97;
      v42 = (volatile LONG *)(v4 + 72);
      goto LABEL_143;
    }
    goto LABEL_48;
  }
  v42 = (volatile LONG *)(v4 + 72);
  v105 = -1073741800;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v67 = KeGetCurrentIrql();
      if ( v67 <= 0xFu && CurrentIrql <= 0xFu && v67 >= 2u )
      {
        v68 = KeGetCurrentPrcb();
        v69 = v68->SchedulerAssist;
        v70 = ~(unsigned __int16)(-1LL << v80);
        v20 = (v70 & v69[5]) == 0;
        v69[5] &= v70;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v68);
      }
    }
  }
  __writecr8(CurrentIrql);
  v47 = v97;
  if ( !v97 )
  {
    v71 = v85 + 40;
    BugCheckParameter2c = v85 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v85 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    {
      ExfTryToWakePushLock(v71);
      v71 = v85 + 40;
    }
    v98 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v71) == 1 )
      v72 = MmGetSessionIdEx(v98->ApcState.Process);
    else
      v72 = -1;
    v50 = (ULONG_PTR)v98;
    --v98->SpecialApcDisable;
    v103 = ++v98->AbAllocationRegionCount;
    v73 = ((char)v98->AbEntrySummary | (char)v98->AbOrphanedEntrySummary) ^ 0x3F;
    v20 = !_BitScanReverse((unsigned int *)&v74, v73);
    if ( v20 )
      goto LABEL_189;
    while ( 1 )
    {
      v75 = ~(1 << v74);
      v76 = (__int64)&v98->LockEntries[v74];
      v73 &= v75;
      v90 = v76;
      if ( (*(_BYTE *)(v76 + 26) & 1) != 0
        && (*(_DWORD *)(v76 + 32) & 1) == 0
        && (*(_QWORD *)(v76 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2c & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v76 + 40) == v72 )
      {
        *(_BYTE *)(v76 + 26) &= ~1u;
        if ( *(_QWORD *)(v76 + 32) )
          break;
      }
      v20 = !_BitScanReverse((unsigned int *)&v74, v73);
      if ( v20 )
        goto LABEL_189;
    }
    if ( !v76 )
    {
LABEL_189:
      if ( (*((_DWORD *)&v98->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v98, BugCheckParameter2c, v72, 0LL);
    }
    else
    {
      *(_BYTE *)(v76 + 32) |= 2u;
      if ( *(__int64 *)(v76 + 32) < 0 )
      {
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v76);
        v50 = (ULONG_PTR)v98;
        v76 = v90;
      }
      *(_DWORD *)(v76 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v76 + 25) &= ~1u;
      *(_QWORD *)(v76 + 32) = 0LL;
      v55 = 1 << ((v76 - *(_QWORD *)(v50 + 800)) / 96);
      if ( v103 != 1 )
        goto LABEL_137;
      *(_BYTE *)(v50 + 792) |= v55;
    }
LABEL_138:
    --*(_BYTE *)(v50 + 794);
    KiAbThreadRemoveBoosts(v50);
    v20 = v98->SpecialApcDisable++ == -1;
    if ( v20 && ($C459BD0D405E8E46662177FB3D0A143F *)v98->ApcState.ApcListHead[0].Flink != &v98->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
LABEL_142:
  result = v105;
LABEL_143:
  if ( v88 )
  {
    v102 = ExAcquireSpinLockExclusive(v42);
    if ( (v6 & 5) == 0 )
      v5 = v87 | 8;
    v56 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2, v88, v5);
    ExReleaseSpinLockExclusiveFromDpcLevel(v42);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v57 = KeGetCurrentIrql(), v57 <= 0xFu) )
    {
      v58 = v102;
      if ( v102 <= 0xFu && v57 >= 2u )
      {
        v59 = KeGetCurrentPrcb();
        v60 = ~(unsigned __int16)(-1LL << (v102 + 1));
        v61 = v59->SchedulerAssist;
        v20 = (v60 & v61[5]) == 0;
        v61[5] &= v60;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v59);
      }
    }
    else
    {
      v58 = v102;
    }
    __writecr8(v58);
    if ( v56 )
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(v4 + 60) & 0x3FF)), v47, v56);
    result = v105;
  }
  if ( (v6 & 1) != 0 )
  {
    v77 = ExAcquireSpinLockExclusive(v42);
    --*(_QWORD *)(v4 + 40);
    --*(_DWORD *)(v4 + 88);
    MiCheckControlArea(v4, v77, v78);
    return v105;
  }
  return result;
}
