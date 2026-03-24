/*
 * XREFs of MmGetNextNode @ 0x1402936D4
 * Callers:
 *     PoIdle @ 0x140221ED0 (PoIdle.c)
 *     PpmIdlePrepare @ 0x140224F90 (PpmIdlePrepare.c)
 *     ExpTryQueueWorkItem @ 0x14023BDCC (ExpTryQueueWorkItem.c)
 *     ExpQueueWorkItem @ 0x1402414A0 (ExpQueueWorkItem.c)
 *     KiSearchForNewThread @ 0x140256CB8 (KiSearchForNewThread.c)
 *     PoAllProcessorsDeepIdle @ 0x140293618 (PoAllProcessorsDeepIdle.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x14033C180 (ExpAllocatePoolWithTagFromNode.c)
 *     KiChooseTargetProcessor @ 0x140344DE0 (KiChooseTargetProcessor.c)
 *     PpmIdleSelectStates @ 0x140395580 (PpmIdleSelectStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, _DWORD *a2)
{
  if ( ++*a2 == (unsigned __int16)KeNumberNodes )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(qword_140C4DE98 + 4LL * (*a2 + (unsigned int)(unsigned __int16)KeNumberNodes * a1));
}
