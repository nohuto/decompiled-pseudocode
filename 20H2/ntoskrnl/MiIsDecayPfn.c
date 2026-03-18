/*
 * XREFs of MiIsDecayPfn @ 0x14031591C
 * Callers:
 *     MiReplaceTransitionPage @ 0x140351C54 (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384340 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorReduceBlackWrites @ 0x140384E90 (MiMirrorReduceBlackWrites.c)
 *     MiMirrorGatherBrownPages @ 0x14038621C (MiMirrorGatherBrownPages.c)
 *     MiSwapNumaStandbyPage @ 0x14054F900 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(ULONG_PTR a1)
{
  return a1 >= qword_140C4E820 && a1 < qword_140C4E820 + 2048;
}
