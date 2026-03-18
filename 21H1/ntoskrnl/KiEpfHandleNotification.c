/*
 * XREFs of KiEpfHandleNotification @ 0x14051E730
 * Callers:
 *     KiVirtualizationException @ 0x140405800 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x14051E6A8 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x14051E754 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
