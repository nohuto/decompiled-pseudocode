/*
 * XREFs of MiUpdateTransitionPteFrame @ 0x14025B980
 * Callers:
 *     MiInvalidateCollidedIos @ 0x140248AEC (MiInvalidateCollidedIos.c)
 *     MiReplaceTransitionPage @ 0x14025B310 (MiReplaceTransitionPage.c)
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385270 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSplitDirectMapPage @ 0x14054237C (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x140551610 (MiSwapNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x14055A474 (MiDuplicateCloneLeaf.c)
 *     MiSwapHardFaultPage @ 0x1405639B0 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdateTransitionPteFrame(__int64 a1, __int64 a2)
{
  if ( qword_140C4DF80 )
  {
    if ( (a1 & 0x10) != 0 )
      a1 &= ~0x10uLL;
    else
      a1 &= ~qword_140C4DF80;
  }
  return MiSwizzleInvalidPte((a1 ^ (a2 << 12)) & 0xFFFFFFFFF000LL ^ a1);
}
