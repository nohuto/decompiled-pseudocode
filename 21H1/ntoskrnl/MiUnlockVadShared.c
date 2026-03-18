/*
 * XREFs of MiUnlockVadShared @ 0x1402A5470
 * Callers:
 *     MiObtainReferencedVadEx @ 0x140267570 (MiObtainReferencedVadEx.c)
 *     MiScrubProcessLargePages @ 0x14055EA04 (MiScrubProcessLargePages.c)
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140635840 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiReferenceCfgVad @ 0x1406511E8 (MiReferenceCfgVad.c)
 *     NtAreMappedFilesTheSame @ 0x1406E74A0 (NtAreMappedFilesTheSame.c)
 *     MiHotPatchImage @ 0x1408C59E4 (MiHotPatchImage.c)
 *     MiHotPatchProcess @ 0x1408C5D08 (MiHotPatchProcess.c)
 *     MmIsFileMapped @ 0x1408CC6D0 (MmIsFileMapped.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall MiUnlockVadShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  *(_BYTE *)(a1 + 1305) &= ~0x40u;
  v2 = a2 + 40;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 40), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 40);
  KeAbPostRelease(v2);
  return KiLeaveGuardedRegionUnsafe(a1, v4, v5, v6);
}
