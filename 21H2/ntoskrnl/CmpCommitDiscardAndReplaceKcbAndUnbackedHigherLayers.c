/*
 * XREFs of CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x14091CB44
 * Callers:
 *     CmDeleteLayeredKey @ 0x14053F5E8 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1409237B4 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406E93C0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCommitDiscardReplacePost @ 0x14091CBB0 (CmpCommitDiscardReplacePost.c)
 */

__int64 __fastcall CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3)
{
  CmpEnumerateAllHigherLayerKcbs(
    BugCheckParameter2,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanupDiscardReplacePre,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpCommitDiscardReplacePost,
    a3,
    a2,
    1,
    0);
  return CmpCommitDiscardReplacePost(BugCheckParameter2);
}
