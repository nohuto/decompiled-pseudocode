/*
 * XREFs of MmGetNextNode @ 0x14028738C
 * Callers:
 *     ExpAllocatePoolWithTagFromNode @ 0x140211FF0 (ExpAllocatePoolWithTagFromNode.c)
 *     KiChooseTargetProcessor @ 0x14021AAC0 (KiChooseTargetProcessor.c)
 *     PoIdle @ 0x140281800 (PoIdle.c)
 *     PpmIdlePrepare @ 0x1402847A0 (PpmIdlePrepare.c)
 *     ExpQueueWorkItem @ 0x14028DAE0 (ExpQueueWorkItem.c)
 *     ExpTryQueueWorkItem @ 0x1402D46BC (ExpTryQueueWorkItem.c)
 *     KiSearchForNewThread @ 0x1402D9CEC (KiSearchForNewThread.c)
 *     PoAllProcessorsDeepIdle @ 0x140311AF4 (PoAllProcessorsDeepIdle.c)
 *     PpmIdleSelectStates @ 0x140395110 (PpmIdleSelectStates.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, _DWORD *a2)
{
  if ( ++*a2 == (unsigned __int16)KeNumberNodes )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(qword_140C4DD18 + 4LL * (*a2 + (unsigned int)(unsigned __int16)KeNumberNodes * a1));
}
