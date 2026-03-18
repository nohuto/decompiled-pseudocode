/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x1403CC200
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x1407CCC14 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeFlushTb @ 0x1402EA180 (KeFlushTb.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiPerformSafePdeWrite @ 0x14038109C (MiPerformSafePdeWrite.c)
 */

char MiGetWsAndMakePageTablesNx()
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
