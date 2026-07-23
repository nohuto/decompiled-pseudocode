/*
 * XREFs of RtlpHpVaMgrCtxFree @ 0x1402D843C
 * Callers:
 *     RtlpHpFreeVA @ 0x14025255C (RtlpHpFreeVA.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlpHpEnvFreeVA @ 0x140253038 (RtlpHpEnvFreeVA.c)
 *     MmFreePoolMemory @ 0x14025307C (MmFreePoolMemory.c)
 *     RtlSparseArrayElementAllocated @ 0x14025A500 (RtlSparseArrayElementAllocated.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x1402CF3DC (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpVaMgrRangeFree @ 0x1402D85A0 (RtlpHpVaMgrRangeFree.c)
 *     RtlpHpVaMgrFree @ 0x1402DA088 (RtlpHpVaMgrFree.c)
 *     RtlpHpVaMgrRangeSplit @ 0x1402DA204 (RtlpHpVaMgrRangeSplit.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     RtlSparseArrayElementFindCapped @ 0x14058FDE4 (RtlSparseArrayElementFindCapped.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxFree(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rsi
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  unsigned __int8 v9; // cl
  unsigned __int64 v10; // rdi
  _BYTE *v11; // rdx
  __int64 result; // rax
  unsigned __int8 v13; // r8
  _BYTE *v14; // r14
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  _BYTE *v17; // rsi
  unsigned __int64 v18; // rbp
  __int64 v19; // r14
  __int64 Capped; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v23; // bp
  unsigned int v24; // r8d
  bool v25; // zf
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v32; // [rsp+68h] [rbp+10h] BYREF

  v6 = *a3 >> 20;
  v7 = (_BYTE *)RtlSparseArrayElementAllocated(a1 + 16, (*a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8 = v7;
  if ( !v7 )
  {
    Capped = RtlSparseArrayElementFindCapped(
               a1 + 16,
               (__int64)(*a2 - *(_QWORD *)(a1 + 8)) / 0x100000,
               ~((__int64)(*a2 - *(_QWORD *)(a1 + 8)) / 0x100000));
    result = RtlpHpEnvFreeVA(a2, a3, 0x8000);
    *(_QWORD *)(Capped + 24) -= *a3 >> 20;
    return result;
  }
  v9 = *v7;
  v10 = a1 + 48 * ((unsigned __int8)v7[1] + 45LL);
  if ( (*v7 & 4) != 0 )
  {
    v11 = v7;
    *v7 = v9 & 0xFE;
    return RtlpHpVaMgrRangeFree(v10, v11);
  }
  v13 = *(_BYTE *)(v10 + 46);
  if ( (v13 & 6u) < 4 )
  {
    MmFreePoolMemory(a2, a3);
    v9 = *v8;
    v13 = *(_BYTE *)(v10 + 46);
  }
  v14 = v8;
  if ( (v9 & 2) != 0 )
  {
    v17 = v8;
    do
      v8 -= 32;
    while ( (*v8 & 2) != 0 );
    v13 = *(_BYTE *)(v10 + 46);
  }
  else
  {
    if ( ((v13 >> 4) & (unsigned __int8)~(v9 >> 2) & 1) == 0 )
    {
      v15 = (v9 & 4) != 0 ? *((_QWORD *)v8 + 3) : *((unsigned __int16 *)v8 + 12);
      if ( v6 != v15 )
        __int2c();
    }
    if ( (v9 & 4) != 0 )
      v16 = *((_QWORD *)v8 + 3);
    else
      v16 = *((unsigned __int16 *)v8 + 12);
    if ( v6 < v16 )
      v17 = &v8[32 * v6];
    else
      v17 = 0LL;
  }
  v18 = RtlpHpAcquireLockExclusive((volatile LONG *)v10, v13 & 1);
  if ( v17 )
    RtlpHpVaMgrRangeSplit(v10, v8, (v17 - v8) >> 5);
  v19 = RtlpHpVaMgrFree(v10, v14);
  if ( (*(_BYTE *)(v10 + 46) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v10);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v18 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v25 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v25 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v18);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    v32 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v10) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v23 = ++CurrentThread->AbAllocationRegionCount;
    v24 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v25 = !_BitScanReverse((unsigned int *)&v26, v24);
      if ( v25 )
        goto LABEL_39;
      v27 = (__int64)&CurrentThread->LockEntries[v26];
      v24 &= ~(1 << v26);
      if ( (*(_BYTE *)(v27 + 26) & 1) != 0
        && (*(_DWORD *)(v27 + 32) & 1) == 0
        && (*(_QWORD *)(v27 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v10 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v27 + 40) == SessionId )
      {
        *(_BYTE *)(v27 + 26) &= ~1u;
        if ( *(_QWORD *)(v27 + 32) )
          break;
      }
    }
    if ( !v27 )
    {
LABEL_39:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v10, SessionId, 0LL);
      goto LABEL_51;
    }
    *(_BYTE *)(v27 + 32) |= 2u;
    if ( *(__int64 *)(v27 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v27);
    v32 = *(_DWORD *)(v27 + 88) & 0x1FFFF;
    *(_DWORD *)(v27 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v27 + 25) &= ~1u;
    *(_QWORD *)(v27 + 32) = 0LL;
    v28 = (signed __int64)(v27 - (unsigned __int64)CurrentThread->LockEntries) / 96;
    if ( v23 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v28;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v28);
LABEL_51:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v10, &v32);
    v25 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v25 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v29);
    result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v19 )
  {
    v11 = (_BYTE *)v19;
    return RtlpHpVaMgrRangeFree(v10, v11);
  }
  return result;
}
