/*
 * XREFs of KiEpfHandleNotification @ 0x140524230
 * Callers:
 *     KiVirtualizationException @ 0x14040FC00 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1405241A8 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x140524254 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
