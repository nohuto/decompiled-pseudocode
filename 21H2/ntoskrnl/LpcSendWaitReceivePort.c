/*
 * XREFs of LpcSendWaitReceivePort @ 0x14060E670
 * Callers:
 *     DbgkpSendApiMessageLpc @ 0x1408873A0 (DbgkpSendApiMessageLpc.c)
 *     IopSendMessageToTrackService @ 0x140892220 (IopSendMessageToTrackService.c)
 *     ExpRaiseHardError @ 0x1409565F8 (ExpRaiseHardError.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     AlpcpProcessSynchronousRequest @ 0x1406D6640 (AlpcpProcessSynchronousRequest.c)
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
    v7 = -1073741769;
  if ( v7 == -1073740031 )
    v7 = -1073741229;
  KeLeaveCriticalRegion();
  return v7;
}
