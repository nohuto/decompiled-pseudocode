/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x140328120
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x1402D5148 (ExQueueWorkItemEx.c)
 *     PopFxArmResidentTimer @ 0x14030F13C (PopFxArmResidentTimer.c)
 */

__int64 PopFxResidentTimeoutDpcRoutine()
{
  __int64 result; // rax

  result = ExQueueWorkItemEx(&PopFxResidentWorkItem, 1u, 0xFFFFFFFF);
  if ( !(_BYTE)result )
    return PopFxArmResidentTimer(1);
  return result;
}
