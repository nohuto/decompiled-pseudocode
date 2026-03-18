/*
 * XREFs of _GetQueueIocp @ 0x1C012E7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GetQueueIocp()
{
  return *(_QWORD *)(gptiCurrent + 1432LL);
}
