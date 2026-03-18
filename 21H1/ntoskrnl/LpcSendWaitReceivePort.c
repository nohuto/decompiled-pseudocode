/*
 * XREFs of LpcSendWaitReceivePort @ 0x1406DB8E0
 * Callers:
 *     DbgkpSendApiMessageLpc @ 0x140882E30 (DbgkpSendApiMessageLpc.c)
 *     IopSendMessageToTrackService @ 0x14088DD20 (IopSendMessageToTrackService.c)
 *     ExpRaiseHardError @ 0x140951A4C (ExpRaiseHardError.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     AlpcpProcessSynchronousRequest @ 0x14060C5B0 (AlpcpProcessSynchronousRequest.c)
 */

__int64 __fastcall LpcSendWaitReceivePort(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5,
        LARGE_INTEGER *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpProcessSynchronousRequest(a1, a2 | 2u, a3, 0LL, a4, a5, 0LL, a6, 0);
  if ( v7 == -1073740029 )
    v7 = -1073741769;
  if ( v7 == -1073740031 )
    v7 = -1073741229;
  KeLeaveCriticalRegion();
  return v7;
}
