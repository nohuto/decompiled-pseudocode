/*
 * XREFs of ZwReplyWaitReplyPort @ 0x1403F6480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReplyWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE ReplyMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
