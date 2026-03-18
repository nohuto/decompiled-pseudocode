/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x14024B530
 * Callers:
 *     MmGetImageInformation @ 0x1405C7D54 (MmGetImageInformation.c)
 *     MmCleanProcessAddressSpace @ 0x1405FE978 (MmCleanProcessAddressSpace.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140600800 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiLockVadRange @ 0x1406022F8 (MiLockVadRange.c)
 *     MiCfgInitializeProcess @ 0x1406B4E54 (MiCfgInitializeProcess.c)
 *     MiHotPatchProcess @ 0x1408C7058 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x1408CD940 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x1408CDA20 (MmIsFileMapped.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D16E8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1408D6964 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1408D6D10 (MiFreeLargePageView.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 1224, 0LL);
  *(_BYTE *)(a1 + 1304) |= 2u;
  return result;
}
