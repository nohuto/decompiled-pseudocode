/*
 * XREFs of MiMarkPteDirty @ 0x1402BD9E0
 * Callers:
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiWriteValidPteNewProtection @ 0x1402BC370 (MiWriteValidPteNewProtection.c)
 *     MiLockWorkingSetOptimal @ 0x1402BC3DC (MiLockWorkingSetOptimal.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiMarkPteDirty(unsigned __int64 a1)
{
  __int64 result; // rax
  char *AnyMultiplexedVm; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  result = MI_READ_PTE_LOCK_FREE(a1);
  if ( (result & 0x42) == 0 && (result & 0x800) != 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
    v4 = MiLockWorkingSetOptimal((__int64)AnyMultiplexedVm, a1, &v6);
    v5 = MI_READ_PTE_LOCK_FREE(a1);
    if ( (v5 & 1) != 0 && (v5 & 0x42) == 0 && (v5 & 0x800) != 0 )
      MiWriteValidPteNewProtection(a1, v5 | 0x62);
    MiUnlockPageTableInternal(AnyMultiplexedVm, v4);
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v6);
  }
  return result;
}
