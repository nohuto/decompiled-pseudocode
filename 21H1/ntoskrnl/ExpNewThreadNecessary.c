/*
 * XREFs of ExpNewThreadNecessary @ 0x140226280
 * Callers:
 *     ExpQueueWorkItem @ 0x140224E90 (ExpQueueWorkItem.c)
 *     ExpWorkerThread @ 0x140225870 (ExpWorkerThread.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x140310008 (ExpPartitionCreateThreadIfNecessary.c)
 *     ExpWorkQueueManagerThread @ 0x1407979B0 (ExpWorkQueueManagerThread.c)
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
