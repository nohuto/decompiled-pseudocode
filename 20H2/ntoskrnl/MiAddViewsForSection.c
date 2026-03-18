/*
 * XREFs of MiAddViewsForSection @ 0x14022C750
 * Callers:
 *     MiReferenceDataSubsections @ 0x14024C080 (MiReferenceDataSubsections.c)
 *     MmMapViewInSystemCache @ 0x1402983C0 (MmMapViewInSystemCache.c)
 *     MiMapViewOfDataSection @ 0x140622CE0 (MiMapViewOfDataSection.c)
 *     MiPfPrepareSequentialReadList @ 0x1406253C0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140680D90 (MiPfPrepareReadList.c)
 *     MiCommitPagefileBackedSection @ 0x1406B29C0 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     MiDecrementSubsections @ 0x14022BE70 (MiDecrementSubsections.c)
 *     MiReferenceActiveSubsection @ 0x14022CE60 (MiReferenceActiveSubsection.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14027F330 (ExpAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14029BE20 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiCreatePrototypePtes @ 0x1402D51CC (MiCreatePrototypePtes.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055361C (MiReturnCrossPartitionSectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAllocateFileExtents @ 0x1408D1D50 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiAddViewsForSection(__int64 **BugCheckParameter2, unsigned __int64 a2, _DWORD *SchedulerAssist)
{
  __int64 *v3; // r15
  unsigned int v4; // r14d
  __int16 v5; // di
  ULONG_PTR v7; // rsi
  __int64 *v8; // rcx
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
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  ULONG_PTR SessionId; // r9
  ULONG_PTR v28; // r10
  __int64 v29; // r11
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  unsigned __int8 v35; // al
  ULONG_PTR v36; // rcx
  unsigned __int8 v37; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v39; // r9
  int v40; // edx
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r11
  _DWORD *v43; // r10
  int v44; // edx
  volatile LONG *v45; // rsi
  unsigned __int8 v46; // al
  struct _KPRCB *v47; // r10
  _DWORD *v48; // r9
  int v49; // edx
  unsigned int v50; // r12d
  unsigned __int64 v51; // rcx
  ULONG_PTR v52; // r9
  ULONG_PTR v53; // r10
  __int64 v54; // r11
  __int64 v55; // r8
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rdx
  unsigned __int8 v59; // al
  int *v60; // r8
  __int64 v61; // r13
  unsigned __int8 v62; // cl
  KIRQL v63; // r14
  struct _KPRCB *v64; // r9
  int v65; // eax
  _DWORD *v66; // r8
  int v67; // eax
  unsigned __int8 v68; // al
  struct _KPRCB *v69; // r10
  _DWORD *v70; // r9
  int v71; // edx
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r10
  _DWORD *v74; // r9
  int v75; // edx
  unsigned __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rdx
  __int64 v79; // rcx
  int v80; // eax
  __int64 v81; // rcx
  unsigned __int8 v82; // al
  KIRQL v83; // al
  char v84; // [rsp+34h] [rbp-65h]
  ULONG_PTR BugCheckParameter2a; // [rsp+38h] [rbp-61h]
  ULONG_PTR BugCheckParameter2b; // [rsp+38h] [rbp-61h]
  ULONG_PTR BugCheckParameter2c; // [rsp+38h] [rbp-61h]
  int BugCheckParameter3; // [rsp+40h] [rbp-59h]
  int BugCheckParameter3_4; // [rsp+44h] [rbp-55h] BYREF
  __int64 v90; // [rsp+48h] [rbp-51h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-49h]
  int v92; // [rsp+58h] [rbp-41h]
  int v93; // [rsp+5Ch] [rbp-3Dh]
  int v94; // [rsp+60h] [rbp-39h] BYREF
  int v95; // [rsp+64h] [rbp-35h]
  int v96; // [rsp+68h] [rbp-31h] BYREF
  int v97; // [rsp+6Ch] [rbp-2Dh]
  int v98; // [rsp+70h] [rbp-29h] BYREF
  int v99; // [rsp+74h] [rbp-25h]
  __int64 v100; // [rsp+78h] [rbp-21h]
  __int64 v101; // [rsp+80h] [rbp-19h]
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-11h]
  int v103; // [rsp+90h] [rbp-9h]
  __int64 v104; // [rsp+98h] [rbp-1h]
  _DWORD *v105; // [rsp+A0h] [rbp+7h]
  __int64 v106; // [rsp+A8h] [rbp+Fh]
  void *retaddr; // [rsp+F8h] [rbp+5Fh]
  int v108; // [rsp+100h] [rbp+67h]
  struct _KTHREAD *v109; // [rsp+100h] [rbp+67h]
  char v111; // [rsp+110h] [rbp+77h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+110h] [rbp+77h]
  KIRQL v113; // [rsp+110h] [rbp+77h]
  unsigned __int8 v114; // [rsp+110h] [rbp+77h]
  unsigned int v115; // [rsp+118h] [rbp+7Fh]

  v3 = *BugCheckParameter2;
  v4 = 0;
  v5 = (__int16)SchedulerAssist;
  v100 = 0LL;
  v7 = (ULONG_PTR)BugCheckParameter2;
  if ( v3[8] )
  {
    v108 = 1;
    CurrentThread = 0LL;
    v90 = 0LL;
  }
  else
  {
    v25 = *v3;
    v108 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v90 = v25;
    ExAcquirePushLockExclusiveEx(v25 + 40, 0LL);
  }
  v8 = v3 + 9;
  v105 = v3 + 9;
  v99 = v5 & 0x180;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v8 = v3 + 9;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8, CurrentIrql, SchedulerAssist);
  else
    ExpAcquireSpinLockExclusive(v8, CurrentIrql, SchedulerAssist);
  if ( (v5 & 1) != 0 )
  {
    ++v3[5];
    ++*((_DWORD *)v3 + 22);
    v5 |= 4u;
  }
  BugCheckParameter3 = -1;
  v84 = CurrentIrql + 1;
  v106 = 0x7FFFFFFFFFFFFFFCLL;
  while ( 1 )
  {
    v101 = v7;
    if ( *(_QWORD *)(v7 + 8) )
      break;
    v103 = *(_DWORD *)(v7 + 52) & 0x3FFFFFFF;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3 + 18);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v37 = KeGetCurrentIrql();
        if ( v37 <= 0xFu && CurrentIrql <= 0xFu && v37 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v39 = CurrentPrcb->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << v84);
          v20 = (v40 & v39[5]) == 0;
          v39[5] &= v40;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( !v108 )
    {
      v26 = v90 + 40;
      BugCheckParameter2a = v90 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v90 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v26);
        v26 = BugCheckParameter2a;
      }
      BugCheckParameter3_4 = 0;
      BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v26) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx(*(_QWORD *)(BugCheckParameter1 + 184));
      else
        SessionId = 0xFFFFFFFFLL;
      v28 = BugCheckParameter1;
      --*(_WORD *)(BugCheckParameter1 + 486);
      ++*(_BYTE *)(v28 + 794);
      v29 = BugCheckParameter2a;
      v111 = *(_BYTE *)(v28 + 794);
      v30 = BugCheckParameter2a & 0x7FFFFFFFFFFFFFFCLL;
      LODWORD(v31) = (*(char *)(v28 + 792) | *(char *)(v28 + 870)) ^ 0x3F;
      v20 = !_BitScanReverse((unsigned int *)&v32, v31);
      v92 = v32;
      if ( v20 )
        goto LABEL_80;
      while ( 1 )
      {
        v33 = ~(1 << v32);
        v34 = *(_QWORD *)(v28 + 800) + 96 * v32;
        v31 = v33 & (unsigned int)v31;
        v104 = v34;
        if ( (*(_BYTE *)(v34 + 26) & 1) != 0
          && (*(_DWORD *)(v34 + 32) & 1) == 0
          && (v106 & *(_QWORD *)(v34 + 32)) == v30
          && *(_DWORD *)(v34 + 40) == (_DWORD)SessionId )
        {
          *(_BYTE *)(v34 + 26) &= ~1u;
          if ( *(_QWORD *)(v34 + 32) )
            break;
        }
        v20 = !_BitScanReverse((unsigned int *)&v32, v31);
        v92 = v32;
        if ( v20 )
          goto LABEL_80;
      }
      if ( !v34 )
      {
LABEL_80:
        if ( (*(_DWORD *)(v28 + 120) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, v28, BugCheckParameter2a, SessionId, 0LL);
      }
      else
      {
        *(_BYTE *)(v34 + 32) |= 2u;
        if ( *(__int64 *)(v34 + 32) < 0 )
        {
          KiAbEntryRemoveFromTree(v34, v31, v30);
          v34 = v104;
          v28 = BugCheckParameter1;
          v29 = BugCheckParameter2a;
        }
        BugCheckParameter3_4 = 0;
        BugCheckParameter3_4 = *(_DWORD *)(v34 + 88) & 0x1FFFF;
        *(_DWORD *)(v34 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v34 + 25) &= ~1u;
        *(_QWORD *)(v34 + 32) = 0LL;
        v35 = 1 << ((v34 - *(_QWORD *)(v28 + 800)) / 96);
        if ( v111 == 1 )
          *(_BYTE *)(v28 + 792) |= v35;
        else
          _InterlockedOr8((volatile signed __int8 *)(v28 + 870), v35);
      }
      --*(_BYTE *)(v28 + 794);
      KiAbThreadRemoveBoosts(v28, v29, &BugCheckParameter3_4);
      v36 = BugCheckParameter1;
      v20 = (*(_WORD *)(BugCheckParameter1 + 486))++ == 0xFFFF;
      if ( v20 && *(_QWORD *)(v36 + 152) != v36 + 152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( (v5 & 2) != 0 )
      return 3221225865LL;
    result = MiCreatePrototypePtes(v7);
    v115 = result;
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741302 )
        goto LABEL_193;
      if ( !v108 )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v90 + 40, 0LL);
      }
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v3 + 18);
      goto LABEL_56;
    }
    if ( !v108 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v90 + 40, 0LL);
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v3 + 18);
      goto LABEL_14;
    }
LABEL_48:
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v3 + 18);
LABEL_14:
    if ( a2 )
    {
      v11 = *(unsigned int *)(v7 + 44);
      if ( a2 <= v11 )
        goto LABEL_16;
      a2 -= v11;
    }
    v7 = *(_QWORD *)(v7 + 16);
    v100 = v101;
    if ( !v108 )
      v100 = v101;
LABEL_56:
    if ( !v7 )
    {
LABEL_16:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v105, retaddr);
      else
        *v105 = 0;
      v12 = KeGetCurrentPrcb();
      v13 = v12->SchedulerAssist;
      if ( v13 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v67 = v13[6] - 1;
          v13[6] = v67;
          if ( !v67 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v68 = KeGetCurrentIrql();
          if ( v68 <= 0xFu && CurrentIrql <= 0xFu && v68 >= 2u )
          {
            v69 = KeGetCurrentPrcb();
            v70 = v69->SchedulerAssist;
            v71 = ~(unsigned __int16)(-1LL << v84);
            v20 = (v71 & v70[5]) == 0;
            v70[5] &= v71;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(v69);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v108 )
        return 0LL;
      v15 = v90 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v90 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v15);
      v96 = 0;
      v16 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v15) == 1 )
        BugCheckParameter3 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
      --v16->SpecialApcDisable;
      v17 = ++v16->AbAllocationRegionCount;
      LODWORD(v18) = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
      v19 = v15 & 0x7FFFFFFFFFFFFFFCLL;
      v20 = !_BitScanReverse((unsigned int *)&v21, v18);
      v95 = v21;
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
          v95 = v21;
          if ( v20 )
            goto LABEL_50;
        }
        if ( v22 )
        {
          *(_BYTE *)(v22 + 32) |= 2u;
          if ( *(__int64 *)(v22 + 32) < 0 )
            KiAbEntryRemoveFromTree(v22, v18, v19);
          v96 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
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
          KiAbThreadRemoveBoosts((ULONG_PTR)v16, v15, &v96);
          v20 = v16->SpecialApcDisable++ == -1;
          if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
            KiCheckForKernelApcDelivery();
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
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
    v115 = active;
    if ( active < 0 )
    {
      if ( active != -1073741302 )
      {
        v45 = (volatile LONG *)(v3 + 9);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3 + 18);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v46 = KeGetCurrentIrql();
            if ( v46 <= 0xFu && CurrentIrql <= 0xFu && v46 >= 2u )
            {
              v47 = KeGetCurrentPrcb();
              v48 = v47->SchedulerAssist;
              v49 = ~(unsigned __int16)(-1LL << v84);
              v20 = (v49 & v48[5]) == 0;
              v48[5] &= v49;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(v47);
            }
          }
        }
        __writecr8(CurrentIrql);
        v50 = v108;
        if ( !v108 )
        {
          v51 = v90 + 40;
          BugCheckParameter2b = v90 + 40;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v90 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          {
            ExfTryToWakePushLock(v51);
            v51 = BugCheckParameter2b;
          }
          v94 = 0;
          v109 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v51) == 1 )
            v52 = (unsigned int)MmGetSessionIdEx((__int64)v109->ApcState.Process);
          else
            v52 = 0xFFFFFFFFLL;
          v53 = (ULONG_PTR)v109;
          --v109->SpecialApcDisable;
          ++v109->AbAllocationRegionCount;
          v54 = BugCheckParameter2b;
          AbAllocationRegionCount = v109->AbAllocationRegionCount;
          v101 = BugCheckParameter2b & 0x7FFFFFFFFFFFFFFCLL;
          LODWORD(v55) = ((char)v109->AbEntrySummary | (char)v109->AbOrphanedEntrySummary) ^ 0x3F;
          v20 = !_BitScanReverse((unsigned int *)&v56, v55);
          v93 = v56;
          if ( v20 )
            goto LABEL_135;
          while ( 1 )
          {
            v57 = (__int64)&v109->LockEntries[v56];
            v104 = v57;
            v55 = ~(1 << v56) & (unsigned int)v55;
            if ( (*(_BYTE *)(v57 + 26) & 1) != 0
              && (*(_DWORD *)(v57 + 32) & 1) == 0
              && (*(_QWORD *)(v57 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v101
              && *(_DWORD *)(v57 + 40) == (_DWORD)v52 )
            {
              *(_BYTE *)(v57 + 26) &= ~1u;
              if ( *(_QWORD *)(v57 + 32) )
                break;
            }
            v20 = !_BitScanReverse((unsigned int *)&v56, v55);
            v93 = v56;
            if ( v20 )
              goto LABEL_135;
          }
          if ( !v57 )
          {
LABEL_135:
            if ( (*((_DWORD *)&v109->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v109, BugCheckParameter2b, v52, 0LL);
          }
          else
          {
            *(_BYTE *)(v57 + 32) |= 2u;
            if ( *(__int64 *)(v57 + 32) < 0 )
            {
              KiAbEntryRemoveFromTree(v57, v57, v55);
              v53 = (ULONG_PTR)v109;
              v57 = v104;
              v54 = BugCheckParameter2b;
            }
            v94 = *(_DWORD *)(v57 + 88) & 0x1FFFF;
            *(_DWORD *)(v57 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v57 + 25) &= ~1u;
            *(_QWORD *)(v57 + 32) = 0LL;
            v58 = (__int64)((unsigned __int128)((v57 - *(_QWORD *)(v53 + 800)) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
            v59 = 1 << (v58 + (v58 < 0));
            if ( AbAllocationRegionCount == 1 )
              *(_BYTE *)(v53 + 792) |= v59;
            else
              _InterlockedOr8((volatile signed __int8 *)(v53 + 870), v59);
          }
          v60 = &v94;
          goto LABEL_140;
        }
        goto LABEL_144;
      }
      goto LABEL_56;
    }
    v100 = v7;
    if ( v108 != 1 || (*(_DWORD *)(v7 + 52) & 0x40000000) == 0 )
      goto LABEL_14;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3 + 18);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v41 = KeGetCurrentIrql();
        if ( v41 <= 0xFu && CurrentIrql <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << v84);
          v20 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
    }
    __writecr8(CurrentIrql);
    result = MiAllocateFileExtents(v7, 0);
    v115 = result;
    if ( (int)result < 0 )
    {
LABEL_193:
      v50 = v108;
      v45 = (volatile LONG *)(v3 + 9);
      goto LABEL_145;
    }
    goto LABEL_48;
  }
  v45 = (volatile LONG *)(v3 + 9);
  v115 = -1073741800;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3 + 18);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v72 = KeGetCurrentIrql();
      if ( v72 <= 0xFu && CurrentIrql <= 0xFu && v72 >= 2u )
      {
        v73 = KeGetCurrentPrcb();
        v74 = v73->SchedulerAssist;
        v75 = ~(unsigned __int16)(-1LL << v84);
        v20 = (v75 & v74[5]) == 0;
        v74[5] &= v75;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v73);
      }
    }
  }
  __writecr8(CurrentIrql);
  v50 = v108;
  if ( !v108 )
  {
    v76 = v90 + 40;
    BugCheckParameter2c = v90 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v90 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    {
      ExfTryToWakePushLock(v76);
      v76 = BugCheckParameter2c;
    }
    v98 = 0;
    v109 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v76) == 1 )
      v77 = (unsigned int)MmGetSessionIdEx((__int64)v109->ApcState.Process);
    else
      v77 = 0xFFFFFFFFLL;
    v53 = (ULONG_PTR)v109;
    --v109->SpecialApcDisable;
    ++v109->AbAllocationRegionCount;
    v54 = BugCheckParameter2c;
    v114 = v109->AbAllocationRegionCount;
    LODWORD(v78) = ((char)v109->AbEntrySummary | (char)v109->AbOrphanedEntrySummary) ^ 0x3F;
    v20 = !_BitScanReverse((unsigned int *)&v79, v78);
    v97 = v79;
    if ( v20 )
      goto LABEL_191;
    while ( 1 )
    {
      v80 = ~(1 << v79);
      v81 = (__int64)&v109->LockEntries[v79];
      v78 = v80 & (unsigned int)v78;
      v101 = v81;
      if ( (*(_BYTE *)(v81 + 26) & 1) != 0
        && (*(_DWORD *)(v81 + 32) & 1) == 0
        && (v106 & *(_QWORD *)(v81 + 32)) == (BugCheckParameter2c & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v81 + 40) == (_DWORD)v77 )
      {
        *(_BYTE *)(v81 + 26) &= ~1u;
        if ( *(_QWORD *)(v81 + 32) )
          break;
      }
      v20 = !_BitScanReverse((unsigned int *)&v79, v78);
      v97 = v79;
      if ( v20 )
        goto LABEL_191;
    }
    if ( !v81 )
    {
LABEL_191:
      if ( (*((_DWORD *)&v109->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v109, BugCheckParameter2c, (unsigned int)v77, 0LL);
    }
    else
    {
      *(_BYTE *)(v81 + 32) |= 2u;
      if ( *(__int64 *)(v81 + 32) < 0 )
      {
        KiAbEntryRemoveFromTree(v81, v78, v77);
        v53 = (ULONG_PTR)v109;
        v81 = v101;
        v54 = BugCheckParameter2c;
      }
      v98 = *(_DWORD *)(v81 + 88) & 0x1FFFF;
      *(_DWORD *)(v81 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v81 + 25) &= ~1u;
      *(_QWORD *)(v81 + 32) = 0LL;
      v82 = 1 << ((v81 - *(_QWORD *)(v53 + 800)) / 96);
      if ( v114 == 1 )
        *(_BYTE *)(v53 + 792) |= v82;
      else
        _InterlockedOr8((volatile signed __int8 *)(v53 + 870), v82);
    }
    v60 = &v98;
LABEL_140:
    --*(_BYTE *)(v53 + 794);
    KiAbThreadRemoveBoosts(v53, v54, v60);
    v20 = v109->SpecialApcDisable++ == -1;
    if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v109->ApcState.ApcListHead[0].Flink != &v109->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
LABEL_144:
  result = v115;
LABEL_145:
  if ( v100 )
  {
    v113 = ExAcquireSpinLockExclusive(v45);
    if ( (v5 & 5) == 0 )
      v4 = v99 | 8;
    v61 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2, v100, v4);
    ExReleaseSpinLockExclusiveFromDpcLevel(v45);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v62 = KeGetCurrentIrql(), v62 <= 0xFu) )
    {
      v63 = v113;
      if ( v113 <= 0xFu && v62 >= 2u )
      {
        v64 = KeGetCurrentPrcb();
        v65 = ~(unsigned __int16)(-1LL << (v113 + 1));
        v66 = v64->SchedulerAssist;
        v20 = (v65 & v66[5]) == 0;
        v66[5] &= v65;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v64);
      }
    }
    else
    {
      v63 = v113;
    }
    __writecr8(v63);
    if ( v61 )
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C4E4C8 + 8LL * (*((_WORD *)v3 + 30) & 0x3FF)), v50, v61);
    result = v115;
  }
  if ( (v5 & 1) != 0 )
  {
    v83 = ExAcquireSpinLockExclusive(v45);
    --v3[5];
    --*((_DWORD *)v3 + 22);
    MiCheckControlArea(v3, v83);
    return v115;
  }
  return result;
}
