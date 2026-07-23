/*
 * XREFs of FsRtlAcquireEofLock @ 0x14020E760
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpWaitForIoAtEof @ 0x14020E99C (FsRtlpWaitForIoAtEof.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExpReleaseFastMutexContended @ 0x1402FC46C (ExpReleaseFastMutexContended.c)
 *     ExpAcquireFastMutexContended @ 0x1402FD910 (ExpAcquireFastMutexContended.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall FsRtlAcquireEofLock(__int64 a1, volatile signed __int32 *a2)
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR v4; // rdi
  __int64 v5; // rcx
  char v6; // dl
  __int64 v7; // rsi
  int SessionId; // eax
  bool v9; // zf
  unsigned __int8 CurrentIrql; // bl
  ULONG_PTR v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int32 v13; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v18; // eax
  _DWORD *SchedulerAssist; // r8

  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v4, KeGetCurrentIrql(), 0LL);
  LOBYTE(v5) = CurrentThread->AbEntrySummary;
  if ( !(_BYTE)v5 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v7 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v4);
      goto LABEL_31;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v5) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v6 = v5;
  _BitScanForward((unsigned int *)&v5, (unsigned __int8)v5);
  CurrentThread->AbEntrySummary = v6 & ~(1 << v5);
  v7 = (__int64)&CurrentThread->LockEntries[v5];
  if ( !v7 )
  {
LABEL_31:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_7;
  }
  if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v7 + 40) = SessionId;
  *(_QWORD *)(v7 + 32) = v4 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_7:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v9 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v9 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
    ExpAcquireFastMutexContended(v4, (PRTL_BALANCED_NODE)v7);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v4 + 48) = CurrentIrql;
  if ( a2 )
    _InterlockedIncrement(a2);
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
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v12 = *(unsigned __int8 *)(v11 + 48);
  *(_QWORD *)(v11 + 8) = 0LL;
  v13 = _InterlockedCompareExchange((volatile signed __int32 *)v11, 1, 0);
  if ( v13 )
    ExpReleaseFastMutexContended(v11, v13);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v16 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = (v18 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v18;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v12);
  return KeAbPostRelease(v11);
}
