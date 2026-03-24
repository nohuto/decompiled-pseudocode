/*
 * XREFs of MiDirtySystemCachePte @ 0x1402BC818
 * Callers:
 *     MmCopyToCachedPage @ 0x140331500 (MmCopyToCachedPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiWriteValidPteNewProtection @ 0x14030FA00 (MiWriteValidPteNewProtection.c)
 *     MiLockWorkingSetOptimal @ 0x14030FC94 (MiLockWorkingSetOptimal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiDirtySystemCachePte(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int8 v7; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0x42) == 0 )
  {
    v7 = 0;
    if ( (a3 & 0x800) != 0 )
    {
      v5 = MiLockWorkingSetOptimal(a1, a2, &v7);
      v6 = MI_READ_PTE_LOCK_FREE(a2);
      if ( (v6 & 1) != 0 && (v6 & 0x42) == 0 && (v6 & 0x800) != 0 )
        MiWriteValidPteNewProtection(a2, v6 | 0x62);
      MiUnlockPageTableInternal(a1, v5);
      MiUnlockWorkingSetShared(a1, v7);
    }
  }
}
