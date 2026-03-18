/*
 * XREFs of NtCreatePort @ 0x14076EF00
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     AlpcpCreateConnectionPort @ 0x1406CD198 (AlpcpCreateConnectionPort.c)
 */

__int64 __fastcall NtCreatePort(HANDLE *a1, int a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int ConnectionPort; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(a1, a2, 0LL, a4, 0, 1);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return ConnectionPort;
}
