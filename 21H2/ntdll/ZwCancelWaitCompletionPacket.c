/*
 * XREFs of ZwCancelWaitCompletionPacket @ 0x18009E8D0
 * Callers:
 *     TppCancelWait @ 0x180011E7C (TppCancelWait.c)
 *     TppWaitTimerExpiration @ 0x1800843F8 (TppWaitTimerExpiration.c)
 * Callees:
 *     <none>
 */

__int64 ZwCancelWaitCompletionPacket()
{
  __int64 result; // rax

  result = 149LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
