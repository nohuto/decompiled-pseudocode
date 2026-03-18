/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x1406D4F50
 * Callers:
 *     RtlpCtContextFree @ 0x14091BCBC (RtlpCtContextFree.c)
 *     SshpUninitialize @ 0x140A96734 (SshpUninitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDeleteSubscription @ 0x1406510F0 (ExpWnfDeleteSubscription.c)
 */

_QWORD *__fastcall ExUnsubscribeWnfStateChange(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1, (__int64)PsInitialSystemProcess);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
