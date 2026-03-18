/*
 * XREFs of MiIsDecayPfn @ 0x1402C1520
 * Callers:
 *     MiSynchronizeFastPageInsert @ 0x1402C0900 (MiSynchronizeFastPageInsert.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiWriteStandbyLookasideEntry @ 0x1402E901C (MiWriteStandbyLookasideEntry.c)
 *     MiFindSuitableLookasideReplacement @ 0x1402E9070 (MiFindSuitableLookasideReplacement.c)
 *     MiMirrorGatherBrownPages @ 0x14038A428 (MiMirrorGatherBrownPages.c)
 *     MiLockStandbyOldestPage @ 0x14038ECAC (MiLockStandbyOldestPage.c)
 *     MiUnlinkProtectedStandbyPfn @ 0x14038EF10 (MiUnlinkProtectedStandbyPfn.c)
 *     MiMirrorReduceBlackWrites @ 0x14038F620 (MiMirrorReduceBlackWrites.c)
 *     MiGetStandbyPageType @ 0x140390CE4 (MiGetStandbyPageType.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(ULONG_PTR a1)
{
  return a1 >= qword_140C52CE0 && a1 < qword_140C52CE0 + 2048;
}
