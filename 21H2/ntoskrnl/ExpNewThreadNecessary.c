/*
 * XREFs of ExpNewThreadNecessary @ 0x140346260
 * Callers:
 *     ExpPartitionCreateThreadIfNecessary @ 0x1402EF2BC (ExpPartitionCreateThreadIfNecessary.c)
 *     ExQueueWorkItemFromIo @ 0x140345DA0 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExpWorkQueueManagerThread @ 0x14083ECE0 (ExpWorkQueueManagerThread.c)
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
