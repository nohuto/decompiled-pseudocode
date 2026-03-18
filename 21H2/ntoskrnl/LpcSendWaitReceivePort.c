/*
 * XREFs of LpcSendWaitReceivePort @ 0x1406CE2B0
 * Callers:
 *     ExpRaiseHardError @ 0x1406CDFAC (ExpRaiseHardError.c)
 *     DbgkpSendApiMessageLpc @ 0x14092A168 (DbgkpSendApiMessageLpc.c)
 *     IopSendMessageToTrackService @ 0x140935044 (IopSendMessageToTrackService.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407AD040 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall LpcSendWaitReceivePort(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx
  int v9; // [rsp+40h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(v9) = 0;
  v7 = AlpcpProcessSynchronousRequest(a1, a2 | 2u, a3, 0, a4, a5, 0LL, a6, v9);
  if ( v7 == -1073740029 )
  {
    v7 = -1073741769;
  }
  else if ( v7 == -1073740031 )
  {
    v7 = -1073741229;
  }
  KeLeaveCriticalRegion();
  return v7;
}
