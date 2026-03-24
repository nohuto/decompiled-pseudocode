/*
 * XREFs of DbgkpSuspendProcess @ 0x140887CE0
 * Callers:
 *     PsDispatchIumService @ 0x140582CF4 (PsDispatchIumService.c)
 *     DbgkpSendApiMessage @ 0x140887154 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140887240 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140887370 (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     PsFreezeProcess @ 0x14067CC1C (PsFreezeProcess.c)
 */

char __fastcall DbgkpSuspendProcess(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( PsFreezeProcess(a1, 0) )
    return 1;
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return 0;
}
