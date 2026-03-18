/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x1402A4560
 * Callers:
 *     MmGetImageInformation @ 0x1405C6F2C (MmGetImageInformation.c)
 *     MmCleanProcessAddressSpace @ 0x1406339B8 (MmCleanProcessAddressSpace.c)
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140635840 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiLockVadRange @ 0x140637338 (MiLockVadRange.c)
 *     MiCfgInitializeProcess @ 0x14064EC3C (MiCfgInitializeProcess.c)
 *     MiHotPatchProcess @ 0x1408C5D08 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x1408CC5F0 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x1408CC6D0 (MmIsFileMapped.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D0398 (MiAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1408D5614 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1408D59C0 (MiFreeLargePageView.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 1224, 0LL);
  *(_BYTE *)(a1 + 1304) |= 2u;
  return result;
}
