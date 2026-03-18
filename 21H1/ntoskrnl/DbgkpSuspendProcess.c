/*
 * XREFs of DbgkpSuspendProcess @ 0x1408838D0
 * Callers:
 *     PsDispatchIumService @ 0x14057D274 (PsDispatchIumService.c)
 *     DbgkpSendApiMessage @ 0x140882D44 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140882E30 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140882F60 (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     PsFreezeProcess @ 0x1406CF908 (PsFreezeProcess.c)
 */

char __fastcall DbgkpSuspendProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( PsFreezeProcess(a1, 0) )
    return 1;
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v2, v3, v4);
  return 0;
}
