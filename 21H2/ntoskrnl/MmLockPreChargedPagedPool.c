/*
 * XREFs of MmLockPreChargedPagedPool @ 0x140808190
 * Callers:
 *     HalpMcUpdateLock @ 0x1403989A4 (HalpMcUpdateLock.c)
 *     MiCreatePagingFileMap @ 0x1406F3A44 (MiCreatePagingFileMap.c)
 *     PopAllocateHiberContext @ 0x140802068 (PopAllocateHiberContext.c)
 * Callees:
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 */

__int64 __fastcall MmLockPreChargedPagedPool(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = MiGetPteAddress(a1);
  return MiLockCode(0LL, PteAddress, PteAddress + 8 * ((((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1), 1);
}
