/*
 * XREFs of MiUnlockPageTable @ 0x1403B54F0
 * Callers:
 *     MiCopyToUserVa @ 0x140234540 (MiCopyToUserVa.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     NtGetWriteWatch @ 0x1402AFA60 (NtGetWriteWatch.c)
 *     NtUnlockVirtualMemory @ 0x1402B1340 (NtUnlockVirtualMemory.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MiSharePages @ 0x1403680B0 (MiSharePages.c)
 *     MiMapUserLargePages @ 0x14055CC60 (MiMapUserLargePages.c)
 *     MiInitializeDynamicBitmap @ 0x140782AFC (MiInitializeDynamicBitmap.c)
 *     MiProtectLargeKernelHalRange @ 0x140796F50 (MiProtectLargeKernelHalRange.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 */

void __fastcall MiUnlockPageTable(__int64 a1, unsigned __int64 a2)
{
  MiUnlockPageTableInternal(a1, a2);
}
