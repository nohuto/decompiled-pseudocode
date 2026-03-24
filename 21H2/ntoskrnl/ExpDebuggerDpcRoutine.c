/*
 * XREFs of ExpDebuggerDpcRoutine @ 0x1403D03D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 */

void ExpDebuggerDpcRoutine()
{
  ExQueueWorkItem(&ExpDebuggerWorkItem, DelayedWorkQueue);
}
