/*
 * XREFs of KiEpfHandleNotification @ 0x140524470
 * Callers:
 *     KiVirtualizationException @ 0x14040FD00 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1405243E8 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x140524494 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
