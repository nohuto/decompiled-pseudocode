/*
 * XREFs of MiFaultInPagedPool @ 0x1402019FC
 * Callers:
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 *     MiProtectPrivateMemory @ 0x14032EA60 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 */

char __fastcall MiFaultInPagedPool(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rbp
  __int64 v3; // rsi
  __int64 AnyMultiplexedVm; // rbx
  char v5; // r14
  __int16 v6; // ax
  __int64 v7; // rdx

  v2 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2LL);
  v5 = MiLockWorkingSetShared(AnyMultiplexedVm);
  MiLockPageTableInternal(AnyMultiplexedVm, v3, 0LL);
  v6 = MI_READ_PTE_LOCK_FREE(v2);
  if ( (v6 & 1) != 0 && (v6 & 0x200) != 0 )
    MiCopyOnWrite(BugCheckParameter2);
  MiUnlockPageTableInternal(AnyMultiplexedVm, v3);
  LOBYTE(v7) = v5;
  MiUnlockWorkingSetShared(AnyMultiplexedVm, v7);
  return *(_BYTE *)BugCheckParameter2;
}
