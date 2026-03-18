/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x14020B330
 * Callers:
 *     MiObtainReferencedVadEx @ 0x14020E520 (MiObtainReferencedVadEx.c)
 *     MiObtainReferencedSecureVad @ 0x14024BA10 (MiObtainReferencedSecureVad.c)
 *     MmOutSwapWorkingSet @ 0x14030DD64 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x1403100C0 (MmOutSwapVirtualAddresses.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140311308 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiScrubProcessLargePages @ 0x14055F054 (MiScrubProcessLargePages.c)
 *     MmGetImageInformation @ 0x1405C7D54 (MmGetImageInformation.c)
 *     MmCleanProcessAddressSpace @ 0x1405FE978 (MmCleanProcessAddressSpace.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140600800 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiUnlockVadRange @ 0x140607384 (MiUnlockVadRange.c)
 *     MiCfgInitializeProcess @ 0x1406B4E54 (MiCfgInitializeProcess.c)
 *     MiHotPatchProcess @ 0x1408C7058 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x1408CD940 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x1408CDA20 (MmIsFileMapped.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D16E8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1408D6964 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1408D6D10 (MiFreeLargePageView.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 */

char __fastcall UNLOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  char result; // al

  *(_BYTE *)(a1 + 1304) &= ~2u;
  v2 = a2 + 1224;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1224), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 1224);
  result = KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF && *(_QWORD *)(a1 + 152) != a1 + 152 )
    return KiCheckForKernelApcDelivery();
  return result;
}
