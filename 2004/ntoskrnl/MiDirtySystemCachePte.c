/*
 * XREFs of MiDirtySystemCachePte @ 0x140264A4C
 * Callers:
 *     MmCopyToCachedPage @ 0x140223C10 (MmCopyToCachedPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteNewProtection @ 0x140263340 (MiWriteValidPteNewProtection.c)
 *     MiLockWorkingSetOptimal @ 0x1402633AC (MiLockWorkingSetOptimal.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 */

void __fastcall MiDirtySystemCachePte(__int64 a1, unsigned __int64 a2, __int16 a3)
{
  __int64 v5; // rsi
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
