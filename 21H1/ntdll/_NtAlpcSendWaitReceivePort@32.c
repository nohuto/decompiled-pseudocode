/*
 * XREFs of _NtAlpcSendWaitReceivePort@32 @ 0x4B2F3240
 * Callers:
 *     _TppCallbackSendAndDestroyAlpcMessage@4 @ 0x4B2ABDD8 (_TppCallbackSendAndDestroyAlpcMessage@4.c)
 *     _SendMessageToWERService@8 @ 0x4B33AB80 (_SendMessageToWERService@8.c)
 *     _RtlSendMsgToSm@8 @ 0x4B35A940 (_RtlSendMsgToSm@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtAlpcSendWaitReceivePort(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  return Wow64SystemServiceCall();
}
