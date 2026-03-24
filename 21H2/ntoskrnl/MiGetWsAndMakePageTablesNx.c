/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x1403CCBD0
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x1407D0EC4 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     KeFlushTb @ 0x140230120 (KeFlushTb.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPerformSafePdeWrite @ 0x14038179C (MiPerformSafePdeWrite.c)
 */

__int64 __fastcall MiGetWsAndMakePageTablesNx(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 *v4; // rsi
  unsigned __int8 v5; // bl
  signed __int64 v6; // rax
  __int64 v7; // rcx

  v4 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v5 = MiLockWorkingSetShared((__int64)v4, a2, a3, a4);
  MiLockPageTableInternal((__int64)v4, 0xFFFFF6FB7DBEDF68uLL, 0LL);
  v6 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
  MiPerformSafePdeWrite(v7, 0xFFFFF6FB7DBEDF68uLL, v6, 2);
  MiUnlockPageTableInternal((__int64)v4, 0xFFFFF6FB7DBEDF68uLL);
  MiUnlockWorkingSetShared((__int64)v4, v5);
  return KeFlushTb(1u, 0);
}
