/*
 * XREFs of IoAcquireCancelSpinLock @ 0x14032BF60
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall IoAcquireCancelSpinLock(PKIRQL Irql)
{
  __int64 v1; // r8
  _DWORD *SchedulerAssist; // r9
  UCHAR CurrentIrql; // si
  void *ArbitraryUserPointer; // rbx
  volatile __int64 *v6; // rdi
  __int64 v7; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v9; // rdx
  _QWORD *v10; // rdx
  int v11; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v1 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v1;
  }
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v6 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 15);
  v7 = (__int64)ArbitraryUserPointer + 112;
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = CurrentPrcb->SchedulerAssist;
  if ( v9 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v11 = v9[6];
      v9[6] = v11 + 1;
      if ( v11 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v7, v6);
  }
  else
  {
    v10 = (_QWORD *)_InterlockedExchange64(v6, v7);
    if ( v10 )
      KxWaitForLockOwnerShip(v7, v10, v1, (__int64)SchedulerAssist);
  }
  *Irql = CurrentIrql;
}
