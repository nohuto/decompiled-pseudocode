/*
 * XREFs of IopErrorLogQueueRequest @ 0x14089C2A4
 * Callers:
 *     IopErrorLogThread @ 0x14074E910 (IopErrorLogThread.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140247420 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1402D6620 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14033E040 (KeInitializeDpc.c)
 *     IopVerifierExAllocatePool_4 @ 0x140508944 (IopVerifierExAllocatePool_4.c)
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
