/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x140256F00
 * Callers:
 *     RtlpHpSegAlloc @ 0x140256D60 (RtlpHpSegAlloc.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402135A0 (ExpAcquireSpinLockExclusive.c)
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x140257E10 (RtlpHpSegPageRangeCountCommittedPages.c)
 *     RtlpHpSegFreeRangeInsert @ 0x140257E80 (RtlpHpSegFreeRangeInsert.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     RtlRbRemoveNode @ 0x14028B370 (RtlRbRemoveNode.c)
 *     RtlpHpSegLockAcquire @ 0x1402CF3B0 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegSegmentAllocate @ 0x1402D8CF4 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x1402DA478 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegHeapAddSegment @ 0x14035975C (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x14037C0FC (RtlpHpSegLargeRangeAllocate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rdx
  struct _KTHREAD *CurrentThread; // rax
  char *v41; // rcx
  char v42; // al
  ULONG_PTR v43; // rdi
  struct _KTHREAD *v44; // rsi
  ULONG_PTR SessionId; // r9
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rdx
  unsigned __int8 v51; // al
  __int64 v52; // rax
  unsigned __int8 v53; // di
  unsigned __int8 v54; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v56; // r9
  int v57; // eax
  int v58; // eax
  unsigned __int8 v59; // cl
  struct _KPRCB *v60; // r9
  _DWORD *v61; // r8
  int v62; // eax
  int v63; // [rsp+34h] [rbp-64h] BYREF
  __int64 v64; // [rsp+38h] [rbp-60h]
  __int64 v65; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v67; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int8 v68; // [rsp+A8h] [rbp+10h]
  int v69; // [rsp+B0h] [rbp+18h]
  int v70; // [rsp+B8h] [rbp+20h]

  v5 = 1;
  v7 = *(_BYTE *)(a1 + 9);
  LOBYTE(v4) = -1;
  v8 = a3;
  v64 = v4;
  v9 = (unsigned int)((1 << v7) + a2 - 1) >> v7;
  v10 = v9 << 24;
  v70 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v64 = CurrentIrql;
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
        ExpAcquireSpinLockExclusive(v12, CurrentIrql, a3, (__int64)SchedulerAssist);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
      LOBYTE(v64) = -1;
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
    RtlRbRemoveNode(a1 + 96, v14);
    *(_OWORD *)v14 = 0LL;
    *(_QWORD *)(v14 + 16) = 0LL;
    v19 = ~(unsigned __int16)*(_DWORD *)(v14 + 28);
    *(_DWORD *)v14 = -857879331;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v19);
  }
  if ( !v14 )
  {
LABEL_62:
    if ( !v70 )
    {
      v43 = a1 + 64;
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        v53 = v64;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v54 = KeGetCurrentIrql();
            if ( v54 <= 0xFu && (unsigned __int8)v64 <= 0xFu && v54 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v56 = CurrentPrcb->SchedulerAssist;
              v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v64 + 1));
              v22 = (v57 & v56[5]) == 0;
              v56[5] &= v57;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v53);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v43, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(a1 + 64);
        v67 = 0;
        v44 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx((__int64)v44->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --v44->SpecialApcDisable;
        v68 = ++v44->AbAllocationRegionCount;
        v46 = v43 & 0x7FFFFFFFFFFFFFFCLL;
        LODWORD(v47) = ((char)v44->AbEntrySummary | (char)v44->AbOrphanedEntrySummary) ^ 0x3F;
        v22 = !_BitScanReverse((unsigned int *)&v48, v47);
        v69 = v48;
        if ( v22 )
        {
LABEL_92:
          if ( (*((_DWORD *)&v44->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v44, v43, SessionId, 0LL);
        }
        else
        {
          while ( 1 )
          {
            v49 = (__int64)&v44->LockEntries[v48];
            v47 = ~(1 << v48) & (unsigned int)v47;
            if ( (*(_BYTE *)(v49 + 26) & 1) != 0
              && (*(_DWORD *)(v49 + 32) & 1) == 0
              && (*(_QWORD *)(v49 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v46
              && *(_DWORD *)(v49 + 40) == (_DWORD)SessionId )
            {
              *(_BYTE *)(v49 + 26) &= ~1u;
              if ( *(_QWORD *)(v49 + 32) )
                break;
            }
            v22 = !_BitScanReverse((unsigned int *)&v48, v47);
            v69 = v48;
            if ( v22 )
              goto LABEL_91;
          }
          if ( !v49 )
          {
LABEL_91:
            v43 = a1 + 64;
            goto LABEL_92;
          }
          *(_BYTE *)(v49 + 32) |= 2u;
          if ( *(__int64 *)(v49 + 32) < 0 )
            KiAbEntryRemoveFromTree(v49, v47, v46);
          v67 = *(_DWORD *)(v49 + 88) & 0x1FFFF;
          *(_DWORD *)(v49 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v49 + 25) &= ~1u;
          *(_QWORD *)(v49 + 32) = 0LL;
          v50 = (unsigned __int128)((v49 - (unsigned __int64)v44->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
          v43 = a1 + 64;
          v51 = 1 << ((v50 >> 4) + (v50 < 0));
          if ( v68 == 1 )
            v44->AbEntrySummary |= v51;
          else
            _InterlockedOr8((volatile signed __int8 *)&v44->AbOrphanedEntrySummary, v51);
        }
        --v44->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v44, v43, &v67);
        v22 = v44->SpecialApcDisable++ == -1;
        if ( v22 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v44->ApcState.ApcListHead[0].Flink != &v44->152 )
          KiCheckForKernelApcDelivery();
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
    v52 = RtlpHpSegSegmentAllocate(a1, 0LL, (v8 & 0x800000) != 0 ? 2 : 0);
    v65 = v52;
    if ( !v52 )
      return 0LL;
    RtlpHpSegSegmentInitialize(a1, v52, 0LL);
    v14 = v65 + 32LL * *(unsigned __int8 *)(a1 + 10);
    LOBYTE(v64) = RtlpHpSegLockAcquire(a1, v8);
    RtlpHpSegHeapAddSegment(a1, v65);
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
  v22 = v70 == 0;
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
          v58 = v25[6] - 1;
          v25[6] = v58;
          if ( !v58 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v59 = KeGetCurrentIrql();
          if ( v59 <= 0xFu && (unsigned __int8)v64 <= 0xFu && v59 >= 2u )
          {
            v60 = KeGetCurrentPrcb();
            v61 = v60->SchedulerAssist;
            v62 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v64 + 1));
            v22 = (v62 & v61[5]) == 0;
            v61[5] &= v62;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(v60);
          }
        }
      }
      __writecr8((unsigned __int8)v64);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 64);
      v63 = 0;
      v32 = a1 + 64;
      v33 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v32) == 1 )
        v18 = MmGetSessionIdEx((__int64)v33->ApcState.Process);
      --v33->SpecialApcDisable;
      v34 = ++v33->AbAllocationRegionCount;
      LODWORD(v35) = ((char)v33->AbEntrySummary | (char)v33->AbOrphanedEntrySummary) ^ 0x3F;
      v36 = v23 & 0x7FFFFFFFFFFFFFFCLL;
      v22 = !_BitScanReverse((unsigned int *)&v37, v35);
      if ( v22 )
        goto LABEL_60;
      while ( 1 )
      {
        v38 = (__int64)&v33->LockEntries[v37];
        v35 = ~(1 << v37) & (unsigned int)v35;
        if ( (*(_BYTE *)(v38 + 26) & 1) != 0
          && (*(_DWORD *)(v38 + 32) & 1) == 0
          && (*(_QWORD *)(v38 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v36
          && *(_DWORD *)(v38 + 40) == v18 )
        {
          *(_BYTE *)(v38 + 26) &= ~1u;
          if ( *(_QWORD *)(v38 + 32) )
            break;
        }
        v22 = !_BitScanReverse((unsigned int *)&v37, v35);
        if ( v22 )
          goto LABEL_60;
      }
      if ( !v38 )
      {
LABEL_60:
        if ( (*((_DWORD *)&v33->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v33, v23, v18, 0LL);
      }
      else
      {
        *(_BYTE *)(v38 + 32) |= 2u;
        if ( *(__int64 *)(v38 + 32) < 0 )
          KiAbEntryRemoveFromTree(v38, v35, v36);
        v63 = *(_DWORD *)(v38 + 88) & 0x1FFFF;
        *(_DWORD *)(v38 + 88) &= 0xFFFE0000;
        *(_BYTE *)(v38 + 25) &= ~1u;
        *(_QWORD *)(v38 + 32) = 0LL;
        v39 = (signed __int64)(v38 - (unsigned __int64)v33->LockEntries) / 96;
        if ( v34 == 1 )
          v33->AbEntrySummary |= 1 << v39;
        else
          _InterlockedOr8((volatile signed __int8 *)&v33->AbOrphanedEntrySummary, 1 << v39);
      }
      --v33->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v33, v23, &v63);
      v22 = v33->SpecialApcDisable++ == -1;
      if ( v22 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
        KiCheckForKernelApcDelivery();
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  if ( v21 > 1 )
  {
    v41 = (char *)(v14 + 56);
    do
    {
      v41[7] = v5++;
      v42 = *v41;
      v41 += 32;
      *(v41 - 32) = v42 | 1;
    }
    while ( v5 < v21 );
  }
  return v14;
}
