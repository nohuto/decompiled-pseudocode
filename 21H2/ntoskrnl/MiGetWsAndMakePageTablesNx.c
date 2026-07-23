/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x1403CCD40
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x1407D1034 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     KeFlushTb @ 0x1402D4970 (KeFlushTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPerformSafePdeWrite @ 0x1403812EC (MiPerformSafePdeWrite.c)
 */

__int64 __fastcall MiGetWsAndMakePageTablesNx(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 *v4; // rsi
  unsigned __int8 v5; // bl
  signed __int64 v6; // rax
  __int64 v7; // rcx

  v4 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v5 = MiLockWorkingSetShared((__int64)v4, a2, a3, a4);
  MiLockPageTableInternal((__int64)v4, 0xFFFFF6FB7DBEDF68uLL, 0);
  v6 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
  MiPerformSafePdeWrite(v7, 0xFFFFF6FB7DBEDF68uLL, v6, 2);
  MiUnlockPageTableInternal((__int64)v4, 0xFFFFF6FB7DBEDF68uLL);
  MiUnlockWorkingSetShared((__int64)v4, v5);
  return KeFlushTb(1u, 0);
}
