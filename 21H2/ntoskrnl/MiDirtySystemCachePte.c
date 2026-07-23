/*
 * XREFs of MiDirtySystemCachePte @ 0x14023ADA8
 * Callers:
 *     MmCopyToCachedPage @ 0x14033C250 (MmCopyToCachedPage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiWriteValidPteNewProtection @ 0x14031A750 (MiWriteValidPteNewProtection.c)
 *     MiLockWorkingSetOptimal @ 0x14031A9E4 (MiLockWorkingSetOptimal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiDirtySystemCachePte(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  char v8; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0x42) == 0 )
  {
    v8 = 0;
    if ( (a3 & 0x800) != 0 )
    {
      v5 = MiLockWorkingSetOptimal(a1, a2, &v8);
      v6 = MI_READ_PTE_LOCK_FREE(a2);
      if ( (v6 & 1) != 0 && (v6 & 0x42) == 0 && (v6 & 0x800) != 0 )
        MiWriteValidPteNewProtection(a2, v6 | 0x62);
      MiUnlockPageTableInternal(a1, v5);
      LOBYTE(v7) = v8;
      MiUnlockWorkingSetShared(a1, v7);
    }
  }
}
