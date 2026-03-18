/*
 * XREFs of MiUnlockVadShared @ 0x14024C440
 * Callers:
 *     MiObtainReferencedVadEx @ 0x14020E520 (MiObtainReferencedVadEx.c)
 *     MiScrubProcessLargePages @ 0x14055F054 (MiScrubProcessLargePages.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140600800 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiReferenceCfgVad @ 0x1406D5C14 (MiReferenceCfgVad.c)
 *     NtAreMappedFilesTheSame @ 0x14070B3D0 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x1408C6D34 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x1408C7058 (MiHotPatchProcess.c)
 *     MmIsFileMapped @ 0x1408CDA20 (MmIsFileMapped.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MiUnlockVadShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx

  *(_BYTE *)(a1 + 1305) &= ~0x40u;
  v2 = a2 + 40;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 40), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 40);
  KeAbPostRelease(v2);
  return KiLeaveGuardedRegionUnsafe(a1);
}
