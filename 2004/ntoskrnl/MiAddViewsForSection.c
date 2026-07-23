/*
 * XREFs of MiAddViewsForSection @ 0x140248C90
 * Callers:
 *     MiReferenceDataSubsections @ 0x1402648D8 (MiReferenceDataSubsections.c)
 *     MmMapViewInSystemCache @ 0x1402BCE70 (MmMapViewInSystemCache.c)
 *     MiPfPrepareSequentialReadList @ 0x1405F9950 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1405FA310 (MiPfPrepareReadList.c)
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MiCommitPagefileBackedSection @ 0x14060BD6C (MiCommitPagefileBackedSection.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402135A0 (ExpAcquireSpinLockExclusive.c)
 *     MiReferenceActiveSubsection @ 0x1402493A0 (MiReferenceActiveSubsection.c)
 *     MiDecrementSubsections @ 0x14024A2C0 (MiDecrementSubsections.c)
 *     MiCheckControlArea @ 0x14024A8A0 (MiCheckControlArea.c)
 *     MiCreatePrototypePtes @ 0x14026356C (MiCreatePrototypePtes.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054FC4C (MiReturnCrossPartitionSectionCharges.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiAllocateFileExtents @ 0x1408CBF10 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiAddViewsForSection(
        __int64 **BugCheckParameter2,
        unsigned __int64 a2,
        _DWORD *SchedulerAssist,
        __int64 a4)
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
  __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  ULONG_PTR SessionId; // r9
  ULONG_PTR v27; // r10
  __int64 v28; // r11
  unsigned int v29; // edx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  unsigned __int8 v33; // al
  ULONG_PTR v34; // rcx
  unsigned __int8 v35; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v37; // r9
  int v38; // edx
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r11
  _DWORD *v41; // r10
  int v42; // edx
  volatile LONG *v43; // rsi
  unsigned __int8 v44; // al
  struct _KPRCB *v45; // r10
  _DWORD *v46; // r9
  int v47; // edx
  unsigned int v48; // r12d
  unsigned __int64 v49; // rcx
  ULONG_PTR v50; // r9
  ULONG_PTR v51; // r10
  __int64 v52; // r11
  unsigned int v53; // r8d
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rdx
  unsigned __int8 v57; // al
  int *v58; // r8
  __int64 v59; // r13
  unsigned __int8 v60; // cl
  KIRQL v61; // r14
  struct _KPRCB *v62; // r9
  int v63; // eax
  _DWORD *v64; // r8
  int v65; // eax
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r10
  _DWORD *v68; // r9
  int v69; // edx
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r10
  _DWORD *v72; // r9
  int v73; // edx
  unsigned __int64 v74; // rcx
  unsigned int v75; // r8d
  unsigned int v76; // edx
  __int64 v77; // rcx
  int v78; // eax
  __int64 v79; // rcx
  unsigned __int8 v80; // al
  KIRQL v81; // al
  char v82; // [rsp+34h] [rbp-65h]
  ULONG_PTR BugCheckParameter2a; // [rsp+38h] [rbp-61h]
  ULONG_PTR BugCheckParameter2b; // [rsp+38h] [rbp-61h]
  ULONG_PTR BugCheckParameter2c; // [rsp+38h] [rbp-61h]
  int BugCheckParameter3; // [rsp+40h] [rbp-59h]
  int BugCheckParameter3_4; // [rsp+44h] [rbp-55h] BYREF
  __int64 v88; // [rsp+48h] [rbp-51h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-49h]
  int v90; // [rsp+58h] [rbp-41h]
  int v91; // [rsp+5Ch] [rbp-3Dh]
  int v92; // [rsp+60h] [rbp-39h] BYREF
  int v93; // [rsp+64h] [rbp-35h]
  int v94; // [rsp+68h] [rbp-31h] BYREF
  int v95; // [rsp+6Ch] [rbp-2Dh]
  _DWORD v96[2]; // [rsp+70h] [rbp-29h] BYREF
  ULONG_PTR v97; // [rsp+78h] [rbp-21h]
  __int64 v98; // [rsp+80h] [rbp-19h]
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-11h]
  int v100; // [rsp+90h] [rbp-9h]
  __int64 v101; // [rsp+98h] [rbp-1h]
  _DWORD *v102; // [rsp+A0h] [rbp+7h]
  __int64 v103; // [rsp+A8h] [rbp+Fh]
  void *retaddr; // [rsp+F8h] [rbp+5Fh]
  int v105; // [rsp+100h] [rbp+67h]
  struct _KTHREAD *v106; // [rsp+100h] [rbp+67h]
  char v108; // [rsp+110h] [rbp+77h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+110h] [rbp+77h]
  KIRQL v110; // [rsp+110h] [rbp+77h]
  unsigned __int8 v111; // [rsp+110h] [rbp+77h]
  unsigned int v112; // [rsp+118h] [rbp+7Fh]

  v4 = *BugCheckParameter2;
  v5 = (__int16)SchedulerAssist;
  v97 = 0LL;
  v7 = (ULONG_PTR)BugCheckParameter2;
  if ( v4[8] )
  {
    v105 = 1;
    CurrentThread = 0LL;
    v88 = 0LL;
  }
  else
  {
    v24 = *v4;
    v105 = 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v88 = v24;
    ExAcquirePushLockExclusiveEx(v24 + 40, 0LL);
  }
  v8 = (volatile signed __int32 *)(v4 + 9);
  v102 = v4 + 9;
  v96[1] = v5 & 0x180;
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
  v82 = CurrentIrql + 1;
  v103 = 0x7FFFFFFFFFFFFFFCLL;
  while ( 1 )
  {
    v98 = v7;
    if ( *(_QWORD *)(v7 + 8) )
      break;
    v100 = *(_DWORD *)(v7 + 52) & 0x3FFFFFFF;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4 + 18);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v35 = KeGetCurrentIrql();
        if ( v35 <= 0xFu && CurrentIrql <= 0xFu && v35 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v37 = CurrentPrcb->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << v82);
          v19 = (v38 & v37[5]) == 0;
          v37[5] &= v38;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( !v105 )
    {
      v25 = v88 + 40;
      BugCheckParameter2a = v88 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v88 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      {
        ExfTryToWakePushLock(v25);
        v25 = BugCheckParameter2a;
      }
      BugCheckParameter3_4 = 0;
      BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v25) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx(*(_QWORD *)(BugCheckParameter1 + 184));
      else
        SessionId = 0xFFFFFFFFLL;
      v27 = BugCheckParameter1;
      --*(_WORD *)(BugCheckParameter1 + 486);
      ++*(_BYTE *)(v27 + 794);
      v28 = BugCheckParameter2a;
      v108 = *(_BYTE *)(v27 + 794);
      v29 = (*(char *)(v27 + 792) | *(char *)(v27 + 870)) ^ 0x3F;
      v19 = !_BitScanReverse((unsigned int *)&v30, v29);
      v90 = v30;
      if ( v19 )
        goto LABEL_80;
      while ( 1 )
      {
        v31 = ~(1 << v30);
        v32 = *(_QWORD *)(v27 + 800) + 96 * v30;
        v29 &= v31;
        v101 = v32;
        if ( (*(_BYTE *)(v32 + 26) & 1) != 0
          && (*(_DWORD *)(v32 + 32) & 1) == 0
          && (v103 & *(_QWORD *)(v32 + 32)) == (BugCheckParameter2a & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v32 + 40) == (_DWORD)SessionId )
        {
          *(_BYTE *)(v32 + 26) &= ~1u;
          if ( *(_QWORD *)(v32 + 32) )
            break;
        }
        v19 = !_BitScanReverse((unsigned int *)&v30, v29);
        v90 = v30;
        if ( v19 )
          goto LABEL_80;
      }
      if ( !v32 )
      {
LABEL_80:
        if ( (*(_DWORD *)(v27 + 120) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, v27, BugCheckParameter2a, SessionId, 0LL);
      }
      else
      {
        *(_BYTE *)(v32 + 32) |= 2u;
        if ( *(__int64 *)(v32 + 32) < 0 )
        {
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v32);
          v32 = v101;
          v27 = BugCheckParameter1;
          v28 = BugCheckParameter2a;
        }
        BugCheckParameter3_4 = 0;
        BugCheckParameter3_4 = *(_DWORD *)(v32 + 88) & 0x1FFFF;
        *(_DWORD *)(v32 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v32 + 25) &= ~1u;
        *(_QWORD *)(v32 + 32) = 0LL;
        v33 = 1 << ((v32 - *(_QWORD *)(v27 + 800)) / 96);
        if ( v108 == 1 )
          *(_BYTE *)(v27 + 792) |= v33;
        else
          _InterlockedOr8((volatile signed __int8 *)(v27 + 870), v33);
      }
      --*(_BYTE *)(v27 + 794);
      KiAbThreadRemoveBoosts(v27, v28, &BugCheckParameter3_4);
      v34 = BugCheckParameter1;
      v19 = (*(_WORD *)(BugCheckParameter1 + 486))++ == 0xFFFF;
      if ( v19 && *(_QWORD *)(v34 + 152) != v34 + 152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( (v5 & 2) != 0 )
      return 3221225865LL;
    result = MiCreatePrototypePtes(v7);
    v112 = result;
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741302 )
        goto LABEL_191;
      if ( !v105 )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v88 + 40, 0LL);
      }
      ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v4 + 18);
      goto LABEL_56;
    }
    if ( !v105 )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(v88 + 40, 0LL);
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
    v97 = v98;
    if ( !v105 )
      v97 = v98;
LABEL_56:
    if ( !v7 )
    {
LABEL_16:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v102, retaddr);
      else
        *v102 = 0;
      v12 = KeGetCurrentPrcb();
      v13 = v12->SchedulerAssist;
      if ( v13 )
      {
        if ( v12->NestingLevel <= 1u )
        {
          v65 = v13[6] - 1;
          v13[6] = v65;
          if ( !v65 )
            KiRemoveSystemWorkPriorityKick(v12);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v66 = KeGetCurrentIrql();
          if ( v66 <= 0xFu && CurrentIrql <= 0xFu && v66 >= 2u )
          {
            v67 = KeGetCurrentPrcb();
            v68 = v67->SchedulerAssist;
            v69 = ~(unsigned __int16)(-1LL << v82);
            v19 = (v69 & v68[5]) == 0;
            v68[5] &= v69;
            if ( v19 )
              KiRemoveSystemWorkPriorityKick(v67);
          }
        }
      }
      __writecr8(CurrentIrql);
      if ( v105 )
        return 0LL;
      v15 = v88 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v88 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v15);
      v94 = 0;
      v16 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v15) == 1 )
        BugCheckParameter3 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
      --v16->SpecialApcDisable;
      v17 = ++v16->AbAllocationRegionCount;
      v18 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
      v19 = !_BitScanReverse((unsigned int *)&v20, v18);
      v93 = v20;
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
          v93 = v20;
          if ( v19 )
            goto LABEL_50;
        }
        if ( v21 )
        {
          *(_BYTE *)(v21 + 32) |= 2u;
          if ( *(__int64 *)(v21 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v21);
          v94 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
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
          KiAbThreadRemoveBoosts((ULONG_PTR)v16, v15, &v94);
          v19 = v16->SpecialApcDisable++ == -1;
          if ( v19 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
            KiCheckForKernelApcDelivery();
          KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
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
    v112 = active;
    if ( active < 0 )
    {
      if ( active != -1073741302 )
      {
        v43 = (volatile LONG *)(v4 + 9);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4 + 18);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v44 = KeGetCurrentIrql();
            if ( v44 <= 0xFu && CurrentIrql <= 0xFu && v44 >= 2u )
            {
              v45 = KeGetCurrentPrcb();
              v46 = v45->SchedulerAssist;
              v47 = ~(unsigned __int16)(-1LL << v82);
              v19 = (v47 & v46[5]) == 0;
              v46[5] &= v47;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick(v45);
            }
          }
        }
        __writecr8(CurrentIrql);
        v48 = v105;
        if ( !v105 )
        {
          v49 = v88 + 40;
          BugCheckParameter2b = v88 + 40;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v88 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          {
            ExfTryToWakePushLock(v49);
            v49 = BugCheckParameter2b;
          }
          v92 = 0;
          v106 = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v49) == 1 )
            v50 = (unsigned int)MmGetSessionIdEx((__int64)v106->ApcState.Process);
          else
            v50 = 0xFFFFFFFFLL;
          v51 = (ULONG_PTR)v106;
          --v106->SpecialApcDisable;
          ++v106->AbAllocationRegionCount;
          v52 = BugCheckParameter2b;
          AbAllocationRegionCount = v106->AbAllocationRegionCount;
          v98 = BugCheckParameter2b & 0x7FFFFFFFFFFFFFFCLL;
          v53 = ((char)v106->AbEntrySummary | (char)v106->AbOrphanedEntrySummary) ^ 0x3F;
          v19 = !_BitScanReverse((unsigned int *)&v54, v53);
          v91 = v54;
          if ( v19 )
            goto LABEL_135;
          while ( 1 )
          {
            v55 = (__int64)&v106->LockEntries[v54];
            v101 = v55;
            v53 &= ~(1 << v54);
            if ( (*(_BYTE *)(v55 + 26) & 1) != 0
              && (*(_DWORD *)(v55 + 32) & 1) == 0
              && (*(_QWORD *)(v55 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v98
              && *(_DWORD *)(v55 + 40) == (_DWORD)v50 )
            {
              *(_BYTE *)(v55 + 26) &= ~1u;
              if ( *(_QWORD *)(v55 + 32) )
                break;
            }
            v19 = !_BitScanReverse((unsigned int *)&v54, v53);
            v91 = v54;
            if ( v19 )
              goto LABEL_135;
          }
          if ( !v55 )
          {
LABEL_135:
            if ( (*((_DWORD *)&v106->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v106, BugCheckParameter2b, v50, 0LL);
          }
          else
          {
            *(_BYTE *)(v55 + 32) |= 2u;
            if ( *(__int64 *)(v55 + 32) < 0 )
            {
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v55);
              v51 = (ULONG_PTR)v106;
              v55 = v101;
              v52 = BugCheckParameter2b;
            }
            v92 = *(_DWORD *)(v55 + 88) & 0x1FFFF;
            *(_DWORD *)(v55 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v55 + 25) &= ~1u;
            *(_QWORD *)(v55 + 32) = 0LL;
            v56 = (__int64)((unsigned __int128)((v55 - *(_QWORD *)(v51 + 800)) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4;
            v57 = 1 << (v56 + (v56 < 0));
            if ( AbAllocationRegionCount == 1 )
              *(_BYTE *)(v51 + 792) |= v57;
            else
              _InterlockedOr8((volatile signed __int8 *)(v51 + 870), v57);
          }
          v58 = &v92;
          goto LABEL_140;
        }
        goto LABEL_144;
      }
      goto LABEL_56;
    }
    v97 = v7;
    if ( v105 != 1 || (*(_DWORD *)(v7 + 52) & 0x40000000) == 0 )
      goto LABEL_14;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4 + 18);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v39 = KeGetCurrentIrql();
        if ( v39 <= 0xFu && CurrentIrql <= 0xFu && v39 >= 2u )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          v42 = ~(unsigned __int16)(-1LL << v82);
          v19 = (v42 & v41[5]) == 0;
          v41[5] &= v42;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
    }
    __writecr8(CurrentIrql);
    result = MiAllocateFileExtents(v7, 0);
    v112 = result;
    if ( (int)result < 0 )
    {
LABEL_191:
      v48 = v105;
      v43 = (volatile LONG *)(v4 + 9);
      goto LABEL_145;
    }
    goto LABEL_48;
  }
  v43 = (volatile LONG *)(v4 + 9);
  v112 = -1073741800;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v4 + 18);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v70 = KeGetCurrentIrql();
      if ( v70 <= 0xFu && CurrentIrql <= 0xFu && v70 >= 2u )
      {
        v71 = KeGetCurrentPrcb();
        v72 = v71->SchedulerAssist;
        v73 = ~(unsigned __int16)(-1LL << v82);
        v19 = (v73 & v72[5]) == 0;
        v72[5] &= v73;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v71);
      }
    }
  }
  __writecr8(CurrentIrql);
  v48 = v105;
  if ( !v105 )
  {
    v74 = v88 + 40;
    BugCheckParameter2c = v88 + 40;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v88 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    {
      ExfTryToWakePushLock(v74);
      v74 = BugCheckParameter2c;
    }
    v96[0] = 0;
    v106 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v74) == 1 )
      v75 = MmGetSessionIdEx((__int64)v106->ApcState.Process);
    else
      v75 = -1;
    v51 = (ULONG_PTR)v106;
    --v106->SpecialApcDisable;
    ++v106->AbAllocationRegionCount;
    v52 = BugCheckParameter2c;
    v111 = v106->AbAllocationRegionCount;
    v76 = ((char)v106->AbEntrySummary | (char)v106->AbOrphanedEntrySummary) ^ 0x3F;
    v19 = !_BitScanReverse((unsigned int *)&v77, v76);
    v95 = v77;
    if ( v19 )
      goto LABEL_189;
    while ( 1 )
    {
      v78 = ~(1 << v77);
      v79 = (__int64)&v106->LockEntries[v77];
      v76 &= v78;
      v98 = v79;
      if ( (*(_BYTE *)(v79 + 26) & 1) != 0
        && (*(_DWORD *)(v79 + 32) & 1) == 0
        && (v103 & *(_QWORD *)(v79 + 32)) == (BugCheckParameter2c & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v79 + 40) == v75 )
      {
        *(_BYTE *)(v79 + 26) &= ~1u;
        if ( *(_QWORD *)(v79 + 32) )
          break;
      }
      v19 = !_BitScanReverse((unsigned int *)&v77, v76);
      v95 = v77;
      if ( v19 )
        goto LABEL_189;
    }
    if ( !v79 )
    {
LABEL_189:
      if ( (*((_DWORD *)&v106->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v106, BugCheckParameter2c, v75, 0LL);
    }
    else
    {
      *(_BYTE *)(v79 + 32) |= 2u;
      if ( *(__int64 *)(v79 + 32) < 0 )
      {
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v79);
        v51 = (ULONG_PTR)v106;
        v79 = v98;
        v52 = BugCheckParameter2c;
      }
      v96[0] = *(_DWORD *)(v79 + 88) & 0x1FFFF;
      *(_DWORD *)(v79 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v79 + 25) &= ~1u;
      *(_QWORD *)(v79 + 32) = 0LL;
      v80 = 1 << ((v79 - *(_QWORD *)(v51 + 800)) / 96);
      if ( v111 == 1 )
        *(_BYTE *)(v51 + 792) |= v80;
      else
        _InterlockedOr8((volatile signed __int8 *)(v51 + 870), v80);
    }
    v58 = v96;
LABEL_140:
    --*(_BYTE *)(v51 + 794);
    KiAbThreadRemoveBoosts(v51, v52, v58);
    v19 = v106->SpecialApcDisable++ == -1;
    if ( v19 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v106->ApcState.ApcListHead[0].Flink != &v106->152 )
      KiCheckForKernelApcDelivery();
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
LABEL_144:
  result = v112;
LABEL_145:
  if ( v97 )
  {
    v110 = ExAcquireSpinLockExclusive(v43);
    v59 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2);
    ExReleaseSpinLockExclusiveFromDpcLevel(v43);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v60 = KeGetCurrentIrql(), v60 <= 0xFu) )
    {
      v61 = v110;
      if ( v110 <= 0xFu && v60 >= 2u )
      {
        v62 = KeGetCurrentPrcb();
        v63 = ~(unsigned __int16)(-1LL << (v110 + 1));
        v64 = v62->SchedulerAssist;
        v19 = (v63 & v64[5]) == 0;
        v64[5] &= v63;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v62);
      }
    }
    else
    {
      v61 = v110;
    }
    __writecr8(v61);
    if ( v59 )
      MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C4E448 + 8LL * (*((_WORD *)v4 + 30) & 0x3FF)), v48, v59);
    result = v112;
  }
  if ( (v5 & 1) != 0 )
  {
    v81 = ExAcquireSpinLockExclusive(v43);
    --v4[5];
    --*((_DWORD *)v4 + 22);
    MiCheckControlArea(v4, v81);
    return v112;
  }
  return result;
}
