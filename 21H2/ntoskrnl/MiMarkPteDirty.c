/*
 * XREFs of MiMarkPteDirty @ 0x1402FA54C
 * Callers:
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiWriteValidPteNewProtection @ 0x14030FA00 (MiWriteValidPteNewProtection.c)
 *     MiLockWorkingSetOptimal @ 0x14030FC94 (MiLockWorkingSetOptimal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMarkPteDirty(__int64 a1)
{
  __int64 result; // rax
  __int64 AnyMultiplexedVm; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  result = MI_READ_PTE_LOCK_FREE(a1);
  if ( (result & 0x42) == 0 && (result & 0x800) != 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0LL);
    v4 = MiLockWorkingSetOptimal(AnyMultiplexedVm, a1, &v6);
    v5 = MI_READ_PTE_LOCK_FREE(a1);
    if ( (v5 & 1) != 0 && (v5 & 0x42) == 0 && (v5 & 0x800) != 0 )
      MiWriteValidPteNewProtection(a1, v5 | 0x62);
    MiUnlockPageTableInternal(AnyMultiplexedVm, v4);
    return MiUnlockWorkingSetShared(AnyMultiplexedVm, v6);
  }
  return result;
}
