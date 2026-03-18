/*
 * XREFs of CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140878674
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404EB788 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x14072F5F8 (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1408817B0 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14072F7B8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCommitDiscardReplacePost @ 0x1408786E0 (CmpCommitDiscardReplacePost.c)
 */

__int64 __fastcall CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(__int64 a1, __int64 a2, __int64 a3)
{
  CmpEnumerateAllHigherLayerKcbs(
    a1,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanupDiscardReplacePre,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpCommitDiscardReplacePost,
    a3,
    a2,
    1,
    0);
  return CmpCommitDiscardReplacePost(a1, a3, a2);
}
