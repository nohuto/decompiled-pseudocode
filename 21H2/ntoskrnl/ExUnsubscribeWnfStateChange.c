/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x140791480
 * Callers:
 *     EtwpUnsubscribeContainerStateWnf @ 0x14062D370 (EtwpUnsubscribeContainerStateWnf.c)
 *     RtlpCtContextFree @ 0x1409BE97C (RtlpCtContextFree.c)
 *     SshInitialize @ 0x140B03360 (SshInitialize.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpWnfDeleteSubscription @ 0x14079240C (ExpWnfDeleteSubscription.c)
 */

char __fastcall ExUnsubscribeWnfStateChange(void *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
