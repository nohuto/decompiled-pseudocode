/*
 * XREFs of MiAddViewsForSection @ 0x1402A1CC0
 * Callers:
 *     MmMapViewInSystemCache @ 0x14022A1F0 (MmMapViewInSystemCache.c)
 *     MiReferenceDataSubsections @ 0x1402BD908 (MiReferenceDataSubsections.c)
 *     MiPfPrepareSequentialReadList @ 0x14062E990 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14062F350 (MiPfPrepareReadList.c)
 *     MiMapViewOfDataSection @ 0x140632720 (MiMapViewOfDataSection.c)
 *     MiCommitPagefileBackedSection @ 0x140640EBC (MiCommitPagefileBackedSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14026C5F0 (ExpAcquireSpinLockExclusive.c)
 *     MiReferenceActiveSubsection @ 0x1402A23D0 (MiReferenceActiveSubsection.c)
 *     MiDecrementSubsections @ 0x1402A32F0 (MiDecrementSubsections.c)
 *     MiCheckControlArea @ 0x1402A38D0 (MiCheckControlArea.c)
 *     MiCreatePrototypePtes @ 0x1402BC59C (MiCreatePrototypePtes.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054F5FC (MiReturnCrossPartitionSectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B00F4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAllocateFileExtents @ 0x1408CABC0 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiAddViewsForSection(
        __int64 **BugCheckParameter2,
        unsigned __int64 a2,
        _DWORD *SchedulerAssist,
        _DWORD *a4)
{
  __int64 *v4; // r15
  __int16 v5; // di
  ULONG_PTR v7; // rsi
  volatile signed __int32 *v8; // rcx
  unsigned __int8 CurrentIrql; // r12
  int active; // eax
  unsigned __int64 v11; // rcx
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  __int64 result; // rax
  unsigned __int64 v15; // rsi
  struct _KTHREAD *v16; // rdi
  unsigned __int8 v17; // r15
  unsigned int v18; // edx
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rbx
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  ULONG_PTR SessionId; // r9
  ULONG_PTR v31; // r10
  __int64 v32; // r11
  unsigned int v33; // edx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  unsigned __int8 v37; // al
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  ULONG_PTR v41; // rcx
  unsigned __int8 v42; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v44; // r9
  int v45; // edx
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r11
  _DWORD *v48; // r10
  int v49; // edx
  volatile LONG *v50; // rsi
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // edx
  unsigned int v55; // r12d
  unsigned __int64 v56; // rcx
  ULONG_PTR v57; // r9
  ULONG_PTR v58; // r10
  __int64 v59; // r11
  unsigned int v60; // r8d
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rdx
  unsigned __int8 v64; // al
  int *v65; // r8
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // r13
  unsigned __int8 v70; // cl
  KIRQL v71; // r14
  struct _KPRCB *v72; // r9
  int v73; // eax
  _DWORD *v74; // r8
  int v75; // eax
  unsigned __int8 v76; // al
  struct _KPRCB *v77; // r10
  _DWORD *v78; // r9
  int v79; // edx
  unsigned __int8 v80; // al
  struct _KPRCB *v81; // r10
  _DWORD *v82; // r9
  int v83; // edx
  unsigned __int64 v84; // rcx
  unsigned int v85; // r8d
  unsigned int v86; // edx
  __int64 v87; // rcx
  int v88; // eax
  __int64 v89; // rcx
  unsigned __int8 v90; // al
  KIRQL v91; // al
  char v92; // [rsp+34h] [rbp-65h]
  ULONG_PTR BugCheckParameter2a; // [rsp+38h] [rbp-61h]
  ULONG_PTR BugCheckParameter2b; // [rsp+38h] [rbp-61h]
  ULONG_PTR BugCheckParameter2c; // [rsp+38h] [rbp-61h]
  int BugCheckParameter3; // [rsp+40h] [rbp-59h]
  int BugCheckParameter3_4; // [rsp+44h] [rbp-55h] BYREF
  __int64 v98; // [rsp+48h] [rbp-51h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-49h]
  int v100; // [rsp+58h] [rbp-41h]
  int v101; // [rsp+5Ch] [rbp-3Dh]
  int v102; // [rsp+60h] [rbp-39h] BYREF
  int v103; // [rsp+64h] [rbp-35h]
  int v104; // [rsp+68h] [rbp-31h] BYREF
  int v105; // [rsp+6Ch] [rbp-2Dh]
  _DWORD v106[2]; // [rsp+70h] [rbp-29h] BYREF
  ULONG_PTR v107; // [rsp+78h] [rbp-21h]
  __int64 v108; // [rsp+80h] [rbp-19h]
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-11h]
  int v110; // [rsp+90h] [rbp-9h]
  __int64 v111; // [rsp+98h] [rbp-1h]
  _DWORD *v112; // [rsp+A0h] [rbp+7h]
  __int64 v113; // [rsp+A8h] [rbp+Fh]
  void *retaddr; // [rsp+F8h] [rbp+5Fh]
  int v115; // [rsp+100h] [rbp+67h]
  struct _KTHREAD *v116; // [rsp+100h] [rbp+67h]
  char v118; // [rsp+110h] [rbp+77h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+110h] [rbp+77h]
  KIRQL v120; // [rsp+110h] [rbp+77h]
  unsigned __int8 v121; // [rsp+110h] [rbp+77h]
  unsigned int v122; // [rsp+118h] [rbp+7Fh]

  v4 = *BugCheckParameter2;
  v5 = (__int16)SchedulerAssist;
  v107 = 0LL;
  v7 = (ULONG_PTR)BugCheckParameter2;
  if ( v4[8] )
  {
    v115 = 1;
    CurrentThread = 0LL;
    v98 = 0LL;
  }
  else
  {
    v28 = *v4;
    v115 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v98 = v28;
    ExAcquirePushLockExclusiveEx(v28 + 40, 0LL);
  }
  v8 = (volatile signed __int32 *)(v4 + 9);
  v112 = v4 + 9;
  v106[1] = v5 & 0x180;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v8 = (volatile signed __int32 *)(v4 + 9);
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v8, CurrentIrql, (__int64)SchedulerAssist, a4);
  if ( (v5 & 1) != 0 )
  {
    ++v4[5];
    ++*((_DWORD *)v4 + 22);
    v5 |= 4u;
  }
  BugCheckParameter3 = -1;
  v92 = CurrentIrql + 1;
  v113 = 0x7FFFFFFFFFFFFFFCLL;
  while ( 1 )
  {
    v108 = v7;
    if ( *(_QWORD *)(v7 + 8) )
      break;
    v110 = *(_DWORD *)(v7 + 52) & 0x3FFFFFFF;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4 + 18);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v42 = KeGetCurrentIrql();
        if ( v42 <= 0xFu && CurrentIrql <= 0xFu && v42 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v44 = CurrentPrcb->SchedulerAssist;
          v45 = ~(unsigned __int16)(-1LL << v92);
          v19 = (v45 & v44[5]) == 0;
          v44[5] &= v45;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( !v115 )
    {
      v29 = v98 + 40;
      BugCheckParameter2a = v98 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v98 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v29);
        v29 = BugCheckParameter2a;
      }
      BugCheckParameter3_4 = 0;
      BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v29) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx(*(_QWORD *)(BugCheckParameter1 + 184));
      else
        SessionId = 0xFFFFFFFFLL;
      v31 = BugCheckParameter1;
      --*(_WORD *)(BugCheckParameter1 + 486);
      ++*(_BYTE *)(v31 + 794);
      v32 = BugCheckParameter2a;
      v118 = *(_BYTE *)(v31 + 794);
      v33 = (*(char *)(v31 + 792) | *(char *)(v31 + 870)) ^ 0x3F;
      v19 = !_BitScanReverse((unsigned int *)&v34, v33);
      v100 = v34;
      if ( v19 )
        goto LABEL_80;
      while ( 1 )
      {
        v35 = ~(1 << v34);
        v36 = *(_QWORD *)(v31 + 800) + 96 * v34;
        v33 &= v35;
        v111 = v36;
        if ( (*(_BYTE *)(v36 + 26) & 1) != 0
          && (*(_DWORD *)(v36 + 32) & 1) == 0
          && (v113 & *(_QWORD *)(v36 + 32)) == (BugCheckParameter2a & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v36 + 40) == (_DWORD)SessionId )
        {
          *(_BYTE *)(v36 + 26) &= ~1u;
          if ( *(_QWORD *)(v36 + 32) )
            break;
        }
        v19 = !_BitScanReverse((unsigned int *)&v34, v33);
        v100 = v34;
        if ( v19 )
          goto LABEL_80;
      }
      if ( !v36 )
      {
LABEL_80:
        if ( (*(_DWORD *)(v31 + 120) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, v31, BugCheckParameter2a, SessionId, 0LL);
      }
      else
      {
        *(_BYTE *)(v36 + 32) |= 2u;
        if ( *(__int64 *)(v36 + 32) < 0 )
        {
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v36);
          v36 = v111;
          v31 = BugCheckParameter1;
          v32 = BugCheckParameter2a;
        }
        BugCheckParameter3_4 = 0;
        BugCheckParameter3_4 = *(_DWORD *)(v36 + 88) & 0x1FFFF;
        *(_DWORD *)(v36 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v36 + 25) &= ~1u;
        *(_QWORD *)(v36 + 32) = 0LL;
        v37 = 1 << ((v36 - *(_QWORD *)(v31 + 800)) / 96);
        if ( v118 == 1 )
          *(_BYTE *)(v31 + 792) |= v37;
        else
          _InterlockedOr8((volatile signed __int8 *)(v31 + 870), v37);
      }
      --*(_BYTE *)(v31 + 794);
      KiAbThreadRemoveBoosts(v31, v32, &BugCheckParameter3_4);
      v41 = BugCheckParameter1;
      v19 = (*(_WORD *)(BugCheckParameter1 + 486))++ == 0xFFFF;
      if ( v19 && *(_QWORD *)(v41 + 152) != v41 + 152 )
        KiCheckForKernelApcDelivery(v41);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v38, v39, v40);
    }
    if ( (v5 & 2) != 0 )
      return 3221225865LL;
    result = MiCreatePrototypePtes(v7);
    v122 = result;
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741302 )
        goto LABEL_191;
      if ( !v115 )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v98 + 40, 0LL);
      }
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v4 + 18);
      goto LABEL_56;
    }
    if ( !v115 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v98 + 40, 0LL);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v4 + 18);
      goto LABEL_14;
    }
LABEL_48:
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v4 + 18);
LABEL_14:
    if ( a2 )
    {
      v11 = *(unsigned int *)(v7 + 44);
      if ( a2 <= v11 )
        goto LABEL_16;
      a2 -= v11;
    }
    v7 = *(_QWORD *)(v7 + 16);
    v107 = v108;
    if ( !v115 )
      v107 = v108;
LABEL_56:
    if ( !v7 )
    {
LABEL_16:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v112, retaddr);
      else
        *v112 = 0;
      v12 = KeGetCurrentPrcb();
      v13 = v12->SchedulerAssist;
      if ( v13 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v75 = v13[6] - 1;
          v13[6] = v75;
          if ( !v75 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v76 = KeGetCurrentIrql();
          if ( v76 <= 0xFu && CurrentIrql <= 0xFu && v76 >= 2u )
          {
            v77 = KeGetCurrentPrcb();
            v78 = v77->SchedulerAssist;
            v79 = ~(unsigned __int16)(-1LL << v92);
            v19 = (v79 & v78[5]) == 0;
            v78[5] &= v79;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(v77);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v115 )
        return 0LL;
      v15 = v98 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v98 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v15);
      v104 = 0;
      v16 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v15) == 1 )
        BugCheckParameter3 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
      --v16->SpecialApcDisable;
      v17 = ++v16->AbAllocationRegionCount;
      v18 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
      v19 = !_BitScanReverse((unsigned int *)&v20, v18);
      v103 = v20;
      if ( v19 )
      {
LABEL_50:
        v22 = BugCheckParameter3;
      }
      else
      {
        while ( 1 )
        {
          v21 = (__int64)&v16->LockEntries[v20];
          v18 &= ~(1 << v20);
          if ( (*(_BYTE *)(v21 + 26) & 1) != 0
            && (*(_DWORD *)(v21 + 32) & 1) == 0
            && (*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v15 & 0x7FFFFFFFFFFFFFFCLL) )
          {
            v22 = BugCheckParameter3;
            if ( *(_DWORD *)(v21 + 40) == BugCheckParameter3 )
            {
              *(_BYTE *)(v21 + 26) &= ~1u;
              if ( *(_QWORD *)(v21 + 32) )
                break;
            }
          }
          v19 = !_BitScanReverse((unsigned int *)&v20, v18);
          v103 = v20;
          if ( v19 )
            goto LABEL_50;
        }
        if ( v21 )
        {
          *(_BYTE *)(v21 + 32) |= 2u;
          if ( *(__int64 *)(v21 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v21);
          v104 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
          *(_DWORD *)(v21 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v21 + 25) &= ~1u;
          *(_QWORD *)(v21 + 32) = 0LL;
          v23 = (signed __int64)(v21 - (unsigned __int64)v16->LockEntries) / 96;
          if ( v17 == 1 )
            v16->AbEntrySummary |= 1 << v23;
          else
            _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v23);
LABEL_38:
          --v16->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v16, v15, &v104);
          v19 = v16->SpecialApcDisable++ == -1;
          if ( v19 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
            KiCheckForKernelApcDelivery(v25);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v24, v26, v27);
          return 0LL;
        }
      }
      if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v16, v15, v22, 0LL);
      goto LABEL_38;
    }
  }
  if ( (v5 & 0x400) == 0 )
  {
    active = MiReferenceActiveSubsection(v7);
    v122 = active;
    if ( active < 0 )
    {
      if ( active != -1073741302 )
      {
        v50 = (volatile LONG *)(v4 + 9);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4 + 18);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v51 = KeGetCurrentIrql();
            if ( v51 <= 0xFu && CurrentIrql <= 0xFu && v51 >= 2u )
            {
              v52 = KeGetCurrentPrcb();
              v53 = v52->SchedulerAssist;
              v54 = ~(unsigned __int16)(-1LL << v92);
              v19 = (v54 & v53[5]) == 0;
              v53[5] &= v54;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick(v52);
            }
          }
        }
        __writecr8(CurrentIrql);
        v55 = v115;
        if ( !v115 )
        {
          v56 = v98 + 40;
          BugCheckParameter2b = v98 + 40;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v98 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          {
            ExfTryToWakePushLock(v56);
            v56 = BugCheckParameter2b;
          }
          v102 = 0;
          v116 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v56) == 1 )
            v57 = (unsigned int)MmGetSessionIdEx((__int64)v116->ApcState.Process);
          else
            v57 = 0xFFFFFFFFLL;
          v58 = (ULONG_PTR)v116;
          --v116->SpecialApcDisable;
          ++v116->AbAllocationRegionCount;
          v59 = BugCheckParameter2b;
          AbAllocationRegionCount = v116->AbAllocationRegionCount;
          v108 = BugCheckParameter2b & 0x7FFFFFFFFFFFFFFCLL;
          v60 = ((char)v116->AbEntrySummary | (char)v116->AbOrphanedEntrySummary) ^ 0x3F;
          v19 = !_BitScanReverse((unsigned int *)&v61, v60);
          v101 = v61;
          if ( v19 )
            goto LABEL_135;
          while ( 1 )
          {
            v62 = (__int64)&v116->LockEntries[v61];
            v111 = v62;
            v60 &= ~(1 << v61);
            if ( (*(_BYTE *)(v62 + 26) & 1) != 0
              && (*(_DWORD *)(v62 + 32) & 1) == 0
              && (*(_QWORD *)(v62 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v108
              && *(_DWORD *)(v62 + 40) == (_DWORD)v57 )
            {
              *(_BYTE *)(v62 + 26) &= ~1u;
              if ( *(_QWORD *)(v62 + 32) )
                break;
            }
            v19 = !_BitScanReverse((unsigned int *)&v61, v60);
            v101 = v61;
            if ( v19 )
              goto LABEL_135;
          }
          if ( !v62 )
          {
LABEL_135:
            if ( (*((_DWORD *)&v116->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v116, BugCheckParameter2b, v57, 0LL);
          }
          else
          {
            *(_BYTE *)(v62 + 32) |= 2u;
            if ( *(__int64 *)(v62 + 32) < 0 )
            {
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v62);
              v58 = (ULONG_PTR)v116;
              v62 = v111;
              v59 = BugCheckParameter2b;
            }
            v102 = *(_DWORD *)(v62 + 88) & 0x1FFFF;
            *(_DWORD *)(v62 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v62 + 25) &= ~1u;
            *(_QWORD *)(v62 + 32) = 0LL;
            v63 = (__int64)((unsigned __int128)((v62 - *(_QWORD *)(v58 + 800)) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
            v64 = 1 << (v63 + (v63 < 0));
            if ( AbAllocationRegionCount == 1 )
              *(_BYTE *)(v58 + 792) |= v64;
            else
              _InterlockedOr8((volatile signed __int8 *)(v58 + 870), v64);
          }
          v65 = &v102;
          goto LABEL_140;
        }
        goto LABEL_144;
      }
      goto LABEL_56;
    }
    v107 = v7;
    if ( v115 != 1 || (*(_DWORD *)(v7 + 52) & 0x40000000) == 0 )
      goto LABEL_14;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4 + 18);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v46 = KeGetCurrentIrql();
        if ( v46 <= 0xFu && CurrentIrql <= 0xFu && v46 >= 2u )
        {
          v47 = KeGetCurrentPrcb();
          v48 = v47->SchedulerAssist;
          v49 = ~(unsigned __int16)(-1LL << v92);
          v19 = (v49 & v48[5]) == 0;
          v48[5] &= v49;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v47);
        }
      }
    }
    __writecr8(CurrentIrql);
    result = MiAllocateFileExtents(v7, 0);
    v122 = result;
    if ( (int)result < 0 )
    {
LABEL_191:
      v55 = v115;
      v50 = (volatile LONG *)(v4 + 9);
      goto LABEL_145;
    }
    goto LABEL_48;
  }
  v50 = (volatile LONG *)(v4 + 9);
  v122 = -1073741800;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4 + 18);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v80 = KeGetCurrentIrql();
      if ( v80 <= 0xFu && CurrentIrql <= 0xFu && v80 >= 2u )
      {
        v81 = KeGetCurrentPrcb();
        v82 = v81->SchedulerAssist;
        v83 = ~(unsigned __int16)(-1LL << v92);
        v19 = (v83 & v82[5]) == 0;
        v82[5] &= v83;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v81);
      }
    }
  }
  __writecr8(CurrentIrql);
  v55 = v115;
  if ( !v115 )
  {
    v84 = v98 + 40;
    BugCheckParameter2c = v98 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v98 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    {
      ExfTryToWakePushLock(v84);
      v84 = BugCheckParameter2c;
    }
    v106[0] = 0;
    v116 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v84) == 1 )
      v85 = MmGetSessionIdEx((__int64)v116->ApcState.Process);
    else
      v85 = -1;
    v58 = (ULONG_PTR)v116;
    --v116->SpecialApcDisable;
    ++v116->AbAllocationRegionCount;
    v59 = BugCheckParameter2c;
    v121 = v116->AbAllocationRegionCount;
    v86 = ((char)v116->AbEntrySummary | (char)v116->AbOrphanedEntrySummary) ^ 0x3F;
    v19 = !_BitScanReverse((unsigned int *)&v87, v86);
    v105 = v87;
    if ( v19 )
      goto LABEL_189;
    while ( 1 )
    {
      v88 = ~(1 << v87);
      v89 = (__int64)&v116->LockEntries[v87];
      v86 &= v88;
      v108 = v89;
      if ( (*(_BYTE *)(v89 + 26) & 1) != 0
        && (*(_DWORD *)(v89 + 32) & 1) == 0
        && (v113 & *(_QWORD *)(v89 + 32)) == (BugCheckParameter2c & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v89 + 40) == v85 )
      {
        *(_BYTE *)(v89 + 26) &= ~1u;
        if ( *(_QWORD *)(v89 + 32) )
          break;
      }
      v19 = !_BitScanReverse((unsigned int *)&v87, v86);
      v105 = v87;
      if ( v19 )
        goto LABEL_189;
    }
    if ( !v89 )
    {
LABEL_189:
      if ( (*((_DWORD *)&v116->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v116, BugCheckParameter2c, v85, 0LL);
    }
    else
    {
      *(_BYTE *)(v89 + 32) |= 2u;
      if ( *(__int64 *)(v89 + 32) < 0 )
      {
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v89);
        v58 = (ULONG_PTR)v116;
        v89 = v108;
        v59 = BugCheckParameter2c;
      }
      v106[0] = *(_DWORD *)(v89 + 88) & 0x1FFFF;
      *(_DWORD *)(v89 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v89 + 25) &= ~1u;
      *(_QWORD *)(v89 + 32) = 0LL;
      v90 = 1 << ((v89 - *(_QWORD *)(v58 + 800)) / 96);
      if ( v121 == 1 )
        *(_BYTE *)(v58 + 792) |= v90;
      else
        _InterlockedOr8((volatile signed __int8 *)(v58 + 870), v90);
    }
    v65 = v106;
LABEL_140:
    --*(_BYTE *)(v58 + 794);
    KiAbThreadRemoveBoosts(v58, v59, v65);
    v19 = v116->SpecialApcDisable++ == -1;
    if ( v19 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v116->ApcState.ApcListHead[0].Flink != &v116->152 )
      KiCheckForKernelApcDelivery(v116);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v66, v67, v68);
  }
LABEL_144:
  result = v122;
LABEL_145:
  if ( v107 )
  {
    v120 = ExAcquireSpinLockExclusive(v50);
    v69 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2);
    ExReleaseSpinLockExclusiveFromDpcLevel(v50);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v70 = KeGetCurrentIrql(), v70 <= 0xFu) )
    {
      v71 = v120;
      if ( v120 <= 0xFu && v70 >= 2u )
      {
        v72 = KeGetCurrentPrcb();
        v73 = ~(unsigned __int16)(-1LL << (v120 + 1));
        v74 = v72->SchedulerAssist;
        v19 = (v73 & v74[5]) == 0;
        v74[5] &= v73;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v72);
      }
    }
    else
    {
      v71 = v120;
    }
    __writecr8(v71);
    if ( v69 )
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C4E588 + 8LL * (*((_WORD *)v4 + 30) & 0x3FF)), v55, v69);
    result = v122;
  }
  if ( (v5 & 1) != 0 )
  {
    v91 = ExAcquireSpinLockExclusive(v50);
    --v4[5];
    --*((_DWORD *)v4 + 22);
    MiCheckControlArea(v4, v91);
    return v122;
  }
  return result;
}
