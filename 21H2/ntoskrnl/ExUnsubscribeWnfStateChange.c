/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x140611AD0
 * Callers:
 *     RtlpCtContextFree @ 0x1409195DC (RtlpCtContextFree.c)
 *     SshpUninitialize @ 0x140A945A4 (SshpUninitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDeleteSubscription @ 0x1406A2BD8 (ExpWnfDeleteSubscription.c)
 */

_QWORD *__fastcall ExUnsubscribeWnfStateChange(void *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v3, v4);
}
