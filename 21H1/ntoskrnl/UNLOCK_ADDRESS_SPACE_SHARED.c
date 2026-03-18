/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x140264380
 * Callers:
 *     MiObtainReferencedVadEx @ 0x140267570 (MiObtainReferencedVadEx.c)
 *     MiObtainReferencedSecureVad @ 0x1402A4A40 (MiObtainReferencedSecureVad.c)
 *     MmOutSwapWorkingSet @ 0x1402CC124 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x1402D10EC (MmOutSwapVirtualAddresses.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14030C194 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiScrubProcessLargePages @ 0x14055EA04 (MiScrubProcessLargePages.c)
 *     MmGetImageInformation @ 0x1405C6F2C (MmGetImageInformation.c)
 *     MmCleanProcessAddressSpace @ 0x1406339B8 (MmCleanProcessAddressSpace.c)
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140635840 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiUnlockVadRange @ 0x14063C4D4 (MiUnlockVadRange.c)
 *     MiCfgInitializeProcess @ 0x14064EC3C (MiCfgInitializeProcess.c)
 *     MiHotPatchProcess @ 0x1408C5D08 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x1408CC5F0 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x1408CC6D0 (MmIsFileMapped.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D0398 (MiAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1408D5614 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1408D59C0 (MiFreeLargePageView.c)
 * Callees:
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

char __fastcall UNLOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  char result; // al
  __int64 v5; // rcx

  *(_BYTE *)(a1 + 1304) &= ~2u;
  v2 = a2 + 1224;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1224), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 1224);
  result = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    return KiCheckForKernelApcDelivery(v5);
  return result;
}
