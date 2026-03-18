/*
 * XREFs of MiDeleteMergedPte @ 0x1403641F8
 * Callers:
 *     MiDecrementCombinedPte @ 0x140364274 (MiDecrementCombinedPte.c)
 *     MiDecrementCloneBlockReference @ 0x140554398 (MiDecrementCloneBlockReference.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiReleasePageFileSpace @ 0x1402AB620 (MiReleasePageFileSpace.c)
 *     MiTryDeleteTransitionPte @ 0x1402AC860 (MiTryDeleteTransitionPte.c)
 */

__int64 __fastcall MiDeleteMergedPte(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  char v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0;
  result = MI_READ_PTE_LOCK_FREE(a2);
  if ( result )
  {
    v5 = MiLockProtoPoolPage(a2, (__int64)&v11);
    v7 = MiTryDeleteTransitionPte(a2);
    if ( v7 == 1 )
    {
      v10 = MI_READ_PTE_LOCK_FREE(a2);
      MiReleasePageFileSpace(a1, v10);
    }
    LOBYTE(v6) = v11;
    MiUnlockProtoPoolPage(v5, v6, v8, v9);
    return v7;
  }
  return result;
}
