/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x14056EF30
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x140356CA0 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x14056E544 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
