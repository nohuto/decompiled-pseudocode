/*
 * XREFs of MmGetNextNode @ 0x140241930
 * Callers:
 *     ExpQueueWorkItem @ 0x140224E90 (ExpQueueWorkItem.c)
 *     ExpTryQueueWorkItem @ 0x140229E00 (ExpTryQueueWorkItem.c)
 *     PoAllProcessorsDeepIdle @ 0x140241A80 (PoAllProcessorsDeepIdle.c)
 *     KiChooseTargetProcessor @ 0x14024BA70 (KiChooseTargetProcessor.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x14024FE80 (ExpAllocatePoolWithTagFromNode.c)
 *     PoIdle @ 0x14026FDE0 (PoIdle.c)
 *     PpmIdlePrepare @ 0x140272D80 (PpmIdlePrepare.c)
 *     KiSearchForNewThread @ 0x1403306F4 (KiSearchForNewThread.c)
 *     PpmIdleSelectStates @ 0x140392080 (PpmIdleSelectStates.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, _DWORD *a2)
{
  if ( ++*a2 == (unsigned __int16)KeNumberNodes )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(qword_140C4DDD8 + 4LL * (*a2 + (unsigned int)(unsigned __int16)KeNumberNodes * a1));
}
