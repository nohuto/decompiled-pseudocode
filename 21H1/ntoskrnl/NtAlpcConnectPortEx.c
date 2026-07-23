/*
 * XREFs of NtAlpcConnectPortEx @ 0x140646760
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpConnectPort @ 0x140647DB4 (AlpcpConnectPort.c)
 */

NTSTATUS __cdecl NtAlpcConnectPortEx(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ConnectionPortObjectAttributes,
        POBJECT_ATTRIBUTES ClientPortObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        ULONG Flags,
        PSECURITY_DESCRIPTOR ServerSecurityRequirements,
        PPORT_MESSAGE ConnectionMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES OutMessageAttributes,
        PALPC_MESSAGE_ATTRIBUTES InMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  return AlpcpConnectPort(
           (int)PortHandle,
           0,
           (int)ConnectionPortObjectAttributes,
           (int)ClientPortObjectAttributes,
           (__int64)PortAttributes,
           Flags,
           (__int64)ServerSecurityRequirements,
           0LL,
           (int)ConnectionMessage,
           (__int64)BufferLength,
           (__int64)OutMessageAttributes,
           (__int64)InMessageAttributes,
           (__int64)Timeout);
}
