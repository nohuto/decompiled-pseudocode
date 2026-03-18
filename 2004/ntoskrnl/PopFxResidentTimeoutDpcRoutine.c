/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x1402FCA20
 * Callers:
 *     <none>
 * Callees:
 *     PopFxArmResidentTimer @ 0x1402CD1BC (PopFxArmResidentTimer.c)
 *     ExQueueWorkItemEx @ 0x1402FACC0 (ExQueueWorkItemEx.c)
 */

__int64 PopFxResidentTimeoutDpcRoutine()
{
  __int64 result; // rax

  result = ExQueueWorkItemEx(&PopFxResidentWorkItem, 1u, 0xFFFFFFFF);
  if ( !(_BYTE)result )
    return PopFxArmResidentTimer(1);
  return result;
}
