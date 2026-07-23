/*
 * XREFs of ZwReplyWaitReceivePort @ 0x1403F2490
 * Callers:
 *     SepRmCommandServerThread @ 0x1407953A0 (SepRmCommandServerThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReplyWaitReceivePort(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
