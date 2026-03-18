/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x14056F580
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x1402FACC0 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x14056EB94 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
