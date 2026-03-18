/*
 * XREFs of MiMarkPteDirty @ 0x1402649B0
 * Callers:
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiWriteValidPteNewProtection @ 0x140263340 (MiWriteValidPteNewProtection.c)
 *     MiLockWorkingSetOptimal @ 0x1402633AC (MiLockWorkingSetOptimal.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 */

__int64 __fastcall MiMarkPteDirty(unsigned __int64 a1)
{
  __int64 result; // rax
  char *AnyMultiplexedVm; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  result = MI_READ_PTE_LOCK_FREE(a1);
  if ( (result & 0x42) == 0 && (result & 0x800) != 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
    v4 = MiLockWorkingSetOptimal((__int64)AnyMultiplexedVm, a1, &v7);
    v5 = MI_READ_PTE_LOCK_FREE(a1);
    if ( (v5 & 1) != 0 && (v5 & 0x42) == 0 && (v5 & 0x800) != 0 )
      MiWriteValidPteNewProtection(a1, v5 | 0x62);
    MiUnlockPageTableInternal(AnyMultiplexedVm, v4);
    LOBYTE(v6) = v7;
    return MiUnlockWorkingSetShared(AnyMultiplexedVm, v6);
  }
  return result;
}
