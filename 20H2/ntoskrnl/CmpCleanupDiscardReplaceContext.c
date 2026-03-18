/*
 * XREFs of CmpCleanupDiscardReplaceContext @ 0x140702A00
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404EB788 (CmDeleteLayeredKey.c)
 *     CmpCleanupLightWeightUoWData @ 0x1406A42E0 (CmpCleanupLightWeightUoWData.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x14072F5F8 (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1408817B0 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x1408820F8 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14072F7B8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCleanupDiscardReplacePost @ 0x1408785F0 (CmpCleanupDiscardReplacePost.c)
 */

__int64 __fastcall CmpCleanupDiscardReplaceContext(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rdi
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
  {
    v5 = a1 + 2;
    if ( (_QWORD *)*v5 != v5 )
    {
      result = CmpEnumerateAllHigherLayerKcbs(
                 v4,
                 (unsigned int)CmpCleanupDiscardReplacePre,
                 (unsigned int)CmpCleanupDiscardReplacePost,
                 a2,
                 (__int64)a1,
                 1,
                 0);
      if ( (_QWORD *)*v5 != v5 )
        return CmpCleanupDiscardReplacePost(*a1, a2, a1);
    }
  }
  return result;
}
