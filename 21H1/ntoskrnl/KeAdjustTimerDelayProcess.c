/*
 * XREFs of KeAdjustTimerDelayProcess @ 0x14050DD0C
 * Callers:
 *     PspSetProcessTimerDelayForKTimers @ 0x14057C9E8 (PspSetProcessTimerDelayForKTimers.c)
 * Callees:
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiAdjustThreadTimer @ 0x1405194D4 (KiAdjustThreadTimer.c)
 */

char __fastcall KeAdjustTimerDelayProcess(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _KPRCB *CurrentPrcb; // r12
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  _QWORD *i; // rbx

  CurrentPrcb = KeGetCurrentPrcb();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    KiAdjustThreadTimer(i - 95, CurrentPrcb, a2, a3);
  *(_DWORD *)(a1 + 68) = a3;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  return KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
}
