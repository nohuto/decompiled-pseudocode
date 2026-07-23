/*
 * XREFs of NtAlpcCreatePort @ 0x140608E50
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpCreateConnectionPort @ 0x140608E98 (AlpcpCreateConnectionPort.c)
 */

NTSTATUS __cdecl NtAlpcCreatePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS ConnectionPort; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ConnectionPort = AlpcpCreateConnectionPort(
                     (_DWORD)PortHandle,
                     (_DWORD)ObjectAttributes,
                     (_DWORD)PortAttributes,
                     0,
                     0,
                     0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  return ConnectionPort;
}
