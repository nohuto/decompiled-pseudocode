/*
 * XREFs of KiEpfHandleNotification @ 0x140522750
 * Callers:
 *     KiVirtualizationException @ 0x14040D300 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1405226C8 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x140522774 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
