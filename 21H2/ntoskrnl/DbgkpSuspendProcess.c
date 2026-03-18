/*
 * XREFs of DbgkpSuspendProcess @ 0x14092AC20
 * Callers:
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 *     DbgkpSendApiMessage @ 0x14092A070 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x14092A168 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x14092A29C (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     PsFreezeProcess @ 0x1406C03F0 (PsFreezeProcess.c)
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
