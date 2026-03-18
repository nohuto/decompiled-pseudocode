/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x140522660
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x1405226C8 (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_140C2AEEC);
  return KiEpfDrainCompletionQueue();
}
