/*
 * XREFs of MiUnlockPageTableRange @ 0x140395864
 * Callers:
 *     MiLockPageTableRange @ 0x140386DC4 (MiLockPageTableRange.c)
 *     MmStoreFreeVirtualMemory @ 0x1408042A4 (MmStoreFreeVirtualMemory.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTableCharges @ 0x1402E5B0C (MiUnlockPageTableCharges.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiUnlockPageTableRange(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v3; // rdi
  unsigned __int64 v4; // rsi
  unsigned __int8 v5; // bp
  __int64 v6; // r9
  unsigned __int64 i; // rbx
  unsigned __int64 v8; // rax

  v3 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v4 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v5 = MiLockWorkingSetShared((__int64)v3);
  for ( i = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL; i <= v4; i += 8LL )
  {
    MiLockPageTableInternal((__int64)v3, i, 0LL, v6);
    v8 = MI_READ_PTE_LOCK_FREE(i);
    MiUnlockPageTableCharges(48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2);
    MiUnlockPageTableInternal((__int64)v3, i);
  }
  return MiUnlockWorkingSetShared((__int64)v3, v5);
}
