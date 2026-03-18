/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x14057B0D0
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x14057B0EC (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_140C2A8AC);
  return KiEpfDrainCompletionQueue();
}
