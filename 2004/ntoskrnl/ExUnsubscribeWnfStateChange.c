/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x140701860
 * Callers:
 *     RtlpCtContextFree @ 0x14091608C (RtlpCtContextFree.c)
 *     SshpUninitialize @ 0x140A90AD0 (SshpUninitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDeleteSubscription @ 0x1406204B0 (ExpWnfDeleteSubscription.c)
 */

_QWORD *__fastcall ExUnsubscribeWnfStateChange(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1, (__int64)PsInitialSystemProcess);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
