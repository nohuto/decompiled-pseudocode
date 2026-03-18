/*
 * XREFs of MmGetNextNode @ 0x14027E6C8
 * Callers:
 *     PoIdle @ 0x140216D90 (PoIdle.c)
 *     PpmIdlePrepare @ 0x140219D30 (PpmIdlePrepare.c)
 *     PoAllProcessorsDeepIdle @ 0x14027E818 (PoAllProcessorsDeepIdle.c)
 *     KiChooseTargetProcessor @ 0x140288310 (KiChooseTargetProcessor.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x14028C720 (ExpAllocatePoolWithTagFromNode.c)
 *     ExpQueueWorkItem @ 0x1402B7B10 (ExpQueueWorkItem.c)
 *     ExpTryQueueWorkItem @ 0x1402BCA80 (ExpTryQueueWorkItem.c)
 *     KiSearchForNewThread @ 0x1402EB5B4 (KiSearchForNewThread.c)
 *     PpmIdleSelectStates @ 0x140392C50 (PpmIdleSelectStates.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, _DWORD *a2)
{
  if ( ++*a2 == (unsigned __int16)KeNumberNodes )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(qword_140C4DC98 + 4LL * (*a2 + (unsigned int)(unsigned __int16)KeNumberNodes * a1));
}
