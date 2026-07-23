/*
 * XREFs of MiDeleteMergedPte @ 0x140366FF8
 * Callers:
 *     MiDecrementCombinedPte @ 0x140367074 (MiDecrementCombinedPte.c)
 *     MiDecrementCloneBlockReference @ 0x14055A0C8 (MiDecrementCloneBlockReference.c)
 * Callees:
 *     MiTryDeleteTransitionPte @ 0x140224A38 (MiTryDeleteTransitionPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiReleasePageFileSpace @ 0x14030DEA4 (MiReleasePageFileSpace.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeleteMergedPte(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  unsigned int v6; // edi
  unsigned __int64 v7; // rax
  unsigned __int8 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  result = MI_READ_PTE_LOCK_FREE(a2);
  if ( result )
  {
    v5 = MiLockProtoPoolPage(a2, &v8);
    v6 = MiTryDeleteTransitionPte(a2);
    if ( v6 == 1 )
    {
      v7 = MI_READ_PTE_LOCK_FREE(a2);
      MiReleasePageFileSpace(a1, v7, 1);
    }
    MiUnlockProtoPoolPage(v5, v8);
    return v6;
  }
  return result;
}
