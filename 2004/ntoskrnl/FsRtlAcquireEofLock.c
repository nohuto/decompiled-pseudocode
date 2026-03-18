/*
 * XREFs of FsRtlAcquireEofLock @ 0x140324690
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1402740C0 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x140274B8C (ExpReleaseFastMutexContended.c)
 *     FsRtlpWaitForIoAtEof @ 0x1403248CC (FsRtlpWaitForIoAtEof.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

char __fastcall FsRtlAcquireEofLock(__int64 a1, volatile signed __int32 *a2)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v3; // rax
  ULONG_PTR v5; // rdi
  __int64 v6; // rcx
  char v7; // dl
  __int64 v8; // rsi
  int SessionId; // eax
  __int64 v10; // rcx
  bool v11; // zf
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR v13; // rbx
  unsigned __int64 v14; // rdi
  signed __int32 v15; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v20; // eax
  _DWORD *SchedulerAssist; // r8
  int v23; // [rsp+80h] [rbp+18h] BYREF
  volatile signed __int32 *v24; // [rsp+88h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v23 = 0;
  v3 = *(_QWORD *)(a1 + 24);
  v24 = a2;
  v5 = *(_QWORD *)(v3 + 48);
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v5, KeGetCurrentIrql(), 0LL);
  LOBYTE(v6) = CurrentThread->AbEntrySummary;
  if ( !(_BYTE)v6 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v8 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v5);
      goto LABEL_31;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v6) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v7 = v6;
  _BitScanForward((unsigned int *)&v6, (unsigned __int8)v6);
  CurrentThread->AbEntrySummary = v7 & ~(1 << v6);
  v8 = (__int64)&CurrentThread->LockEntries[v6];
  if ( !v8 )
  {
LABEL_31:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_7;
  }
  if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v8 + 40) = SessionId;
  *(_QWORD *)(v8 + 32) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_7:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5, &v23);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v10);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v5, 0) )
    ExpAcquireFastMutexContended(v5, v8);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v5 + 48) = CurrentIrql;
  if ( v24 )
    _InterlockedIncrement(v24);
  if ( *(struct _KTHREAD **)a1 == CurrentThread )
  {
    ++*(_WORD *)(a1 + 38);
  }
  else if ( *(_QWORD *)a1 )
  {
    FsRtlpWaitForIoAtEof(a1, a2, -1LL);
  }
  else
  {
    *(_QWORD *)a1 = CurrentThread;
    *(_WORD *)(a1 + 38) = 1;
  }
  if ( a2 )
    _InterlockedIncrement(a2);
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v14 = *(unsigned __int8 *)(v13 + 48);
  *(_QWORD *)(v13 + 8) = 0LL;
  v15 = _InterlockedCompareExchange((volatile signed __int32 *)v13, 1, 0);
  if ( v15 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)v13, v15);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v14);
  return KeAbPostRelease(v13);
}
