/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x14021E7C0
 * Callers:
 *     MiObtainReferencedSecureVad @ 0x14022EC10 (MiObtainReferencedSecureVad.c)
 *     MiObtainReferencedVadEx @ 0x14027CA80 (MiObtainReferencedVadEx.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14031A918 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x1403394F4 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x14033AC68 (MmOutSwapVirtualAddresses.c)
 *     MiScrubProcessLargePages @ 0x140562A24 (MiScrubProcessLargePages.c)
 *     MmGetImageInformation @ 0x1405CD098 (MmGetImageInformation.c)
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1406242E8 (MmCleanProcessAddressSpace.c)
 *     MiUnlockVadRange @ 0x14062DF70 (MiUnlockVadRange.c)
 *     MiCfgInitializeProcess @ 0x1406EF6BC (MiCfgInitializeProcess.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406F0160 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiHotPatchProcess @ 0x1408CCE98 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x1408D3780 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x1408D3860 (MmIsFileMapped.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D7528 (MiAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1408DC7A4 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1408DCB50 (MiFreeLargePageView.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall UNLOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 result; // rax

  *(_BYTE *)(a1 + 1304) &= ~2u;
  v2 = a2 + 1224;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1224), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 1224);
  result = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    return KiCheckForKernelApcDelivery();
  return result;
}
