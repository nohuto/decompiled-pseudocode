/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x14051E640
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x14051E6A8 (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_140C2B02C);
  return KiEpfDrainCompletionQueue();
}
