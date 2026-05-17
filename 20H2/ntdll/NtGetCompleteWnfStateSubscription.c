/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x18009EEC0
 * Callers:
 *     RtlpWnfNotificationThread @ 0x180062860 (RtlpWnfNotificationThread.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18006297C (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpWnfRetryTimerCallback @ 0x18008AEC0 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     <none>
 */

__int64 NtGetCompleteWnfStateSubscription()
{
  __int64 result; // rax

  result = 241LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
