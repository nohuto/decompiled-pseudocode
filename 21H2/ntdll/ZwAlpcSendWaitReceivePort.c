/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x18009E7B0
 * Callers:
 *     CsrClientCallServer @ 0x1800089A0 (CsrClientCallServer.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x18004F030 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     RtlSendMsgToSm @ 0x180089F20 (RtlSendMsgToSm.c)
 *     SendMessageToWERService @ 0x1800DD4BC (SendMessageToWERService.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcSendWaitReceivePort()
{
  __int64 result; // rax

  result = 140LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
