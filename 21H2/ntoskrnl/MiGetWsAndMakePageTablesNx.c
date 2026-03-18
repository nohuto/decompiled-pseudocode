/*
 * XREFs of MiGetWsAndMakePageTablesNx @ 0x1403DC188
 * Callers:
 *     MmInitializeHandBuiltProcess2 @ 0x140860DAC (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiPerformSafePdeWrite @ 0x14025D6C0 (MiPerformSafePdeWrite.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     KeFlushTb @ 0x1402F391C (KeFlushTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 */

__int64 MiGetWsAndMakePageTablesNx()
{
  unsigned __int64 *v0; // rsi
  unsigned __int8 v1; // bl
  __int64 v2; // r9
  signed __int64 v3; // rax
  __int64 v4; // rcx

  v0 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v1 = MiLockWorkingSetShared((__int64)v0);
  MiLockPageTableInternal((__int64)v0, 0xFFFFF6FB7DBEDF68uLL, 0LL, v2);
  v3 = MI_READ_PTE_LOCK_FREE(0xFFFFF6FB7DBEDF68uLL);
  MiPerformSafePdeWrite(v4, (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL, v3, 2);
  MiUnlockPageTableInternal((__int64)v0, 0xFFFFF6FB7DBEDF68uLL);
  MiUnlockWorkingSetShared((__int64)v0, v1);
  return KeFlushTb(1u, 0);
}
