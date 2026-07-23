/*
 * XREFs of NtAlpcAcceptConnectPort @ 0x1406CF120
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpAcceptConnectPort @ 0x1406D079C (AlpcpAcceptConnectPort.c)
 */

NTSTATUS __cdecl NtAlpcAcceptConnectPort(
        PHANDLE PortHandle,
        HANDLE ConnectionPortHandle,
        ULONG Flags,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        PVOID PortContext,
        PPORT_MESSAGE ConnectionRequest,
        PALPC_MESSAGE_ATTRIBUTES ConnectionMessageAttributes,
        BOOLEAN AcceptConnection)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v16; // [rsp+58h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v16 = 0;
  v10 = AlpcpAcceptConnectPort(
          PortHandle,
          Flags & 0xC0000000,
          ConnectionPortHandle,
          ObjectAttributes,
          PortAttributes,
          PortContext,
          ConnectionRequest,
          ConnectionMessageAttributes,
          AcceptConnection,
          0LL,
          0LL,
          v16);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  return v10;
}
