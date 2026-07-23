/*
 * XREFs of RtlpHpSegMgrCommitInitiate @ 0x14025A70C
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140257B20 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x1402CF3DC (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x140359454 (RtlpHpSegMgrApplyLargePagePolicy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpSegMgrCommitInitiate(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        int a4,
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 *a6)
{
  signed __int16 v6; // di
  ULONG_PTR v7; // rbp
  int v8; // esi
  unsigned __int8 v9; // r12
  __int16 v12; // r14
  __int16 v13; // bx
  unsigned __int16 v14; // bx
  bool v15; // zf
  signed __int16 v16; // ax
  unsigned int v17; // edx
  signed __int16 v19; // bx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v22; // r14
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  __int64 v31; // [rsp+90h] [rbp+8h]
  int v32; // [rsp+98h] [rbp+10h] BYREF
  signed __int16 v33; // [rsp+A0h] [rbp+18h]
  int v34; // [rsp+A8h] [rbp+20h]

  v34 = a4;
  v31 = a1;
  v6 = *a2;
  v7 = BugCheckParameter2;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = v6;
      v33 = v6;
      if ( a3 <= 0 )
        break;
      if ( (v6 & 0x4000) == 0 )
      {
        if ( (v6 & 0x7FF) != 0 )
        {
LABEL_6:
          v13 = v33;
LABEL_7:
          a1 = v31;
LABEL_8:
          v14 = a3 + v13;
          goto LABEL_9;
        }
        if ( (a4 & 3) != 0 )
        {
          if ( (a4 & 2) == 0 )
            goto LABEL_6;
          v19 = v6;
        }
        else
        {
          if ( !(unsigned int)RtlpHpSegMgrApplyLargePagePolicy(a1, 0x4000LL, 1LL) )
            goto LABEL_6;
          v19 = v33;
        }
        v13 = v19 | 0x4000;
        goto LABEL_7;
      }
      _mm_pause();
      v6 = *a2;
    }
    if ( v6 >= 0 )
    {
      v17 = -1073741567;
      goto LABEL_15;
    }
    v13 = v33;
    if ( a3 + (v6 & 0x7FF) )
      goto LABEL_8;
    v14 = v33 | 0x4000;
LABEL_9:
    if ( (v14 & 0x4000) != 0 )
    {
      v8 = 1;
      v9 = RtlpHpAcquireLockExclusive(v7, *(_DWORD *)(a1 + 40) & 1);
    }
    v16 = _InterlockedCompareExchange16(a2, v14, v6);
    v15 = v6 == v16;
    v6 = v16;
    if ( v15 )
      break;
    if ( v8 )
    {
      if ( (*(_DWORD *)(v31 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v7);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v30 = ~(unsigned __int16)(-1LL << (v9 + 1));
              v15 = (v30 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v30;
              if ( v15 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v9);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v7);
        v32 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v22 = ++CurrentThread->AbAllocationRegionCount;
        v23 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v15 = !_BitScanReverse((unsigned int *)&v24, v23);
          if ( v15 )
            break;
          v25 = (__int64)&CurrentThread->LockEntries[v24];
          v23 &= ~(1 << v24);
          if ( (*(_BYTE *)(v25 + 26) & 1) != 0
            && (*(_DWORD *)(v25 + 32) & 1) == 0
            && (*(_QWORD *)(v25 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
            && *(_DWORD *)(v25 + 40) == SessionId )
          {
            *(_BYTE *)(v25 + 26) &= ~1u;
            if ( *(_QWORD *)(v25 + 32) )
            {
              if ( v25 )
              {
                *(_BYTE *)(v25 + 32) |= 2u;
                if ( *(__int64 *)(v25 + 32) < 0 )
                  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v25);
                v32 = 0;
                v32 = *(_DWORD *)(v25 + 88) & 0x1FFFF;
                *(_DWORD *)(v25 + 88) &= 0xFFFE0000;
                *(_BYTE *)(v25 + 25) &= ~1u;
                *(_QWORD *)(v25 + 32) = 0LL;
                v26 = (signed __int64)(v25 - (unsigned __int64)CurrentThread->LockEntries) / 96;
                if ( v22 == 1 )
                  CurrentThread->AbEntrySummary |= 1 << v26;
                else
                  _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v26);
                goto LABEL_49;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v7, SessionId, 0LL);
LABEL_49:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v7, &v32);
        v15 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v15
          && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
      v8 = 0;
    }
    a1 = v31;
    LOBYTE(a4) = v34;
  }
  if ( a3 <= 0 )
  {
    v17 = (v14 >> 13) & 2 | 0xC0000100;
  }
  else if ( v12 >= 0 )
  {
    v17 = ((v14 & 0x4000) != 0) - 1073741567;
  }
  else
  {
    v17 = -1073741568;
  }
LABEL_15:
  if ( v8 )
    *a6 = v9;
  return v17;
}
