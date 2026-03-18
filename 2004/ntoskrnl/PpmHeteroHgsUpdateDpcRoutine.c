/*
 * XREFs of PpmHeteroHgsUpdateDpcRoutine @ 0x140572740
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 */

void PpmHeteroHgsUpdateDpcRoutine()
{
  ExQueueWorkItem(&PpmHeteroHgsUpdateWorkItem, CriticalWorkQueue);
}
