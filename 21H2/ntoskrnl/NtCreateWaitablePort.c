/*
 * XREFs of NtCreateWaitablePort @ 0x140662090
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     AlpcpCreateConnectionPort @ 0x140663D08 (AlpcpCreateConnectionPort.c)
 */

__int64 __fastcall NtCreateWaitablePort(int a1, int a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int ConnectionPort; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(a1, a2, 0, a4, 1, 1);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return ConnectionPort;
}
