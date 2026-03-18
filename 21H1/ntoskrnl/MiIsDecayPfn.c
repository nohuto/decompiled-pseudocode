/*
 * XREFs of MiIsDecayPfn @ 0x140306A40
 * Callers:
 *     MiReplaceTransitionPage @ 0x14034B1EC (MiReplaceTransitionPage.c)
 *     MiMirrorGatherBrownPages @ 0x14037F854 (MiMirrorGatherBrownPages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140381E20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorReduceBlackWrites @ 0x140382970 (MiMirrorReduceBlackWrites.c)
 *     MiSwapNumaStandbyPage @ 0x14054B8E0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(ULONG_PTR a1)
{
  return a1 >= qword_140C4E8E0 && a1 < qword_140C4E8E0 + 2048;
}
