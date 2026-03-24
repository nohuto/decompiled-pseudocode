/*
 * XREFs of MiTryDeleteTransitionPte @ 0x1403645C8
 * Callers:
 *     MiDeletePteRun @ 0x140236C60 (MiDeletePteRun.c)
 *     MiRemoveMappedPtes @ 0x140308500 (MiRemoveMappedPtes.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     MiDeleteMergedPte @ 0x140366E48 (MiDeleteMergedPte.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x140238830 (MiDeleteTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockTransitionLeafPage @ 0x140364704 (MiLockTransitionLeafPage.c)
 */

__int64 __fastcall MiTryDeleteTransitionPte(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rax
  __int64 v3; // r8

  if ( (MI_READ_PTE_LOCK_FREE(BugCheckParameter2) & 0x400) != 0 )
    return 1LL;
  v2 = MiLockTransitionLeafPage(BugCheckParameter2);
  if ( !v2 )
    return 1LL;
  LOBYTE(v3) = 17;
  return MiDeleteTransitionPte(BugCheckParameter2, v2, v3, 1);
}
