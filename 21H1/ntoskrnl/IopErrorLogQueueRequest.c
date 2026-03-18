/*
 * XREFs of IopErrorLogQueueRequest @ 0x1408952D4
 * Callers:
 *     IopErrorLogThread @ 0x14073E1B0 (IopErrorLogThread.c)
 * Callees:
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x140236170 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x140355110 (KeInitializeTimerEx.c)
 *     IopVerifierExAllocatePool_4 @ 0x1405048E4 (IopVerifierExAllocatePool_4.c)
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
