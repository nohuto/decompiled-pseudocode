/*
 * XREFs of _ZwAlpcConnectPort@44 @ 0x4B2F3110
 * Callers:
 *     _SendMessageToWERService@8 @ 0x4B33AB80 (_SendMessageToWERService@8.c)
 *     _RtlConnectToSm@16 @ 0x4B35A7D0 (_RtlConnectToSm@16.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwAlpcConnectPort(
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
  return Wow64SystemServiceCall();
}
