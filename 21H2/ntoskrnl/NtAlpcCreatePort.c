/*
 * XREFs of NtAlpcCreatePort @ 0x140663CC0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     AlpcpCreateConnectionPort @ 0x140663D08 (AlpcpCreateConnectionPort.c)
 */

__int64 __fastcall NtAlpcCreatePort(int a1, int a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int ConnectionPort; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(a1, a2, a3, 0, 0, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return ConnectionPort;
}
