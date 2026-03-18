/*
 * XREFs of ExpWnfWorkItemRoutine @ 0x1406CDBB0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406CDC04 (ExpWnfDispatchKernelSubscription.c)
 */

_QWORD *ExpWnfWorkItemRoutine()
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
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
