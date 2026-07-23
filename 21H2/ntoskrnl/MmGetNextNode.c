/*
 * XREFs of MmGetNextNode @ 0x140211644
 * Callers:
 *     PoAllProcessorsDeepIdle @ 0x140211588 (PoAllProcessorsDeepIdle.c)
 *     KiSearchForNewThread @ 0x140278228 (KiSearchForNewThread.c)
 *     PoIdle @ 0x1402C67D0 (PoIdle.c)
 *     PpmIdlePrepare @ 0x1402C9890 (PpmIdlePrepare.c)
 *     ExpTryQueueWorkItem @ 0x1402E061C (ExpTryQueueWorkItem.c)
 *     ExpQueueWorkItem @ 0x1402E5CF0 (ExpQueueWorkItem.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140346ED0 (ExpAllocatePoolWithTagFromNode.c)
 *     KiChooseTargetProcessor @ 0x14034FB30 (KiChooseTargetProcessor.c)
 *     PpmIdleSelectStates @ 0x1403956D0 (PpmIdleSelectStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, _DWORD *a2)
{
  if ( ++*a2 == (unsigned __int16)KeNumberNodes )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(qword_140C4DED8 + 4LL * (*a2 + (unsigned int)(unsigned __int16)KeNumberNodes * a1));
}
