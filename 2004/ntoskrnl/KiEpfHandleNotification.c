/*
 * XREFs of KiEpfHandleNotification @ 0x14051ED80
 * Callers:
 *     KiVirtualizationException @ 0x140406B00 (KiVirtualizationException.c)
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x14051ECF8 (KiEpfDrainCompletionQueue.c)
 *     KiEpfStart @ 0x14051EDA4 (KiEpfStart.c)
 */

__int64 __fastcall KiEpfHandleNotification(__int64 a1)
{
  KiEpfDrainCompletionQueue();
  return KiEpfStart(a1);
}
