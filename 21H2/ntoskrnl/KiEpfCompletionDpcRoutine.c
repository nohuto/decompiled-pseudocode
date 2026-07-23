/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x140524380
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1405243E8 (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_140C2B10C);
  return KiEpfDrainCompletionQueue();
}
