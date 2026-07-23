/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x1402AFF30
 * Callers:
 *     RtlpHpSegAlloc @ 0x1402AFD90 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegLockAcquire @ 0x14023C580 (RtlpHpSegLockAcquire.c)
 *     RtlRbRemoveNode @ 0x14024EAD0 (RtlRbRemoveNode.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14026C5F0 (ExpAcquireSpinLockExclusive.c)
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x1402B0E40 (RtlpHpSegPageRangeCountCommittedPages.c)
 *     RtlpHpSegFreeRangeInsert @ 0x1402B0EB0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegHeapAddSegment @ 0x14031BB8C (RtlpHpSegHeapAddSegment.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlpHpSegSegmentInitialize @ 0x14035FE40 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegSegmentAllocate @ 0x140360AC8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x14037B37C (RtlpHpSegLargeRangeAllocate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B00F4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, int a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rdi
  unsigned int v5; // ebp
  char v7; // cl
  unsigned int v8; // r12d
  unsigned int v9; // r15d
  unsigned int v10; // esi
  __int64 CurrentIrql; // rdi
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // r13d
  unsigned __int16 v19; // ax
  int v20; // ecx
  unsigned int v21; // esi
  bool v22; // zf
  ULONG_PTR v23; // r15
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  int v27; // ecx
  char v28; // r8
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int16 v31; // ax
  unsigned __int64 v32; // rcx
  struct _KTHREAD *v33; // r14
  unsigned __int8 v34; // r12
  unsigned int v35; // edx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  struct _KTHREAD *CurrentThread; // rax
  char *v44; // rcx
  char v45; // al
  ULONG_PTR v46; // rdi
  struct _KTHREAD *v47; // rsi
  ULONG_PTR SessionId; // r9
  __int64 v49; // r8
  unsigned int v50; // edx
  __int64 v51; // rcx
  __int64 v52; // rdi
  __int64 v53; // rdx
  unsigned __int8 v54; // al
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  unsigned __int8 v60; // di
  unsigned __int8 v61; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v63; // r9
  int v64; // eax
  int v65; // eax
  unsigned __int8 v66; // cl
  struct _KPRCB *v67; // r9
  _DWORD *v68; // r8
  int v69; // eax
  int v70; // [rsp+34h] [rbp-64h] BYREF
  __int64 v71; // [rsp+38h] [rbp-60h]
  __int64 v72; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v74; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int8 v75; // [rsp+A8h] [rbp+10h]
  int v76; // [rsp+B0h] [rbp+18h]
  int v77; // [rsp+B8h] [rbp+20h]

  v5 = 1;
  v7 = *(_BYTE *)(a1 + 9);
  LOBYTE(v4) = -1;
  v8 = a3;
  v71 = v4;
  v9 = (unsigned int)((1 << v7) + a2 - 1) >> v7;
  v10 = v9 << 24;
  v77 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v71 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = a3;
      }
      v12 = (volatile signed __int32 *)(a1 + 64);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v12, (unsigned __int8)CurrentIrql);
      else
        ExpAcquireSpinLockExclusive(v12, CurrentIrql, a3, SchedulerAssist);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
      LOBYTE(v71) = -1;
    }
  }
  v13 = *(_QWORD *)(a1 + 104);
  v14 = *(_QWORD *)(a1 + 96);
  if ( (v13 & 1) != 0 && v14 )
    v14 ^= a1 + 96;
  v15 = 0LL;
  v16 = v13 & 1;
  while ( v14 )
  {
    if ( v10 < *(_DWORD *)(v14 + 28) )
    {
      v17 = *(_QWORD *)v14;
      v15 = v14;
      if ( v16 && v17 )
        goto LABEL_35;
    }
    else
    {
      if ( v10 <= *(_DWORD *)(v14 + 28) )
        goto LABEL_16;
      v17 = *(_QWORD *)(v14 + 8);
      if ( v16 && v17 )
      {
LABEL_35:
        v14 ^= v17;
        continue;
      }
    }
    v14 = v17;
  }
  v14 = v15;
LABEL_16:
  v18 = -1;
  if ( !v14 )
    goto LABEL_62;
  if ( (v8 & 0x800000) != 0 )
  {
    v14 = RtlpHpSegLargeRangeAllocate(a1, v14, v9, 1LL);
  }
  else
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v14);
    *(_OWORD *)v14 = 0LL;
    *(_QWORD *)(v14 + 16) = 0LL;
    v19 = ~(unsigned __int16)*(_DWORD *)(v14 + 28);
    *(_DWORD *)v14 = -857879331;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v19);
  }
  if ( !v14 )
  {
LABEL_62:
    if ( !v77 )
    {
      v46 = a1 + 64;
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        v60 = v71;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v61 = KeGetCurrentIrql();
            if ( v61 <= 0xFu && (unsigned __int8)v71 <= 0xFu && v61 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v63 = CurrentPrcb->SchedulerAssist;
              v64 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v71 + 1));
              v22 = (v64 & v63[5]) == 0;
              v63[5] &= v64;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v60);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v46, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(a1 + 64);
        v74 = 0;
        v47 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx((__int64)v47->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --v47->SpecialApcDisable;
        v75 = ++v47->AbAllocationRegionCount;
        v49 = v46 & 0x7FFFFFFFFFFFFFFCLL;
        v50 = ((char)v47->AbEntrySummary | (char)v47->AbOrphanedEntrySummary) ^ 0x3F;
        v22 = !_BitScanReverse((unsigned int *)&v51, v50);
        v76 = v51;
        if ( v22 )
        {
LABEL_92:
          if ( (*((_DWORD *)&v47->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v47, v46, SessionId, 0LL);
        }
        else
        {
          while ( 1 )
          {
            v52 = (__int64)&v47->LockEntries[v51];
            v50 &= ~(1 << v51);
            if ( (*(_BYTE *)(v52 + 26) & 1) != 0
              && (*(_DWORD *)(v52 + 32) & 1) == 0
              && (*(_QWORD *)(v52 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v49
              && *(_DWORD *)(v52 + 40) == (_DWORD)SessionId )
            {
              *(_BYTE *)(v52 + 26) &= ~1u;
              if ( *(_QWORD *)(v52 + 32) )
                break;
            }
            v22 = !_BitScanReverse((unsigned int *)&v51, v50);
            v76 = v51;
            if ( v22 )
              goto LABEL_91;
          }
          if ( !v52 )
          {
LABEL_91:
            v46 = a1 + 64;
            goto LABEL_92;
          }
          *(_BYTE *)(v52 + 32) |= 2u;
          if ( *(__int64 *)(v52 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v52);
          v74 = *(_DWORD *)(v52 + 88) & 0x1FFFF;
          *(_DWORD *)(v52 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v52 + 25) &= ~1u;
          *(_QWORD *)(v52 + 32) = 0LL;
          v53 = (unsigned __int128)((v52 - (unsigned __int64)v47->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
          v46 = a1 + 64;
          v54 = 1 << ((v53 >> 4) + (v53 < 0));
          if ( v75 == 1 )
            v47->AbEntrySummary |= v54;
          else
            _InterlockedOr8((volatile signed __int8 *)&v47->AbOrphanedEntrySummary, v54);
        }
        --v47->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v47, v46, &v74);
        v22 = v47->SpecialApcDisable++ == -1;
        if ( v22 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v47->ApcState.ApcListHead[0].Flink != &v47->152 )
          KiCheckForKernelApcDelivery(v56);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v55, v57, v58);
      }
    }
    v59 = RtlpHpSegSegmentAllocate(a1, 0LL, (v8 & 0x800000) != 0 ? 2 : 0);
    v72 = v59;
    if ( !v59 )
      return 0LL;
    RtlpHpSegSegmentInitialize(a1, v59, 0LL);
    v14 = v72 + 32LL * *(unsigned __int8 *)(a1 + 10);
    LOBYTE(v71) = RtlpHpSegLockAcquire(a1, v8);
    RtlpHpSegHeapAddSegment(a1, v72);
    if ( (v8 & 0x800000) != 0 )
      v14 = RtlpHpSegLargeRangeAllocate(a1, v14, v9, 0LL);
  }
  v20 = *(unsigned __int8 *)(v14 + 31);
  if ( v20 != v9 )
  {
    v27 = v20 - v9;
    v28 = v27;
    v29 = 32LL * (unsigned int)(v27 - 1);
    v30 = v14 + 32LL * v9;
    *(_BYTE *)(v30 + 24) |= 2u;
    *(_BYTE *)(v29 + v30 + 31) = v28 - 1;
    *(_BYTE *)(v30 + 31) = v28;
    v31 = RtlpHpSegPageRangeCountCommittedPages(v29, v30);
    *(_DWORD *)v30 = -857879331;
    *(_WORD *)(v30 + 28) = ~v31;
    *(_BYTE *)(32LL * (v9 - 1) + v14 + 31) = v9 - 1;
    *(_BYTE *)(v14 + 31) = v9;
    *(_WORD *)(v14 + 28) = ~(~(unsigned __int16)*(_DWORD *)(v14 + 28) + *(_WORD *)(v30 + 28) + 1);
    RtlpHpSegFreeRangeInsert(a1, v30, 0LL);
  }
  v21 = v9 - 1;
  *(_BYTE *)(v14 + 24) |= (unsigned __int8)(4 * ((v8 >> 26) & 3)) | 1;
  v22 = v77 == 0;
  *(_BYTE *)(32LL * (v9 - 1) + v14 + 24) |= 1u;
  if ( v22 )
  {
    v23 = a1 + 64;
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a1 + 64, retaddr);
      else
        *(_DWORD *)v23 = 0;
      v24 = KeGetCurrentPrcb();
      v25 = v24->SchedulerAssist;
      if ( v25 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v65 = v25[6] - 1;
          v25[6] = v65;
          if ( !v65 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v66 = KeGetCurrentIrql();
          if ( v66 <= 0xFu && (unsigned __int8)v71 <= 0xFu && v66 >= 2u )
          {
            v67 = KeGetCurrentPrcb();
            v68 = v67->SchedulerAssist;
            v69 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v71 + 1));
            v22 = (v69 & v68[5]) == 0;
            v68[5] &= v69;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(v67);
          }
        }
      }
      __writecr8((unsigned __int8)v71);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 64);
      v70 = 0;
      v32 = a1 + 64;
      v33 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v32) == 1 )
        v18 = MmGetSessionIdEx((__int64)v33->ApcState.Process);
      --v33->SpecialApcDisable;
      v34 = ++v33->AbAllocationRegionCount;
      v35 = ((char)v33->AbEntrySummary | (char)v33->AbOrphanedEntrySummary) ^ 0x3F;
      v22 = !_BitScanReverse((unsigned int *)&v36, v35);
      if ( v22 )
        goto LABEL_60;
      while ( 1 )
      {
        v37 = (__int64)&v33->LockEntries[v36];
        v35 &= ~(1 << v36);
        if ( (*(_BYTE *)(v37 + 26) & 1) != 0
          && (*(_DWORD *)(v37 + 32) & 1) == 0
          && (*(_QWORD *)(v37 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v23 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v37 + 40) == v18 )
        {
          *(_BYTE *)(v37 + 26) &= ~1u;
          if ( *(_QWORD *)(v37 + 32) )
            break;
        }
        v22 = !_BitScanReverse((unsigned int *)&v36, v35);
        if ( v22 )
          goto LABEL_60;
      }
      if ( !v37 )
      {
LABEL_60:
        if ( (*((_DWORD *)&v33->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v33, v23, v18, 0LL);
      }
      else
      {
        *(_BYTE *)(v37 + 32) |= 2u;
        if ( *(__int64 *)(v37 + 32) < 0 )
          KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v37);
        v70 = *(_DWORD *)(v37 + 88) & 0x1FFFF;
        *(_DWORD *)(v37 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v37 + 25) &= ~1u;
        *(_QWORD *)(v37 + 32) = 0LL;
        v38 = (signed __int64)(v37 - (unsigned __int64)v33->LockEntries) / 96;
        if ( v34 == 1 )
          v33->AbEntrySummary |= 1 << v38;
        else
          _InterlockedOr8((volatile signed __int8 *)&v33->AbOrphanedEntrySummary, 1 << v38);
      }
      --v33->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v33, v23, &v70);
      v22 = v33->SpecialApcDisable++ == -1;
      if ( v22 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
        KiCheckForKernelApcDelivery(v40);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v39, v41, v42);
    }
  }
  if ( v21 > 1 )
  {
    v44 = (char *)(v14 + 56);
    do
    {
      v44[7] = v5++;
      v45 = *v44;
      v44 += 32;
      *(v44 - 32) = v45 | 1;
    }
    while ( v5 < v21 );
  }
  return v14;
}
