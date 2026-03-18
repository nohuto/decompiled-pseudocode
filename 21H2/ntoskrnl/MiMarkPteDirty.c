/*
 * XREFs of MiMarkPteDirty @ 0x14023A12C
 * Callers:
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetOptimal @ 0x1402D0490 (MiLockWorkingSetOptimal.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 */

__int64 __fastcall MiMarkPteDirty(__int64 *a1)
{
  __int64 result; // rax
  __int64 AnyMultiplexedVm; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  result = *a1;
  v8 = 0;
  if ( (result & 0x42) == 0 && (result & 0x800) != 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0LL);
    v4 = MiLockWorkingSetOptimal(AnyMultiplexedVm, a1, &v8);
    v5 = *a1;
    v6 = v4;
    if ( (*a1 & 1) != 0 && (v5 & 0x42) == 0 && (v5 & 0x800) != 0 )
      MiWriteValidPteNewProtection(a1, v5 | 0x62);
    MiUnlockPageTableInternal(AnyMultiplexedVm, v6);
    LOBYTE(v7) = v8;
    return MiUnlockWorkingSetShared(AnyMultiplexedVm, v7);
  }
  return result;
}
