/*
 * XREFs of MiTryDeleteTransitionPte @ 0x140236A7C
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MiRemoveMappedPtes @ 0x1402CF020 (MiRemoveMappedPtes.c)
 *     MiDeleteMergedPte @ 0x140366B98 (MiDeleteMergedPte.c)
 * Callees:
 *     MiLockTransitionLeafPage @ 0x14023681C (MiLockTransitionLeafPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteTransitionPte @ 0x1402C7050 (MiDeleteTransitionPte.c)
 */

__int64 __fastcall MiTryDeleteTransitionPte(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rax

  if ( (MI_READ_PTE_LOCK_FREE(BugCheckParameter2) & 0x400) != 0 )
    return 1LL;
  v2 = MiLockTransitionLeafPage(BugCheckParameter2, 0LL);
  if ( !v2 )
    return 1LL;
  else
    return MiDeleteTransitionPte(BugCheckParameter2, v2);
}
