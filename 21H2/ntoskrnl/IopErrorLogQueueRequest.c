/*
 * XREFs of IopErrorLogQueueRequest @ 0x1408999D4
 * Callers:
 *     IopErrorLogThread @ 0x140755930 (IopErrorLogThread.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x140266A80 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1402813E0 (KeSetCoalescableTimer.c)
 *     IopVerifierExAllocatePool_4 @ 0x14050A6B4 (IopVerifierExAllocatePool_4.c)
 */

char IopErrorLogQueueRequest()
{
  struct _KDPC *Pool_4; // rax
  struct _KDPC *Dpc; // rdi

  Pool_4 = (struct _KDPC *)IopVerifierExAllocatePool_4(NonPagedPoolNx, 0x80uLL);
  Dpc = Pool_4;
  if ( Pool_4 )
  {
    KeInitializeDpc(Pool_4, (PKDEFERRED_ROUTINE)IopErrorLogDpc, 0LL);
    KeInitializeTimerEx((PKTIMER)&Dpc[1], NotificationTimer);
    LOBYTE(Pool_4) = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)-300000000LL, 0, 0x7D0u, Dpc);
  }
  else
  {
    IopErrorLogSessionPending = 0;
  }
  return (char)Pool_4;
}
