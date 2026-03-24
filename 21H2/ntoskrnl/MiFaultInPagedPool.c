/*
 * XREFs of MiFaultInPagedPool @ 0x14052D114
 * Callers:
 *     MiProtectPrivateMemory @ 0x14030DA00 (MiProtectPrivateMemory.c)
 *     MiQueryAddressState @ 0x14032F730 (MiQueryAddressState.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 */

char __fastcall MiFaultInPagedPool(ULONG_PTR a1)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rsi
  char *AnyMultiplexedVm; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // r9
  unsigned __int8 v8; // r14
  __int16 v9; // ax

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v8 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v5, v6, v7);
  MiLockPageTableInternal((__int64)AnyMultiplexedVm, v3, 0LL);
  v9 = MI_READ_PTE_LOCK_FREE(v2);
  if ( (v9 & 1) != 0 && (v9 & 0x200) != 0 )
    MiCopyOnWrite(a1, (ULONG_PTR *)v2, -1LL, 4);
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v8);
  return *(_BYTE *)a1;
}
