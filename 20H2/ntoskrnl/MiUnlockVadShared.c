/*
 * XREFs of MiUnlockVadShared @ 0x140338F00
 * Callers:
 *     MiObtainReferencedVadEx @ 0x14027CA80 (MiObtainReferencedVadEx.c)
 *     MiScrubProcessLargePages @ 0x140562A24 (MiScrubProcessLargePages.c)
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     MiReferenceCfgVad @ 0x1406F006C (MiReferenceCfgVad.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406F0160 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     NtAreMappedFilesTheSame @ 0x1406F0FC0 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x1408CCB74 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x1408CCE98 (MiHotPatchProcess.c)
 *     MmIsFileMapped @ 0x1408D3860 (MmIsFileMapped.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MiUnlockVadShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx

  *(_BYTE *)(a1 + 1305) &= ~0x40u;
  v2 = a2 + 40;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 40), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 40));
  KeAbPostRelease(v2);
  return KiLeaveGuardedRegionUnsafe(a1);
}
