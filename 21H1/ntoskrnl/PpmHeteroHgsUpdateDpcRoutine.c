/*
 * XREFs of PpmHeteroHgsUpdateDpcRoutine @ 0x1405720F0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 */

void PpmHeteroHgsUpdateDpcRoutine()
{
  ExQueueWorkItem(&PpmHeteroHgsUpdateWorkItem, CriticalWorkQueue);
}
