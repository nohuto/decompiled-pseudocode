/*
 * XREFs of MiIsDecayPfn @ 0x1402B8C2C
 * Callers:
 *     MiReplaceTransitionPage @ 0x14026D370 (MiReplaceTransitionPage.c)
 *     MiMirrorGatherBrownPages @ 0x140384378 (MiMirrorGatherBrownPages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385120 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorReduceBlackWrites @ 0x140385C70 (MiMirrorReduceBlackWrites.c)
 *     MiSwapNumaStandbyPage @ 0x1405513D0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(ULONG_PTR a1)
{
  return a1 >= qword_140C4E9A0 && a1 < qword_140C4E9A0 + 2048;
}
