/*
 * XREFs of _ZwReplyPort@8 @ 0x4B2F2A20
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwReplyPort(HANDLE PortHandle, PPORT_MESSAGE ReplyMessage)
{
  return Wow64SystemServiceCall();
}
