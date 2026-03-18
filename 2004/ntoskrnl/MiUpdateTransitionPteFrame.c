/*
 * XREFs of MiUpdateTransitionPteFrame @ 0x14031C51C
 * Callers:
 *     MiMigratePfn @ 0x1402AAA90 (MiMigratePfn.c)
 *     MiReplaceTransitionPage @ 0x14031BEAC (MiReplaceTransitionPage.c)
 *     MiInvalidateCollidedIos @ 0x14035875C (MiInvalidateCollidedIos.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140382660 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSplitDirectMapPage @ 0x14053CC6C (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x14054BF30 (MiSwapNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x140554D94 (MiDuplicateCloneLeaf.c)
 *     MiSwapHardFaultPage @ 0x14055E2D0 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdateTransitionPteFrame(__int64 a1, __int64 a2)
{
  if ( qword_140C4DD40 )
  {
    if ( (a1 & 0x10) != 0 )
      a1 &= ~0x10uLL;
    else
      a1 &= ~qword_140C4DD40;
  }
  return MiSwizzleInvalidPte((a1 ^ (a2 << 12)) & 0xFFFFFFFFF000LL ^ a1);
}
