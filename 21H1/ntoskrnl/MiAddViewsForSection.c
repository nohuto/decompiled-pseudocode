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
  __int64 v18; // rdx
  __int64 v19; // r8
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rbx
  unsigned int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  ULONG_PTR SessionId; // r9
  ULONG_PTR v32; // r10
  __int64 v33; // r11
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  unsigned __int8 v39; // al
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  ULONG_PTR v43; // rcx
  unsigned __int8 v44; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v46; // r9
  int v47; // edx
  unsigned __int8 v48; // al
  struct _KPRCB *v49; // r11
  _DWORD *v50; // r10
  int v51; // edx
  volatile LONG *v52; // rsi
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r10
  _DWORD *v55; // r9
  int v56; // edx
  unsigned int v57; // r12d
  unsigned __int64 v58; // rcx
  ULONG_PTR v59; // r9
  ULONG_PTR v60; // r10
  __int64 v61; // r11
  __int64 v62; // r8
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rdx
  unsigned __int8 v66; // al
  int *v67; // r8
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // r13
  unsigned __int8 v72; // cl
  KIRQL v73; // r14
  struct _KPRCB *v74; // r9
  int v75; // eax
  _DWORD *v76; // r8
  int v77; // eax
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r10
  _DWORD *v80; // r9
  int v81; // edx
  unsigned __int8 v82; // al
  struct _KPRCB *v83; // r10
  _DWORD *v84; // r9
  int v85; // edx
  unsigned __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // rdx
  __int64 v89; // rcx
  int v90; // eax
  __int64 v91; // rcx
  unsigned __int8 v92; // al
  KIRQL v93; // al
  char v94; // [rsp+34h] [rbp-65h]
  ULONG_PTR BugCheckParameter2a; // [rsp+38h] [rbp-61h]
  ULONG_PTR BugCheckParameter2b; // [rsp+38h] [rbp-61h]
  ULONG_PTR BugCheckParameter2c; // [rsp+38h] [rbp-61h]
  int BugCheckParameter3; // [rsp+40h] [rbp-59h]
  int BugCheckParameter3_4; // [rsp+44h] [rbp-55h] BYREF
  __int64 v100; // [rsp+48h] [rbp-51h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-49h]
  int v102; // [rsp+58h] [rbp-41h]
  int v103; // [rsp+5Ch] [rbp-3Dh]
  int v104; // [rsp+60h] [rbp-39h] BYREF
  int v105; // [rsp+64h] [rbp-35h]
  int v106; // [rsp+68h] [rbp-31h] BYREF
  int v107; // [rsp+6Ch] [rbp-2Dh]
  _DWORD v108[2]; // [rsp+70h] [rbp-29h] BYREF
  ULONG_PTR v109; // [rsp+78h] [rbp-21h]
  __int64 v110; // [rsp+80h] [rbp-19h]
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-11h]
  int v112; // [rsp+90h] [rbp-9h]
  __int64 v113; // [rsp+98h] [rbp-1h]
  _DWORD *v114; // [rsp+A0h] [rbp+7h]
  __int64 v115; // [rsp+A8h] [rbp+Fh]
  void *retaddr; // [rsp+F8h] [rbp+5Fh]
  int v117; // [rsp+100h] [rbp+67h]
  struct _KTHREAD *v118; // [rsp+100h] [rbp+67h]
  char v120; // [rsp+110h] [rbp+77h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+110h] [rbp+77h]
  KIRQL v122; // [rsp+110h] [rbp+77h]
  unsigned __int8 v123; // [rsp+110h] [rbp+77h]
  unsigned int v124; // [rsp+118h] [rbp+7Fh]

  v4 = *BugCheckParameter2;
  v5 = (__int16)SchedulerAssist;
  v109 = 0LL;
  v7 = (ULONG_PTR)BugCheckParameter2;
  if ( v4[8] )
  {
    v117 = 1;
    CurrentThread = 0LL;
    v100 = 0LL;
  }
  else
  {
    v29 = *v4;
    v117 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v100 = v29;
    ExAcquirePushLockExclusiveEx(v29 + 40, 0LL);
  }
  v8 = (volatile signed __int32 *)(v4 + 9);
  v114 = v4 + 9;
  v108[1] = v5 & 0x180;
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
  v94 = CurrentIrql + 1;
  v115 = 0x7FFFFFFFFFFFFFFCLL;
  while ( 1 )
  {
    v110 = v7;
    if ( *(_QWORD *)(v7 + 8) )
      break;
    v112 = *(_DWORD *)(v7 + 52) & 0x3FFFFFFF;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4 + 18);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v44 = KeGetCurrentIrql();
        if ( v44 <= 0xFu && CurrentIrql <= 0xFu && v44 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v46 = CurrentPrcb->SchedulerAssist;
          v47 = ~(unsigned __int16)(-1LL << v94);
          v20 = (v47 & v46[5]) == 0;
          v46[5] &= v47;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( !v117 )
    {
      v30 = v100 + 40;
      BugCheckParameter2a = v100 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v100 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v30);
        v30 = BugCheckParameter2a;
      }
      BugCheckParameter3_4 = 0;
      BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v30) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx(*(_QWORD *)(BugCheckParameter1 + 184));
      else
        SessionId = 0xFFFFFFFFLL;
      v32 = BugCheckParameter1;
      --*(_WORD *)(BugCheckParameter1 + 486);
      ++*(_BYTE *)(v32 + 794);
      v33 = BugCheckParameter2a;
      v120 = *(_BYTE *)(v32 + 794);
      v34 = BugCheckParameter2a & 0x7FFFFFFFFFFFFFFCLL;
      LODWORD(v35) = (*(char *)(v32 + 792) | *(char *)(v32 + 870)) ^ 0x3F;
      v20 = !_BitScanReverse((unsigned int *)&v36, v35);
      v102 = v36;
      if ( v20 )
        goto LABEL_80;
      while ( 1 )
      {
        v37 = ~(1 << v36);
        v38 = *(_QWORD *)(v32 + 800) + 96 * v36;
        v35 = v37 & (unsigned int)v35;
        v113 = v38;
        if ( (*(_BYTE *)(v38 + 26) & 1) != 0
          && (*(_DWORD *)(v38 + 32) & 1) == 0
          && (v115 & *(_QWORD *)(v38 + 32)) == v34
          && *(_DWORD *)(v38 + 40) == (_DWORD)SessionId )
        {
          *(_BYTE *)(v38 + 26) &= ~1u;
          if ( *(_QWORD *)(v38 + 32) )
            break;
        }
        v20 = !_BitScanReverse((unsigned int *)&v36, v35);
        v102 = v36;
        if ( v20 )
          goto LABEL_80;
      }
      if ( !v38 )
      {
LABEL_80:
        if ( (*(_DWORD *)(v32 + 120) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, v32, BugCheckParameter2a, SessionId, 0LL);
      }
      else
      {
        *(_BYTE *)(v38 + 32) |= 2u;
        if ( *(__int64 *)(v38 + 32) < 0 )
        {
          KiAbEntryRemoveFromTree(v38, v35, v34);
          v38 = v113;
          v32 = BugCheckParameter1;
          v33 = BugCheckParameter2a;
        }
        BugCheckParameter3_4 = 0;
        BugCheckParameter3_4 = *(_DWORD *)(v38 + 88) & 0x1FFFF;
        *(_DWORD *)(v38 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v38 + 25) &= ~1u;
        *(_QWORD *)(v38 + 32) = 0LL;
        v39 = 1 << ((v38 - *(_QWORD *)(v32 + 800)) / 96);
        if ( v120 == 1 )
          *(_BYTE *)(v32 + 792) |= v39;
        else
          _InterlockedOr8((volatile signed __int8 *)(v32 + 870), v39);
      }
      --*(_BYTE *)(v32 + 794);
      KiAbThreadRemoveBoosts(v32, v33, &BugCheckParameter3_4);
      v43 = BugCheckParameter1;
      v20 = (*(_WORD *)(BugCheckParameter1 + 486))++ == 0xFFFF;
      if ( v20 && *(_QWORD *)(v43 + 152) != v43 + 152 )
        KiCheckForKernelApcDelivery(v43);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v40, v41, v42);
    }
    if ( (v5 & 2) != 0 )
      return 3221225865LL;
    result = MiCreatePrototypePtes(v7);
    v124 = result;
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741302 )
        goto LABEL_191;
      if ( !v117 )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v100 + 40, 0LL);
      }
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v4 + 18);
      goto LABEL_56;
    }
    if ( !v117 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v100 + 40, 0LL);
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
    v109 = v110;
    if ( !v117 )
      v109 = v110;
LABEL_56:
    if ( !v7 )
    {
LABEL_16:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v114, retaddr);
      else
        *v114 = 0;
      v12 = KeGetCurrentPrcb();
      v13 = v12->SchedulerAssist;
      if ( v13 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v77 = v13[6] - 1;
          v13[6] = v77;
          if ( !v77 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v78 = KeGetCurrentIrql();
          if ( v78 <= 0xFu && CurrentIrql <= 0xFu && v78 >= 2u )
          {
            v79 = KeGetCurrentPrcb();
            v80 = v79->SchedulerAssist;
            v81 = ~(unsigned __int16)(-1LL << v94);
            v20 = (v81 & v80[5]) == 0;
            v80[5] &= v81;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(v79);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v117 )
        return 0LL;
      v15 = v100 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v100 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v15);
      v106 = 0;
      v16 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v15) == 1 )
        BugCheckParameter3 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
      --v16->SpecialApcDisable;
      v17 = ++v16->AbAllocationRegionCount;
      LODWORD(v18) = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
      v19 = v15 & 0x7FFFFFFFFFFFFFFCLL;
      v20 = !_BitScanReverse((unsigned int *)&v21, v18);
      v105 = v21;
      if ( v20 )
      {
LABEL_50:
        v23 = BugCheckParameter3;
      }
      else
      {
        while ( 1 )
        {
          v22 = (__int64)&v16->LockEntries[v21];
          v18 = ~(1 << v21) & (unsigned int)v18;
          if ( (*(_BYTE *)(v22 + 26) & 1) != 0
            && (*(_DWORD *)(v22 + 32) & 1) == 0
            && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v19 )
          {
            v23 = BugCheckParameter3;
            if ( *(_DWORD *)(v22 + 40) == BugCheckParameter3 )
            {
              *(_BYTE *)(v22 + 26) &= ~1u;
              if ( *(_QWORD *)(v22 + 32) )
                break;
            }
          }
          v20 = !_BitScanReverse((unsigned int *)&v21, v18);
          v105 = v21;
          if ( v20 )
            goto LABEL_50;
        }
        if ( v22 )
        {
          *(_BYTE *)(v22 + 32) |= 2u;
          if ( *(__int64 *)(v22 + 32) < 0 )
            KiAbEntryRemoveFromTree(v22, v18, v19);
          v106 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
          *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v22 + 25) &= ~1u;
          *(_QWORD *)(v22 + 32) = 0LL;
          v24 = (signed __int64)(v22 - (unsigned __int64)v16->LockEntries) / 96;
          if ( v17 == 1 )
            v16->AbEntrySummary |= 1 << v24;
          else
            _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v24);
LABEL_38:
          --v16->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)v16, v15, &v106);
          v20 = v16->SpecialApcDisable++ == -1;
          if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
            KiCheckForKernelApcDelivery(v26);
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v25, v27, v28);
          return 0LL;
        }
      }
      if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v16, v15, v23, 0LL);
      goto LABEL_38;
    }
  }
  if ( (v5 & 0x400) == 0 )
  {
    active = MiReferenceActiveSubsection(v7);
    v124 = active;
    if ( active < 0 )
    {
      if ( active != -1073741302 )
      {
        v52 = (volatile LONG *)(v4 + 9);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4 + 18);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v53 = KeGetCurrentIrql();
            if ( v53 <= 0xFu && CurrentIrql <= 0xFu && v53 >= 2u )
            {
              v54 = KeGetCurrentPrcb();
              v55 = v54->SchedulerAssist;
              v56 = ~(unsigned __int16)(-1LL << v94);
              v20 = (v56 & v55[5]) == 0;
              v55[5] &= v56;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v54);
            }
          }
        }
        __writecr8(CurrentIrql);
        v57 = v117;
        if ( !v117 )
        {
          v58 = v100 + 40;
          BugCheckParameter2b = v100 + 40;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v100 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          {
            ExfTryToWakePushLock(v58);
            v58 = BugCheckParameter2b;
          }
          v104 = 0;
          v118 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v58) == 1 )
            v59 = (unsigned int)MmGetSessionIdEx((__int64)v118->ApcState.Process);
          else
            v59 = 0xFFFFFFFFLL;
          v60 = (ULONG_PTR)v118;
          --v118->SpecialApcDisable;
          ++v118->AbAllocationRegionCount;
          v61 = BugCheckParameter2b;
          AbAllocationRegionCount = v118->AbAllocationRegionCount;
          v110 = BugCheckParameter2b & 0x7FFFFFFFFFFFFFFCLL;
          LODWORD(v62) = ((char)v118->AbEntrySummary | (char)v118->AbOrphanedEntrySummary) ^ 0x3F;
          v20 = !_BitScanReverse((unsigned int *)&v63, v62);
          v103 = v63;
          if ( v20 )
            goto LABEL_135;
          while ( 1 )
          {
            v64 = (__int64)&v118->LockEntries[v63];
            v113 = v64;
            v62 = ~(1 << v63) & (unsigned int)v62;
            if ( (*(_BYTE *)(v64 + 26) & 1) != 0
              && (*(_DWORD *)(v64 + 32) & 1) == 0
              && (*(_QWORD *)(v64 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v110
              && *(_DWORD *)(v64 + 40) == (_DWORD)v59 )
            {
              *(_BYTE *)(v64 + 26) &= ~1u;
              if ( *(_QWORD *)(v64 + 32) )
                break;
            }
            v20 = !_BitScanReverse((unsigned int *)&v63, v62);
            v103 = v63;
            if ( v20 )
              goto LABEL_135;
          }
          if ( !v64 )
          {
LABEL_135:
            if ( (*((_DWORD *)&v118->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v118, BugCheckParameter2b, v59, 0LL);
          }
          else
          {
            *(_BYTE *)(v64 + 32) |= 2u;
            if ( *(__int64 *)(v64 + 32) < 0 )
            {
              KiAbEntryRemoveFromTree(v64, v64, v62);
              v60 = (ULONG_PTR)v118;
              v64 = v113;
              v61 = BugCheckParameter2b;
            }
            v104 = *(_DWORD *)(v64 + 88) & 0x1FFFF;
            *(_DWORD *)(v64 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v64 + 25) &= ~1u;
            *(_QWORD *)(v64 + 32) = 0LL;
            v65 = (__int64)((unsigned __int128)((v64 - *(_QWORD *)(v60 + 800)) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
            v66 = 1 << (v65 + (v65 < 0));
            if ( AbAllocationRegionCount == 1 )
              *(_BYTE *)(v60 + 792) |= v66;
            else
              _InterlockedOr8((volatile signed __int8 *)(v60 + 870), v66);
          }
          v67 = &v104;
          goto LABEL_140;
        }
        goto LABEL_144;
      }
      goto LABEL_56;
    }
    v109 = v7;
    if ( v117 != 1 || (*(_DWORD *)(v7 + 52) & 0x40000000) == 0 )
      goto LABEL_14;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4 + 18);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v48 = KeGetCurrentIrql();
        if ( v48 <= 0xFu && CurrentIrql <= 0xFu && v48 >= 2u )
        {
          v49 = KeGetCurrentPrcb();
          v50 = v49->SchedulerAssist;
          v51 = ~(unsigned __int16)(-1LL << v94);
          v20 = (v51 & v50[5]) == 0;
          v50[5] &= v51;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v49);
        }
      }
    }
    __writecr8(CurrentIrql);
    result = MiAllocateFileExtents(v7, 0);
    v124 = result;
    if ( (int)result < 0 )
    {
LABEL_191:
      v57 = v117;
      v52 = (volatile LONG *)(v4 + 9);
      goto LABEL_145;
    }
    goto LABEL_48;
  }
  v52 = (volatile LONG *)(v4 + 9);
  v124 = -1073741800;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4 + 18);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v82 = KeGetCurrentIrql();
      if ( v82 <= 0xFu && CurrentIrql <= 0xFu && v82 >= 2u )
      {
        v83 = KeGetCurrentPrcb();
        v84 = v83->SchedulerAssist;
        v85 = ~(unsigned __int16)(-1LL << v94);
        v20 = (v85 & v84[5]) == 0;
        v84[5] &= v85;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v83);
      }
    }
  }
  __writecr8(CurrentIrql);
  v57 = v117;
  if ( !v117 )
  {
    v86 = v100 + 40;
    BugCheckParameter2c = v100 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v100 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    {
      ExfTryToWakePushLock(v86);
      v86 = BugCheckParameter2c;
    }
    v108[0] = 0;
    v118 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v86) == 1 )
      v87 = (unsigned int)MmGetSessionIdEx((__int64)v118->ApcState.Process);
    else
      v87 = 0xFFFFFFFFLL;
    v60 = (ULONG_PTR)v118;
    --v118->SpecialApcDisable;
    ++v118->AbAllocationRegionCount;
    v61 = BugCheckParameter2c;
    v123 = v118->AbAllocationRegionCount;
    LODWORD(v88) = ((char)v118->AbEntrySummary | (char)v118->AbOrphanedEntrySummary) ^ 0x3F;
    v20 = !_BitScanReverse((unsigned int *)&v89, v88);
    v107 = v89;
    if ( v20 )
      goto LABEL_189;
    while ( 1 )
    {
      v90 = ~(1 << v89);
      v91 = (__int64)&v118->LockEntries[v89];
      v88 = v90 & (unsigned int)v88;
      v110 = v91;
      if ( (*(_BYTE *)(v91 + 26) & 1) != 0
        && (*(_DWORD *)(v91 + 32) & 1) == 0
        && (v115 & *(_QWORD *)(v91 + 32)) == (BugCheckParameter2c & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v91 + 40) == (_DWORD)v87 )
      {
        *(_BYTE *)(v91 + 26) &= ~1u;
        if ( *(_QWORD *)(v91 + 32) )
          break;
      }
      v20 = !_BitScanReverse((unsigned int *)&v89, v88);
      v107 = v89;
      if ( v20 )
        goto LABEL_189;
    }
    if ( !v91 )
    {
LABEL_189:
      if ( (*((_DWORD *)&v118->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v118, BugCheckParameter2c, (unsigned int)v87, 0LL);
    }
    else
    {
      *(_BYTE *)(v91 + 32) |= 2u;
      if ( *(__int64 *)(v91 + 32) < 0 )
      {
        KiAbEntryRemoveFromTree(v91, v88, v87);
        v60 = (ULONG_PTR)v118;
        v91 = v110;
        v61 = BugCheckParameter2c;
      }
      v108[0] = *(_DWORD *)(v91 + 88) & 0x1FFFF;
      *(_DWORD *)(v91 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v91 + 25) &= ~1u;
      *(_QWORD *)(v91 + 32) = 0LL;
      v92 = 1 << ((v91 - *(_QWORD *)(v60 + 800)) / 96);
      if ( v123 == 1 )
        *(_BYTE *)(v60 + 792) |= v92;
      else
        _InterlockedOr8((volatile signed __int8 *)(v60 + 870), v92);
    }
    v67 = v108;
LABEL_140:
    --*(_BYTE *)(v60 + 794);
    KiAbThreadRemoveBoosts(v60, v61, v67);
    v20 = v118->SpecialApcDisable++ == -1;
    if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v118->ApcState.ApcListHead[0].Flink != &v118->152 )
      KiCheckForKernelApcDelivery(v118);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v68, v69, v70);
  }
LABEL_144:
  result = v124;
LABEL_145:
  if ( v109 )
  {
    v122 = ExAcquireSpinLockExclusive(v52);
    v71 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2);
    ExReleaseSpinLockExclusiveFromDpcLevel(v52);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v72 = KeGetCurrentIrql(), v72 <= 0xFu) )
    {
      v73 = v122;
      if ( v122 <= 0xFu && v72 >= 2u )
      {
        v74 = KeGetCurrentPrcb();
        v75 = ~(unsigned __int16)(-1LL << (v122 + 1));
        v76 = v74->SchedulerAssist;
        v20 = (v75 & v76[5]) == 0;
        v76[5] &= v75;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v74);
      }
    }
    else
    {
      v73 = v122;
    }
    __writecr8(v73);
    if ( v71 )
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C4E588 + 8LL * (*((_WORD *)v4 + 30) & 0x3FF)), v57, v71);
    result = v124;
  }
  if ( (v5 & 1) != 0 )
  {
    v93 = ExAcquireSpinLockExclusive(v52);
    --v4[5];
    --*((_DWORD *)v4 + 22);
    MiCheckControlArea(v4, v93);
    return v124;
  }
  return result;
}
