/*
 * XREFs of MiIsDecayPfn @ 0x140236E3C
 * Callers:
 *     MiReplaceTransitionPage @ 0x14025B310 (MiReplaceTransitionPage.c)
 *     MiMirrorGatherBrownPages @ 0x1403844C8 (MiMirrorGatherBrownPages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385270 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorReduceBlackWrites @ 0x140385DC0 (MiMirrorReduceBlackWrites.c)
 *     MiSwapNumaStandbyPage @ 0x140551610 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(ULONG_PTR a1)
{
  return a1 >= qword_140C4E9E0 && a1 < qword_140C4E9E0 + 2048;
}
