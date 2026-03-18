/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x140572FB0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x1402D5148 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x1405725C4 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
