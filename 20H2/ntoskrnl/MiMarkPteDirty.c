/*
 * XREFs of MiMarkPteDirty @ 0x14024F530
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetOptimal @ 0x14029C0FC (MiLockWorkingSetOptimal.c)
 *     MiWriteValidPteNewProtection @ 0x14029F0A0 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiMarkPteDirty(__int64 a1)
{
  __int64 result; // rax
  char *AnyMultiplexedVm; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  result = MI_READ_PTE_LOCK_FREE(a1);
  if ( (result & 0x42) == 0 && (result & 0x800) != 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
    MiLockWorkingSetOptimal(AnyMultiplexedVm, a1, &v6);
    v4 = MI_READ_PTE_LOCK_FREE(a1);
    if ( (v4 & 1) != 0 && (v4 & 0x42) == 0 && (v4 & 0x800) != 0 )
      MiWriteValidPteNewProtection(a1, v4 | 0x62);
    MiUnlockPageTableInternal(AnyMultiplexedVm);
    LOBYTE(v5) = v6;
    return MiUnlockWorkingSetShared(AnyMultiplexedVm, v5);
  }
  return result;
}
