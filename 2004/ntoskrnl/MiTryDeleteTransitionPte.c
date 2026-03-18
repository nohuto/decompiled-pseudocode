/*
 * XREFs of MiTryDeleteTransitionPte @ 0x140253830
 * Callers:
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     MiRemoveMappedPtes @ 0x14025A8C0 (MiRemoveMappedPtes.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiDeleteMergedPte @ 0x140364BB8 (MiDeleteMergedPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteTransitionPte @ 0x1402419A0 (MiDeleteTransitionPte.c)
 *     MiLockTransitionLeafPage @ 0x140253D18 (MiLockTransitionLeafPage.c)
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
