/*
 * XREFs of PopUserShutdownDelayWorkerCallback @ 0x1408E3310
 * Callers:
 *     <none>
 * Callees:
 *     PopUserShutdownCancelled @ 0x1407654E4 (PopUserShutdownCancelled.c)
 */

__int64 (__fastcall *PopUserShutdownDelayWorkerCallback())(_QWORD)
{
  _InterlockedExchange(&PopUserShutdown, 0);
  return PopUserShutdownCancelled(0);
}
