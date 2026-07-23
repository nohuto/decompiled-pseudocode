/*
 * XREFs of NtAlpcConnectPort @ 0x1406466E0
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpConnectPort @ 0x140647DB4 (AlpcpConnectPort.c)
 */

NTSTATUS __cdecl NtAlpcConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        ULONG Flags,
        PSID RequiredServerSid,
        PPORT_MESSAGE ConnectionMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES OutMessageAttributes,
        PALPC_MESSAGE_ATTRIBUTES InMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  return AlpcpConnectPort(
           (int)PortHandle,
           (int)PortName,
           0,
           (int)ObjectAttributes,
           (__int64)PortAttributes,
           Flags,
           0LL,
           RequiredServerSid,
           (int)ConnectionMessage,
           (__int64)BufferLength,
           (__int64)OutMessageAttributes,
           (__int64)InMessageAttributes,
           (__int64)Timeout);
}
