/*
 * XREFs of ZwAlpcSendWaitReceivePort @ 0x18009DF80
 * Callers:
 *     CsrClientCallServer @ 0x1800089A0 (CsrClientCallServer.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x1800549F0 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     RtlSendMsgToSm @ 0x180089820 (RtlSendMsgToSm.c)
 *     SendMessageToWERService @ 0x1800DD36C (SendMessageToWERService.c)
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
