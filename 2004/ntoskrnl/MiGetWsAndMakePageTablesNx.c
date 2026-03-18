/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x1403C95C0
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x1407BE384 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     KeFlushTb @ 0x14021E550 (KeFlushTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiPerformSafePdeWrite @ 0x14037F36C (MiPerformSafePdeWrite.c)
 */

__int64 MiGetWsAndMakePageTablesNx()
{
  unsigned __int64 *v0; // rsi
  unsigned __int8 v1; // bl
  signed __int64 v2; // rax
  __int64 v3; // rcx

  v0 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v1 = MiLockWorkingSetShared((__int64)v0);
  MiLockPageTableInternal((__int64)v0, 0xFFFFF6FB7DBEDF68uLL, 0LL);
  v2 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
  MiPerformSafePdeWrite(v3, 0xFFFFF6FB7DBEDF68uLL, v2, 2);
  MiUnlockPageTableInternal((__int64)v0, 0xFFFFF6FB7DBEDF68uLL);
  MiUnlockWorkingSetShared((__int64)v0, v1);
  return KeFlushTb(1u, 0);
}
