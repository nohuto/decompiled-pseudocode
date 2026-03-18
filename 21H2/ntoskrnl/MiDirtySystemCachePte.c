/*
 * XREFs of MiDirtySystemCachePte @ 0x140241138
 * Callers:
 *     MmCopyToCachedPage @ 0x1402BE8E0 (MmCopyToCachedPage.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetOptimal @ 0x1402D0490 (MiLockWorkingSetOptimal.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 */

void __fastcall MiDirtySystemCachePte(__int64 a1, __int64 *a2, __int16 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  char v9; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0x42) == 0 )
  {
    v9 = 0;
    if ( (a3 & 0x800) != 0 )
    {
      v5 = MiLockWorkingSetOptimal(a1, a2, &v9);
      v6 = *a2;
      v7 = v5;
      if ( (*a2 & 1) != 0 && (v6 & 0x42) == 0 && (v6 & 0x800) != 0 )
        MiWriteValidPteNewProtection(a2, v6 | 0x62);
      MiUnlockPageTableInternal(a1, v7);
      LOBYTE(v8) = v9;
      MiUnlockWorkingSetShared(a1, v8);
    }
  }
}
