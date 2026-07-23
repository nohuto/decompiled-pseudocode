/*
 * XREFs of RtlpHpSegMgrVaCtxInsert @ 0x140360090
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x140361AA0 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14023C5AC (RtlpHpAcquireLockExclusive.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlpHpQueryVA @ 0x14035F9BC (RtlpHpQueryVA.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpSegMgrVaCtxInsert(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int16 *v4; // r15
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  KIRQL v7; // al
  unsigned __int64 v8; // r14
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v12; // r14
  unsigned int v13; // r8d
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _DWORD *v21; // r9
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  __int128 v24; // [rsp+30h] [rbp-10h] BYREF
  int v25; // [rsp+90h] [rbp+50h] BYREF
  __int16 *v26; // [rsp+98h] [rbp+58h] BYREF

  v2 = *(_OWORD *)(a1 + 40);
  v26 = 0LL;
  v24 = v2;
  RtlpHpQueryVA(a2, &v24, &v26, 0LL);
  v4 = v26;
  if ( *v26 < 0 )
  {
    *v26 ^= (*v26 ^ (*v26 + 1)) & 0x7FF;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 20) + a1), 1uLL);
    v4 = v26;
  }
  v5 = a1 + 112;
  v6 = (unsigned __int64)(unsigned __int16)*v4 >> 15;
  v7 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 112), *(_DWORD *)(a1 + 40) & 1);
  *((_QWORD *)v4 + 1) = *(_QWORD *)(a1 + 8 * v6 + 120);
  *(_QWORD *)(a1 + 8 * v6 + 120) = v4 + 4;
  v8 = v7;
  if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v14 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    v25 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v12 = ++CurrentThread->AbAllocationRegionCount;
    v13 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v14 = !_BitScanReverse((unsigned int *)&v15, v13);
      if ( v14 )
        goto LABEL_13;
      v16 = (__int64)&CurrentThread->LockEntries[v15];
      v13 &= ~(1 << v15);
      if ( (*(_BYTE *)(v16 + 26) & 1) != 0
        && (*(_DWORD *)(v16 + 32) & 1) == 0
        && (*(_QWORD *)(v16 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v16 + 40) == SessionId )
      {
        *(_BYTE *)(v16 + 26) &= ~1u;
        if ( *(_QWORD *)(v16 + 32) )
          break;
      }
    }
    if ( !v16 )
    {
LABEL_13:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5, SessionId, 0LL);
      goto LABEL_25;
    }
    *(_BYTE *)(v16 + 32) |= 2u;
    if ( *(__int64 *)(v16 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v16);
    v25 = *(_DWORD *)(v16 + 88) & 0x1FFFF;
    *(_DWORD *)(v16 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v16 + 25) &= ~1u;
    *(_QWORD *)(v16 + 32) = 0LL;
    v17 = (signed __int64)(v16 - (unsigned __int64)CurrentThread->LockEntries) / 96;
    if ( v12 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v17;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v17);
LABEL_25:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5, &v25);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v19, v18, v20, v21);
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v18, v20, (__int64)v21);
  }
  return result;
}
