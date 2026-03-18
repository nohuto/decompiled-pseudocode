/*
 * XREFs of MiIsDecayPfn @ 0x140344844
 * Callers:
 *     MiReplaceTransitionPage @ 0x14031BEAC (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140382660 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorReduceBlackWrites @ 0x1403831B0 (MiMirrorReduceBlackWrites.c)
 *     MiMirrorGatherBrownPages @ 0x1403840EC (MiMirrorGatherBrownPages.c)
 *     MiSwapNumaStandbyPage @ 0x14054BF30 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(ULONG_PTR a1)
{
  return a1 >= qword_140C4E7A0 && a1 < qword_140C4E7A0 + 2048;
}
