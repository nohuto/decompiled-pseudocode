/*
 * XREFs of MiDeleteMergedPte @ 0x140239C2C
 * Callers:
 *     MiDecrementCombinedPte @ 0x1402399A8 (MiDecrementCombinedPte.c)
 *     MiDecrementCloneBlockReference @ 0x1405BA498 (MiDecrementCloneBlockReference.c)
 * Callees:
 *     MiTryDeleteTransitionPte @ 0x140239CA8 (MiTryDeleteTransitionPte.c)
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MiReleasePageFileSpace @ 0x140274E48 (MiReleasePageFileSpace.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 */

__int64 __fastcall MiDeleteMergedPte(__int64 a1, ULONG_PTR a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rax
  char v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  result = MI_READ_PTE_LOCK_FREE(a2);
  if ( result )
  {
    v5 = MiLockProtoPoolPage(a2, &v9);
    v7 = MiTryDeleteTransitionPte(a2);
    if ( v7 == 1 )
    {
      v8 = MI_READ_PTE_LOCK_FREE(a2);
      MiReleasePageFileSpace(a1, v8, 1LL);
    }
    LOBYTE(v6) = v9;
    MiUnlockProtoPoolPage(v5, v6);
    return v7;
  }
  return result;
}
