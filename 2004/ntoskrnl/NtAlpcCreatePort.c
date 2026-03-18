/*
 * XREFs of NtAlpcCreatePort @ 0x1406FA1D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     AlpcpCreateConnectionPort @ 0x1406FA218 (AlpcpCreateConnectionPort.c)
 */

__int64 __fastcall NtAlpcCreatePort(int a1, int a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int ConnectionPort; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(a1, a2, a3, 0, 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return ConnectionPort;
}
