/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x14030EB30
 * Callers:
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406F71A0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiLockVadRange @ 0x1406F7D78 (MiLockVadRange.c)
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 *     MiCommitInitialVadMetadataBits @ 0x140755920 (MiCommitInitialVadMetadataBits.c)
 *     MmGetImageInformation @ 0x140759008 (MmGetImageInformation.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     MiHotPatchProcess @ 0x1409736EC (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x140977FF8 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x1409780D4 (MmIsFileMapped.c)
 *     MiAllocateUserPhysicalPages @ 0x14097BD88 (MiAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x140982DE4 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x140983198 (MiFreeLargePageView.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 1224, 0LL);
  *(_BYTE *)(a1 + 1384) |= 2u;
  return result;
}
