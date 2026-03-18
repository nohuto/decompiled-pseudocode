/*
 * XREFs of IoAcquireCancelSpinLock @ 0x14022A5C0
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1402A4E10 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404173E4 (FsRtlpRemoveAndCompleteRHIrp.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall IoAcquireCancelSpinLock(PKIRQL Irql)
{
  KIRQL CurrentIrql; // si
  void *ArbitraryUserPointer; // rbx
  volatile __int64 *v4; // rdi
  __int64 v5; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v7; // rdx
  _DWORD *SchedulerAssist; // r9
  int v9; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v4 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 15);
  v5 = (__int64)ArbitraryUserPointer + 112;
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = CurrentPrcb->SchedulerAssist;
  if ( v7 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v9 = v7[6];
      v7[6] = v9 + 1;
      if ( v9 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v5, v4);
  }
  else if ( _InterlockedExchange64(v4, v5) )
  {
    KxWaitForLockOwnerShip(v5);
  }
  *Irql = CurrentIrql;
}
