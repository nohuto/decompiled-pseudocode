/*
 * XREFs of MiUpdateTransitionPteFrame @ 0x1402E7D14
 * Callers:
 *     MiInvalidateCollidedIos @ 0x140226AE0 (MiInvalidateCollidedIos.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MiSplitDirectMapPage @ 0x1405A0B10 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 *     MiDuplicateCloneLeaf @ 0x1405BA864 (MiDuplicateCloneLeaf.c)
 *     MiSwapHardFaultPage @ 0x1405C4C94 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdateTransitionPteFrame(__int64 a1, __int64 a2)
{
  if ( qword_140C50780 )
  {
    if ( (a1 & 0x10) != 0 )
      a1 &= ~0x10uLL;
    else
      a1 &= ~qword_140C50780;
  }
  return MiSwizzleInvalidPte((a1 ^ (a2 << 12)) & 0xFFFFFFFFFF000LL ^ a1);
}
