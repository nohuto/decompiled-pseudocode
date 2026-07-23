/*
 * XREFs of NtAcceptConnectPort @ 0x1406D9930
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     AlpcpAcceptConnectPort @ 0x1405E85DC (AlpcpAcceptConnectPort.c)
 */

NTSTATUS __cdecl NtAcceptConnectPort(
        PHANDLE PortHandle,
        PVOID PortContext,
        PPORT_MESSAGE ConnectionRequest,
        BOOLEAN AcceptConnection,
        PPORT_VIEW ServerView,
        PREMOTE_PORT_VIEW ClientView)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = AlpcpAcceptConnectPort(
         (unsigned __int64)PortHandle,
         0,
         0LL,
         0LL,
         0LL,
         PortContext,
         (unsigned __int64)ConnectionRequest,
         0LL,
         AcceptConnection,
         ServerView,
         ClientView,
         1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v7 == -1073740029 )
    return -1073741813;
  return v7;
}
