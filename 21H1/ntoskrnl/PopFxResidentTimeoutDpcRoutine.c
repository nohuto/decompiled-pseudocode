/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x140358A00
 * Callers:
 *     <none>
 * Callees:
 *     PopFxArmResidentTimer @ 0x14023A38C (PopFxArmResidentTimer.c)
 *     ExQueueWorkItemEx @ 0x140356CA0 (ExQueueWorkItemEx.c)
 */

__int64 PopFxResidentTimeoutDpcRoutine()
{
  __int64 result; // rax

  result = ExQueueWorkItemEx(&PopFxResidentWorkItem, 1u, 0xFFFFFFFF);
  if ( !(_BYTE)result )
    return PopFxArmResidentTimer(1);
  return result;
}
