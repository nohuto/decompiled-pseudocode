/*
 * XREFs of CmpCleanupDiscardReplaceContext @ 0x1406445B4
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404E7EF8 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x140643F58 (CmDeleteKey.c)
 *     CmpCleanupLightWeightPrepare @ 0x140653C68 (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitDeleteKeyUoW @ 0x140721608 (CmpCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14087BC0C (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14087C540 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407217C8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCleanupDiscardReplacePost @ 0x140872AA0 (CmpCleanupDiscardReplacePost.c)
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
