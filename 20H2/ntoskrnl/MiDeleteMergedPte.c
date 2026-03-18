/*
 * XREFs of MiDeleteMergedPte @ 0x140366B98
 * Callers:
 *     MiDecrementCombinedPte @ 0x140366C14 (MiDecrementCombinedPte.c)
 *     MiDecrementCloneBlockReference @ 0x1405583B8 (MiDecrementCloneBlockReference.c)
 * Callees:
 *     MiTryDeleteTransitionPte @ 0x140236A7C (MiTryDeleteTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402CA9B0 (MiLockProtoPoolPage.c)
 *     MiReleasePageFileSpace @ 0x14034D3F4 (MiReleasePageFileSpace.c)
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
