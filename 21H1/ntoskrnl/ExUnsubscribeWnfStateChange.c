/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x1406DE980
 * Callers:
 *     RtlpCtContextFree @ 0x140914E1C (RtlpCtContextFree.c)
 *     SshpUninitialize @ 0x140A91444 (SshpUninitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDeleteSubscription @ 0x140665BD0 (ExpWnfDeleteSubscription.c)
 */

_QWORD *__fastcall ExUnsubscribeWnfStateChange(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1, (__int64)PsInitialSystemProcess);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v3, v4);
}
