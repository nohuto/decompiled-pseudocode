/*
 * XREFs of RtlpHpSegPageRangeCoalesce @ 0x140259C20
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x140259780 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegContextCompact @ 0x1402DB670 (RtlpHpSegContextCompact.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpSegPageRangeCommit @ 0x1402577C0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegFreeRangeRemove @ 0x14025A1A0 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpScheduleCompaction @ 0x14025A1F4 (RtlpHpScheduleCompaction.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     RtlpHpSegLockAcquire @ 0x1402CF3B0 (RtlpHpSegLockAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v35; // eax
  int v36[18]; // [rsp+30h] [rbp-48h] BYREF
  int v37; // [rsp+80h] [rbp+8h] BYREF
  int v38; // [rsp+88h] [rbp+10h]

  v36[0] = 0;
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
      if ( (v16 <= v14 || (int)RtlpHpScheduleCompaction(*(_QWORD *)(a1 + 56)) >= 0) && v16 <= v15 )
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
              v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
              v28 = (v35 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v35;
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
          ExfTryToWakePushLock(a1 + 64);
        v37 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --CurrentThread->SpecialApcDisable;
        v26 = ++CurrentThread->AbAllocationRegionCount;
        v27 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v28 = !_BitScanReverse((unsigned int *)&v29, v27);
        v38 = v29;
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
          v38 = v29;
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
          v37 = 0;
          v37 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
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
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a1 + 64, &v37);
        v28 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v28
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
    RtlpHpSegPageRangeCommit(a1, a2, 0, -(*(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 9)), 0, v36);
    v20 = RtlpHpSegLockAcquire(a1, a3);
    *a5 = v20;
    *(_BYTE *)(a2 + 24) &= ~0x10u;
  }
  v17 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
  *(_BYTE *)(v17 + a2 + 24) &= ~1u;
  *(_BYTE *)(a2 + 24) &= 0xEEu;
  return a2;
}
