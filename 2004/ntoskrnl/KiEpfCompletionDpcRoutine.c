/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x14051EC90
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x14051ECF8 (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_140C2AE4C);
  return KiEpfDrainCompletionQueue();
}
