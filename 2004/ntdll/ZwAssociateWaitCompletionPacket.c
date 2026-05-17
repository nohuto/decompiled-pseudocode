/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x18009E000
 * Callers:
 *     TppTimerQueueExpiration @ 0x180011AE0 (TppTimerQueueExpiration.c)
 *     TppSetupNextWait @ 0x180013704 (TppSetupNextWait.c)
 *     TppInitializeTimerSubQueue @ 0x180061C94 (TppInitializeTimerSubQueue.c)
 * Callees:
 *     <none>
 */

__int64 ZwAssociateWaitCompletionPacket()
{
  __int64 result; // rax

  result = 144LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
