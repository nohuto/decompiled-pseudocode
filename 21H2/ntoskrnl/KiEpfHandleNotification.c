/*
 * XREFs of KiEpfHandleNotification @ 0x14057B170
 * Callers:
 *     KiVirtualizationException @ 0x140432080 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x14057B0EC (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x14057B194 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
