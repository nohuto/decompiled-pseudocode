/*
 * XREFs of RtlpHpSegPageRangeCoalesce @ 0x1402CE210
 * Callers:
 *     RtlpHpSegContextCompact @ 0x14023AFB0 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402CDD70 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpSegPageRangeCommit @ 0x1402CD370 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegFreeRangeRemove @ 0x1402CE790 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpScheduleCompaction @ 0x1402CE7E4 (RtlpHpScheduleCompaction.c)
 *     RtlpHpSegLockAcquire @ 0x1402D42F8 (RtlpHpSegLockAcquire.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCoalesce(__int64 a1, __int64 a2, unsigned int a3, int a4, _BYTE *a5)
{
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned int v11; // r14d
  __int64 v12; // rbp
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbp
  __int64 v17; // rcx
  unsigned __int64 v19; // rdi
  char v20; // al
  char v21; // cl
  char v22; // dl
  __int64 v23; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR SessionId; // r9
  unsigned __int8 v26; // r12
  unsigned int v27; // edx
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v39; // eax
  int v40[18]; // [rsp+30h] [rbp-48h] BYREF
  int v41; // [rsp+80h] [rbp+8h] BYREF
  int v42; // [rsp+88h] [rbp+10h]

  v40[0] = 0;
  while ( 1 )
  {
    v9 = 0LL;
    v10 = (a2 - (a2 & *(_QWORD *)a1)) >> 5;
    v11 = (unsigned __int16)~*(_WORD *)(a2 + 28);
    if ( (unsigned int)v10 + (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28)) < 0x100 )
    {
      v9 = a2 + 32LL * (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28));
      if ( (*(_BYTE *)(v9 + 24) & 1) != 0 )
        v9 = 0LL;
    }
    if ( (unsigned int)v10 > *(unsigned __int8 *)(a1 + 10) )
    {
      v12 = a2 - 32;
      if ( (*(_BYTE *)(a2 - 8) & 2) == 0 )
        v12 += -32LL * *(unsigned __int8 *)(v12 + 31);
      if ( (*(_BYTE *)(v12 + 24) & 1) == 0 )
      {
        RtlpHpSegFreeRangeRemove(a1, v12);
        *(_BYTE *)(v12 + 31) += *(_BYTE *)(a2 + 31);
        v11 += (unsigned __int16)~*(_WORD *)(v12 + 28);
        *(_WORD *)(v12 + 28) = ~(_WORD)v11;
        *(_BYTE *)(a2 + 24) &= (*(_BYTE *)(a2 + 31) <= 1u) - 4;
        a2 = v12;
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(v12 + 31) - 1) + v12 + 31) = *(_BYTE *)(v12 + 31) - 1;
      }
    }
    *(_BYTE *)(a2 + 24) |= 0x11u;
    if ( v9 )
    {
      RtlpHpSegFreeRangeRemove(a1, v9);
      v21 = *(_BYTE *)(a2 + 31);
      if ( v21 != 1 )
      {
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1) + a2 + 24) &= ~1u;
        v21 = *(_BYTE *)(a2 + 31);
      }
      *(_BYTE *)(a2 + 31) = v21 + *(_BYTE *)(v9 + 31);
      v11 += (unsigned __int16)~*(_WORD *)(v9 + 28);
      *(_WORD *)(a2 + 28) = ~(_WORD)v11;
      *(_BYTE *)(v9 + 24) &= ~2u;
      v22 = *(_BYTE *)(a2 + 31) - 1;
      v23 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
      *(_BYTE *)(v23 + a2 + 24) |= 1u;
      *(_BYTE *)(v23 + a2 + 31) = v22;
    }
    if ( !v11 )
      break;
    if ( !a4 && (*(_BYTE *)(a1 + 13) & 8) == 0 )
    {
      v13 = *(__int16 *)(a1 + 22);
      v14 = *(_QWORD *)(v13 + a1 + 8) >> *(_BYTE *)(a1 + 11);
      if ( v14 <= 8 )
        v14 = 8LL;
      v15 = *(_QWORD *)(v13 + a1 + 8) >> *(_BYTE *)(a1 + 12);
      if ( v15 <= 8 )
        v15 = 8LL;
      v16 = v11 + *(_QWORD *)(v13 + a1 + 16) + *(_QWORD *)(v13 + a1 + 24);
      if ( (v16 <= v14 || (int)RtlpHpScheduleCompaction(*(_QWORD *)(a1 + 56), v14, v13, v11) >= 0) && v16 <= v15 )
        break;
    }
    v19 = (unsigned __int8)*a5;
    if ( (a3 & 1) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
              v28 = (v39 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v39;
              if ( v28 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v19);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
        v41 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --CurrentThread->SpecialApcDisable;
        v26 = ++CurrentThread->AbAllocationRegionCount;
        v27 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v28 = !_BitScanReverse((unsigned int *)&v29, v27);
        v42 = v29;
        if ( v28 )
          goto LABEL_51;
        while ( 1 )
        {
          v30 = (__int64)&CurrentThread->LockEntries[v29];
          v27 &= ~(1 << v29);
          if ( (*(_BYTE *)(v30 + 26) & 1) != 0
            && (*(_DWORD *)(v30 + 32) & 1) == 0
            && (*(_QWORD *)(v30 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 64) & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v30 + 40) == (_DWORD)SessionId )
          {
            *(_BYTE *)(v30 + 26) &= ~1u;
            if ( *(_QWORD *)(v30 + 32) )
              break;
          }
          v28 = !_BitScanReverse((unsigned int *)&v29, v27);
          v42 = v29;
          if ( v28 )
            goto LABEL_51;
        }
        if ( !v30 )
        {
LABEL_51:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 64, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v30 + 32) |= 2u;
          if ( *(__int64 *)(v30 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v30);
          v41 = 0;
          v41 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
          *(_DWORD *)(v30 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v30 + 25) &= ~1u;
          *(_QWORD *)(v30 + 32) = 0LL;
          v31 = (signed __int64)(v30 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v26 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v31;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v31);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a1 + 64, &v41);
        v28 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v28
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v33, v32, v34, v35);
        }
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
    RtlpHpSegPageRangeCommit(a1, a2, 0, -(*(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 9)), 0, v40);
    v20 = RtlpHpSegLockAcquire(a1, a3);
    *a5 = v20;
    *(_BYTE *)(a2 + 24) &= ~0x10u;
  }
  v17 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
  *(_BYTE *)(v17 + a2 + 24) &= ~1u;
  *(_BYTE *)(a2 + 24) &= 0xEEu;
  return a2;
}
