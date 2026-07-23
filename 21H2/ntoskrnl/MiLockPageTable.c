/*
 * XREFs of MiLockPageTable @ 0x140381CBC
 * Callers:
 *     NtLockVirtualMemory @ 0x14025E000 (NtLockVirtualMemory.c)
 *     MiInitializeDynamicBitmap @ 0x140786A9C (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A1670 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 */

__int64 __fastcall MiLockPageTable(__int64 a1, unsigned __int64 a2)
{
  return MiLockPageTableInternal(a1, a2, 0);
}
