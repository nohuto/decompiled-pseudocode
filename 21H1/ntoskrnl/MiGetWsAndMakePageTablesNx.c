/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x1403C87B0
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x1407BB214 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     KeFlushTb @ 0x1402775A0 (KeFlushTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiPerformSafePdeWrite @ 0x14037E97C (MiPerformSafePdeWrite.c)
 */

__int64 MiGetWsAndMakePageTablesNx()
{
  unsigned __int64 *v0; // rsi
  unsigned __int8 v1; // bl
  signed __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8

  v0 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v1 = MiLockWorkingSetShared((__int64)v0);
  MiLockPageTableInternal((__int64)v0, 0xFFFFF6FB7DBEDF68uLL, 0LL);
  v2 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
  MiPerformSafePdeWrite(v3, 0xFFFFF6FB7DBEDF68uLL, v2, 2);
  MiUnlockPageTableInternal((__int64)v0, 0xFFFFF6FB7DBEDF68uLL, v4);
  MiUnlockWorkingSetShared((__int64)v0, v1);
  return KeFlushTb(1u, 0);
}
