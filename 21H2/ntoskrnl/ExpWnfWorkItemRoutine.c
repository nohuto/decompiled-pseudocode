/*
 * XREFs of ExpWnfWorkItemRoutine @ 0x1406D7D20
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406D7D74 (ExpWnfDispatchKernelSubscription.c)
 */

char ExpWnfWorkItemRoutine()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  do
  {
    _InterlockedAnd((volatile signed __int32 *)(ExpWnfDispatcher + 40), 0xFFFFFFFD);
    ExpWnfDispatchKernelSubscription();
  }
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(ExpWnfDispatcher + 40), 0, 1) != 1 );
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
