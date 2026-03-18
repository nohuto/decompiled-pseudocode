/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x1402CCAB0
 * Callers:
 *     RtlpHpSegAlloc @ 0x1402CC910 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140216290 (RtlRbRemoveNode.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x14027F330 (ExpAcquireSpinLockExclusive.c)
 *     RtlpHpSegPageRangeCountCommittedPages @ 0x1402CD9C0 (RtlpHpSegPageRangeCountCommittedPages.c)
 *     RtlpHpSegFreeRangeInsert @ 0x1402CDA30 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegLockAcquire @ 0x1402D42F8 (RtlpHpSegLockAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     RtlpHpSegSegmentAllocate @ 0x140306F8C (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x14030866C (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegHeapAddSegment @ 0x14032A05C (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x14037DE2C (RtlpHpSegLargeRangeAllocate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, int a2, __int64 a3, _DWORD *SchedulerAssist)
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
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  int v16; // ecx
  unsigned __int64 v17; // rax
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
  unsigned __int64 v30; // rsi
  __int16 v31; // ax
  unsigned __int64 v32; // rcx
  struct _KTHREAD *v33; // r14
  unsigned __int8 v34; // r12
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  struct _KTHREAD *CurrentThread; // rax
  char *v45; // rcx
  char v46; // al
  ULONG_PTR v47; // rdi
  struct _KTHREAD *v48; // rsi
  ULONG_PTR SessionId; // r9
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rdx
  unsigned __int8 v55; // al
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  unsigned __int8 v61; // di
  unsigned __int8 v62; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v64; // r9
  int v65; // eax
  int v66; // eax
  unsigned __int8 v67; // cl
  struct _KPRCB *v68; // r9
  _DWORD *v69; // r8
  int v70; // eax
  int v71; // [rsp+34h] [rbp-64h] BYREF
  __int64 v72; // [rsp+38h] [rbp-60h]
  __int64 v73; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v75; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int8 v76; // [rsp+A8h] [rbp+10h]
  int v77; // [rsp+B0h] [rbp+18h]
  int v78; // [rsp+B8h] [rbp+20h]

  v5 = 1;
  v7 = *(_BYTE *)(a1 + 9);
  LOBYTE(v4) = -1;
  v8 = a3;
  v72 = v4;
  v9 = (unsigned int)((1 << v7) + a2 - 1) >> v7;
  v10 = v9 << 24;
  v78 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v72 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = a3;
      }
      v12 = (volatile signed __int32 *)(a1 + 64);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v12, CurrentIrql);
      else
        ExpAcquireSpinLockExclusive(v12, CurrentIrql, a3, (__int64)SchedulerAssist);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
      LOBYTE(v72) = -1;
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
    RtlRbRemoveNode((unsigned __int64 *)(a1 + 96), v14);
    *(_OWORD *)v14 = 0LL;
    *(_QWORD *)(v14 + 16) = 0LL;
    v19 = ~(unsigned __int16)*(_DWORD *)(v14 + 28);
    *(_DWORD *)v14 = -857879331;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v19);
  }
  if ( !v14 )
  {
LABEL_62:
    if ( !v78 )
    {
      v47 = a1 + 64;
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        v61 = v72;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v62 = KeGetCurrentIrql();
            if ( v62 <= 0xFu && (unsigned __int8)v72 <= 0xFu && v62 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v64 = CurrentPrcb->SchedulerAssist;
              v65 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v72 + 1));
              v22 = (v65 & v64[5]) == 0;
              v64[5] &= v65;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v61);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v47, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
        v75 = 0;
        v48 = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx((__int64)v48->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --v48->SpecialApcDisable;
        v76 = ++v48->AbAllocationRegionCount;
        v50 = v47 & 0x7FFFFFFFFFFFFFFCLL;
        LODWORD(v51) = ((char)v48->AbEntrySummary | (char)v48->AbOrphanedEntrySummary) ^ 0x3F;
        v22 = !_BitScanReverse((unsigned int *)&v52, v51);
        v77 = v52;
        if ( v22 )
        {
LABEL_92:
          if ( (*((_DWORD *)&v48->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)v48, v47, SessionId, 0LL);
        }
        else
        {
          while ( 1 )
          {
            v53 = (__int64)&v48->LockEntries[v52];
            v51 = ~(1 << v52) & (unsigned int)v51;
            if ( (*(_BYTE *)(v53 + 26) & 1) != 0
              && (*(_DWORD *)(v53 + 32) & 1) == 0
              && (*(_QWORD *)(v53 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v50
              && *(_DWORD *)(v53 + 40) == (_DWORD)SessionId )
            {
              *(_BYTE *)(v53 + 26) &= ~1u;
              if ( *(_QWORD *)(v53 + 32) )
                break;
            }
            v22 = !_BitScanReverse((unsigned int *)&v52, v51);
            v77 = v52;
            if ( v22 )
              goto LABEL_91;
          }
          if ( !v53 )
          {
LABEL_91:
            v47 = a1 + 64;
            goto LABEL_92;
          }
          *(_BYTE *)(v53 + 32) |= 2u;
          if ( *(__int64 *)(v53 + 32) < 0 )
            KiAbEntryRemoveFromTree(v53, v51, v50);
          v75 = *(_DWORD *)(v53 + 88) & 0x1FFFF;
          *(_DWORD *)(v53 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v53 + 25) &= ~1u;
          *(_QWORD *)(v53 + 32) = 0LL;
          v54 = (unsigned __int128)((v53 - (unsigned __int64)v48->LockEntries) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
          v47 = a1 + 64;
          v55 = 1 << ((v54 >> 4) + (v54 < 0));
          if ( v76 == 1 )
            v48->AbEntrySummary |= v55;
          else
            _InterlockedOr8((volatile signed __int8 *)&v48->AbOrphanedEntrySummary, v55);
        }
        --v48->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)v48, v47, &v75);
        v22 = v48->SpecialApcDisable++ == -1;
        if ( v22 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v48->ApcState.ApcListHead[0].Flink != &v48->152 )
          KiCheckForKernelApcDelivery(v57, v56, v58, v59);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
    v60 = RtlpHpSegSegmentAllocate(a1, 0LL, (v8 & 0x800000) != 0 ? 2 : 0);
    v73 = v60;
    if ( !v60 )
      return 0LL;
    RtlpHpSegSegmentInitialize(a1, v60, 0LL);
    v14 = v73 + 32LL * *(unsigned __int8 *)(a1 + 10);
    LOBYTE(v72) = RtlpHpSegLockAcquire(a1, v8);
    RtlpHpSegHeapAddSegment(a1, v73);
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
  v22 = v78 == 0;
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
          v66 = v25[6] - 1;
          v25[6] = v66;
          if ( !v66 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v67 = KeGetCurrentIrql();
          if ( v67 <= 0xFu && (unsigned __int8)v72 <= 0xFu && v67 >= 2u )
          {
            v68 = KeGetCurrentPrcb();
            v69 = v68->SchedulerAssist;
            v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v72 + 1));
            v22 = (v70 & v69[5]) == 0;
            v69[5] &= v70;
            if ( v22 )
              KiRemoveSystemWorkPriorityKick(v68);
          }
        }
      }
      __writecr8((unsigned __int8)v72);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
      v71 = 0;
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
        v71 = *(_DWORD *)(v38 + 88) & 0x1FFFF;
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
      KiAbThreadRemoveBoosts((ULONG_PTR)v33, v23, &v71);
      v22 = v33->SpecialApcDisable++ == -1;
      if ( v22 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
        KiCheckForKernelApcDelivery(v41, v40, v42, v43);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  if ( v21 > 1 )
  {
    v45 = (char *)(v14 + 56);
    do
    {
      v45[7] = v5++;
      v46 = *v45;
      v45 += 32;
      *(v45 - 32) = v46 | 1;
    }
    while ( v5 < v21 );
  }
  return v14;
}
