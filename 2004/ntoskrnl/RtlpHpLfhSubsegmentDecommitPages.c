/*
 * XREFs of RtlpHpLfhSubsegmentDecommitPages @ 0x1402CBF00
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x1402CB3E4 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1402CB580 (RtlpHpLfhSubsegmentFreeBlock.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlpHpScheduleCompaction @ 0x14025A1F4 (RtlpHpScheduleCompaction.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockShared @ 0x1402CB544 (RtlpHpAcquireLockShared.c)
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x1402CC400 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 *     RtlpHpLfhSubsegmentDecBlockCounts @ 0x1402CC7A0 (RtlpHpLfhSubsegmentDecBlockCounts.c)
 *     RtlpHpAcquireLockExclusive @ 0x1402CF3DC (RtlpHpAcquireLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall RtlpHpLfhSubsegmentDecommitPages(
        unsigned __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        char a5)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  int v9; // r12d
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r15
  unsigned __int8 v17; // bl
  KIRQL v18; // bl
  char v19; // cl
  unsigned int v20; // esi
  unsigned int v21; // edi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  unsigned __int8 v29; // bp
  unsigned int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rbx
  unsigned __int8 v33; // r14
  __int64 v34; // rcx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  int v37; // eax
  _DWORD *v38; // r8
  KIRQL v39; // [rsp+30h] [rbp-58h]
  unsigned int v40; // [rsp+34h] [rbp-54h] BYREF
  int v41[20]; // [rsp+38h] [rbp-50h] BYREF
  char v42; // [rsp+A0h] [rbp+18h]

  v39 = -1;
  v40 = 0;
  v5 = a4;
  v42 = -1;
  v6 = a3;
  v9 = 0;
  if ( a3 < 0 )
  {
    v10 = 1;
    v6 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( (RtlpHpLfhPerfFlags & 0x20) != 0 && !v10 )
  {
    v11 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 13LL) & 8) == 0 )
    {
      v12 = *(__int16 *)(v11 + 22);
      result = *(_QWORD *)(v12 + v11 + 8) >> *(_BYTE *)(v11 + 11);
      if ( result <= 8 )
        result = 8LL;
      v14 = *(_QWORD *)(v12 + v11 + 8) >> *(_BYTE *)(v11 + 12);
      if ( v14 <= 8 )
        v14 = 8LL;
      v15 = *(_QWORD *)(v12 + v11 + 16) + *(_QWORD *)(v12 + v11 + 24);
      if ( v15 <= result || (result = RtlpHpScheduleCompaction(*(_QWORD **)(v11 + 56)), (result & 0x80000000) == 0LL) )
      {
        if ( v15 <= v14 )
          return result;
      }
      v5 = a4;
    }
  }
  result = *(unsigned __int8 *)(a2 + 45);
  if ( v6 < (unsigned int)result )
  {
    do
    {
      result = RtlpHpLfhSubsegmentFindEmptyUnits(a2, v6, &v40);
      v6 = result;
      if ( (_DWORD)result == -1 )
        break;
      result = v40;
      if ( v40 < v5 )
      {
        if ( !v10 )
          break;
        v6 += v40;
      }
      else if ( v9 )
      {
        v19 = *(_BYTE *)(a2 + 44);
        v20 = v6 << v19;
        v21 = v40 << v19;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)))(
          *(_QWORD *)a1,
          a2 + (v6 << v19),
          v40 << v19);
        result = RtlpHpLfhSubsegmentDecBlockCounts(a1, a2, v20, v21);
        if ( !v10 )
          break;
        v6 += v40;
        v5 = a4;
      }
      else
      {
        if ( (a5 & 1) == 0 )
          v39 = RtlpHpAcquireLockShared((volatile LONG *)(a1 + 72), *(unsigned __int8 *)(a1 + 57));
        v9 = 2;
        v42 = RtlpHpAcquireLockExclusive(a2 + 24, *(unsigned __int8 *)(a1 + 57));
      }
      result = *(unsigned __int8 *)(a2 + 45);
    }
    while ( v6 < (unsigned int)result );
    if ( v9 )
    {
      v16 = a2 + 24;
      if ( *(_BYTE *)(a1 + 57) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v16);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
        {
          v17 = v42;
          if ( (unsigned __int8)v42 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << (v42 + 1));
            v28 = (v27 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v27;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        else
        {
          v17 = v42;
        }
        result = v17;
        __writecr8(v17);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v16);
        v41[0] = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v16) == 1 )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v29 = ++CurrentThread->AbAllocationRegionCount;
        v30 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v28 = !_BitScanReverse((unsigned int *)&v31, v30);
        if ( v28 )
          goto LABEL_54;
        while ( 1 )
        {
          v32 = (__int64)&CurrentThread->LockEntries[v31];
          v30 &= ~(1 << v31);
          if ( (*(_BYTE *)(v32 + 26) & 1) != 0
            && (*(_DWORD *)(v32 + 32) & 1) == 0
            && (*(_QWORD *)(v32 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v16 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v32 + 40) == SessionId )
          {
            *(_BYTE *)(v32 + 26) &= ~1u;
            if ( *(_QWORD *)(v32 + 32) )
              break;
          }
          v28 = !_BitScanReverse((unsigned int *)&v31, v30);
          if ( v28 )
            goto LABEL_54;
        }
        if ( !v32 )
        {
LABEL_54:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v16, SessionId, 0LL);
        }
        else
        {
          *(_BYTE *)(v32 + 32) |= 2u;
          if ( *(__int64 *)(v32 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v32);
          v41[0] = *(_DWORD *)(v32 + 88) & 0x1FFFF;
          *(_DWORD *)(v32 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v32 + 25) &= ~1u;
          *(_QWORD *)(v32 + 32) = 0LL;
          v33 = 1 << ((signed __int64)(v32 - (unsigned __int64)CurrentThread->LockEntries) / 96);
          if ( v29 == 1 )
            CurrentThread->AbEntrySummary |= v33;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v33);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v16, v41);
        v28 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v28
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v34);
        }
        result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
      if ( (a5 & 1) == 0 )
      {
        if ( *(_BYTE *)(a1 + 57) )
        {
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v35 = KeGetCurrentIrql(), v35 <= 0xFu) )
          {
            v18 = v39;
            if ( v39 <= 0xFu && v35 >= 2u )
            {
              v36 = KeGetCurrentPrcb();
              v37 = ~(unsigned __int16)(-1LL << (v39 + 1));
              v38 = v36->SchedulerAssist;
              v28 = (v37 & v38[5]) == 0;
              v38[5] &= v37;
              if ( v28 )
                KiRemoveSystemWorkPriorityKick(v36);
            }
          }
          else
          {
            v18 = v39;
          }
          result = v18;
          __writecr8(v18);
        }
        else
        {
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(a1 + 72));
          KeAbPostRelease(a1 + 72);
          return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        }
      }
    }
  }
  return result;
}
