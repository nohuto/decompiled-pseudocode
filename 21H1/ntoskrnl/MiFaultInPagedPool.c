/*
 * XREFs of MiFaultInPagedPool @ 0x1405275F4
 * Callers:
 *     MiQueryAddressState @ 0x14021E510 (MiQueryAddressState.c)
 *     MiProtectPrivateMemory @ 0x1402ADD80 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 */

char __fastcall MiFaultInPagedPool(unsigned __int64 a1)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // rsi
  char *AnyMultiplexedVm; // rbx
  unsigned __int8 v5; // r14
  __int16 v6; // ax
  __int64 v7; // r8

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v5 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  MiLockPageTableInternal((__int64)AnyMultiplexedVm, v3, 0LL);
  v6 = MI_READ_PTE_LOCK_FREE(v2);
  if ( (v6 & 1) != 0 && (v6 & 0x200) != 0 )
    MiCopyOnWrite(a1, (ULONG_PTR *)v2, 0xFFFFFFFFFFFFFFFFuLL, 4);
  MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v3, v7);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v5);
  return *(_BYTE *)a1;
}
