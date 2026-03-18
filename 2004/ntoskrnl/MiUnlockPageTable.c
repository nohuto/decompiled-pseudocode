/*
 * XREFs of MiUnlockPageTable @ 0x1403B2B80
 * Callers:
 *     NtGetWriteWatch @ 0x140236CC0 (NtGetWriteWatch.c)
 *     NtLockVirtualMemory @ 0x14024CD50 (NtLockVirtualMemory.c)
 *     MiCopyToUserVa @ 0x1402548D0 (MiCopyToUserVa.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     NtUnlockVirtualMemory @ 0x1402564F0 (NtUnlockVirtualMemory.c)
 *     MiSharePages @ 0x1403660D0 (MiSharePages.c)
 *     MiMapUserLargePages @ 0x140559290 (MiMapUserLargePages.c)
 *     MiInitializeDynamicBitmap @ 0x1407744FC (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x140789240 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiUnlockPageTable(__int64 a1, unsigned __int64 a2)
{
  MiUnlockPageTableInternal(a1, a2);
}
