/*
 * XREFs of ExpNewThreadNecessary @ 0x14028EED0
 * Callers:
 *     ExpQueueWorkItem @ 0x14028DAE0 (ExpQueueWorkItem.c)
 *     ExpWorkerThread @ 0x14028E4C0 (ExpWorkerThread.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x1402D4AEC (ExpPartitionCreateThreadIfNecessary.c)
 *     ExpWorkQueueManagerThread @ 0x1407A6A90 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpNewThreadNecessary(__int64 a1, int a2)
{
  int v2; // r8d

  v2 = *(_DWORD *)(a1 + 712);
  return v2 < (2 * *(_DWORD *)(a1 + 716)) >> 1
      || v2 < a2 && *(_QWORD *)(a1 + 8) == a1 + 8 && (*(_DWORD *)(a1 + 4) || *(int *)(a1 + 716) < 0);
}
