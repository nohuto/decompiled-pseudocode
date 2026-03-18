/*
 * XREFs of MiDeleteMergedPte @ 0x140364BB8
 * Callers:
 *     MiDecrementCombinedPte @ 0x140364C34 (MiDecrementCombinedPte.c)
 *     MiDecrementCloneBlockReference @ 0x1405549E8 (MiDecrementCloneBlockReference.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileSpace @ 0x1402525F0 (MiReleasePageFileSpace.c)
 *     MiTryDeleteTransitionPte @ 0x140253830 (MiTryDeleteTransitionPte.c)
 */

__int64 __fastcall MiDeleteMergedPte(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rax
  unsigned __int8 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0;
  result = MI_READ_PTE_LOCK_FREE(a2);
  if ( result )
  {
    v5 = MiLockProtoPoolPage(a2, &v9);
    v7 = MiTryDeleteTransitionPte(a2);
    if ( v7 == 1 )
    {
      v8 = MI_READ_PTE_LOCK_FREE(a2);
      MiReleasePageFileSpace(a1, v8);
    }
    LOBYTE(v6) = v9;
    MiUnlockProtoPoolPage(v5, v6);
    return v7;
  }
  return result;
}
