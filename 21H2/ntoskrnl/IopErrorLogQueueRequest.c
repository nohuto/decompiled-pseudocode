/*
 * XREFs of IopErrorLogQueueRequest @ 0x14093FB40
 * Callers:
 *     IopErrorLogThread @ 0x14080FDC0 (IopErrorLogThread.c)
 * Callees:
 *     KeInitializeDpc @ 0x1402940D0 (KeInitializeDpc.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char IopErrorLogQueueRequest()
{
  struct _KDPC *Pool2; // rax
  struct _KDPC *Dpc; // rdi

  Pool2 = (struct _KDPC *)ExAllocatePool2(64LL, 128LL, 1279618889LL);
  Dpc = Pool2;
  if ( Pool2 )
  {
    KeInitializeDpc(Pool2, (PKDEFERRED_ROUTINE)IopErrorLogDpc, 0LL);
    KeInitializeTimerEx((PKTIMER)&Dpc[1], NotificationTimer);
    LOBYTE(Pool2) = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)-300000000LL, 0, 0x7D0u, Dpc);
  }
  else
  {
    IopErrorLogSessionPending = 0;
  }
  return (char)Pool2;
}
