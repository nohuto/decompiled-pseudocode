/*
 * XREFs of MiDirtySystemCachePte @ 0x14031A254
 * Callers:
 *     MmCopyToCachedPage @ 0x1402B4910 (MmCopyToCachedPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetOptimal @ 0x14029C0FC (MiLockWorkingSetOptimal.c)
 *     MiWriteValidPteNewProtection @ 0x14029F0A0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiDirtySystemCachePte(__int64 a1, unsigned __int64 a2, __int16 a3)
{
  __int64 v5; // rax
  unsigned __int8 v6; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0x42) == 0 )
  {
    v6 = 0;
    if ( (a3 & 0x800) != 0 )
    {
      MiLockWorkingSetOptimal(a1, a2, &v6);
      v5 = MI_READ_PTE_LOCK_FREE(a2);
      if ( (v5 & 1) != 0 && (v5 & 0x42) == 0 && (v5 & 0x800) != 0 )
        MiWriteValidPteNewProtection(a2, v5 | 0x62);
      MiUnlockPageTableInternal(a1);
      MiUnlockWorkingSetShared(a1, v6);
    }
  }
}
