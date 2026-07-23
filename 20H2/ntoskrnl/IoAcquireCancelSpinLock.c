/*
 * XREFs of IoAcquireCancelSpinLock @ 0x140300FE0
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x14020B770 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403EFE3C (FsRtlpRemoveAndCompleteRHIrp.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall IoAcquireCancelSpinLock(PKIRQL Irql)
{
  UCHAR CurrentIrql; // si
  void *ArbitraryUserPointer; // rbx
  volatile __int64 *v4; // rdi
  __int64 v5; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v7; // rdx
  _QWORD *v8; // rdx
  _DWORD *SchedulerAssist; // r9
  int v10; // eax

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
      v10 = v7[6];
      v7[6] = v10 + 1;
      if ( v10 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v5, v4);
  }
  else
  {
    v8 = (_QWORD *)_InterlockedExchange64(v4, v5);
    if ( v8 )
      KxWaitForLockOwnerShip(v5, v8);
  }
  *Irql = CurrentIrql;
}
