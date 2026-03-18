/*
 * XREFs of MmGetNextNode @ 0x14030B3F0
 * Callers:
 *     KiSelectIdealProcessorSetForGroup @ 0x1402A0A4C (KiSelectIdealProcessorSetForGroup.c)
 *     ExpTryQueueWorkItem @ 0x1402EEE7C (ExpTryQueueWorkItem.c)
 *     ExpQueueWorkItem @ 0x1402EF0CC (ExpQueueWorkItem.c)
 *     PoIdle @ 0x140305BD0 (PoIdle.c)
 *     PpmIdlePrepare @ 0x1403086B0 (PpmIdlePrepare.c)
 *     ExQueueWorkItemFromIo @ 0x140345DA0 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTagFromNode @ 0x140349670 (ExAllocatePoolWithTagFromNode.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140349710 (ExpAllocatePoolWithTagFromNode.c)
 *     PoAllProcessorsDeepIdle @ 0x1403545B0 (PoAllProcessorsDeepIdle.c)
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x14056D9C0 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     KeInitializeProcess @ 0x14070A268 (KeInitializeProcess.c)
 *     MmAllocateMemoryRanges @ 0x14096AB50 (MmAllocateMemoryRanges.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, _DWORD *a2)
{
  if ( ++*a2 == (unsigned __int16)KeNumberNodes )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(qword_140C506D8 + 4LL * (*a2 + (unsigned int)(unsigned __int16)KeNumberNodes * a1));
}
