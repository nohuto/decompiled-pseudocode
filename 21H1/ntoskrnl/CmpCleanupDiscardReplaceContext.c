/*
 * XREFs of CmpCleanupDiscardReplaceContext @ 0x140692AA4
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404E78C8 (CmDeleteLayeredKey.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406585D4 (CmpCleanupLightWeightPrepare.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmpCommitDeleteKeyUoW @ 0x14071F748 (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14087A91C (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14087B250 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14071F908 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCleanupDiscardReplacePost @ 0x1408717B0 (CmpCleanupDiscardReplacePost.c)
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
