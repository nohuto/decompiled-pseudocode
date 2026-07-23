/*
 * XREFs of MiUnlockVadShared @ 0x14027C67C
 * Callers:
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     MiScrubProcessLargePages @ 0x140564734 (MiScrubProcessLargePages.c)
 *     NtAreMappedFilesTheSame @ 0x14061C730 (NtAreMappedFilesTheSame.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140688200 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 *     MiReferenceCfgVad @ 0x1406C10DC (MiReferenceCfgVad.c)
 *     MiHotPatchImage @ 0x1408CA494 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x1408CA7B8 (MiHotPatchProcess.c)
 *     MmIsFileMapped @ 0x1408D1180 (MmIsFileMapped.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
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
