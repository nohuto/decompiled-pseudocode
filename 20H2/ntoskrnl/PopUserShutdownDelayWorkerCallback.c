/*
 * XREFs of PopUserShutdownDelayWorkerCallback @ 0x1408EA1A0
 * Callers:
 *     <none>
 * Callees:
 *     PopUserShutdownCancelled @ 0x140775ED4 (PopUserShutdownCancelled.c)
 */

__int64 (__fastcall *PopUserShutdownDelayWorkerCallback())(_QWORD)
{
  _InterlockedExchange(&PopUserShutdown, 0);
  return PopUserShutdownCancelled(0);
}
