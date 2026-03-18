/*
 * XREFs of MiUnlockPageTable @ 0x1403ACF00
 * Callers:
 *     NtGetWriteWatch @ 0x14028FD10 (NtGetWriteWatch.c)
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     MiCopyToUserVa @ 0x1402AD900 (MiCopyToUserVa.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     NtUnlockVirtualMemory @ 0x1402AF520 (NtUnlockVirtualMemory.c)
 *     MiSharePages @ 0x140365710 (MiSharePages.c)
 *     MiMapUserLargePages @ 0x140558C40 (MiMapUserLargePages.c)
 *     MiInitializeDynamicBitmap @ 0x1407720EC (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x1407838B0 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiUnlockPageTable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  MiUnlockPageTableInternal(a1, a2, a3);
}
