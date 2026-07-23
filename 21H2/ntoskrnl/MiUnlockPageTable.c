/*
 * XREFs of MiUnlockPageTable @ 0x1403B6DD0
 * Callers:
 *     NtLockVirtualMemory @ 0x14025E000 (NtLockVirtualMemory.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiCopyToUserVa @ 0x140319288 (MiCopyToUserVa.c)
 *     NtGetWriteWatch @ 0x1403373A0 (NtGetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x140338C80 (NtUnlockVirtualMemory.c)
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiMapUserLargePages @ 0x14055E970 (MiMapUserLargePages.c)
 *     MiInitializeDynamicBitmap @ 0x140786A9C (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x1407A1670 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiUnlockPageTable(__int64 a1, unsigned __int64 a2)
{
  MiUnlockPageTableInternal(a1, a2);
}
