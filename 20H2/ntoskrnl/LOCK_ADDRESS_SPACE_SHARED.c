/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x14022C03C
 * Callers:
 *     MmGetImageInformation @ 0x1405CD098 (MmGetImageInformation.c)
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1406242E8 (MmCleanProcessAddressSpace.c)
 *     MiLockVadRange @ 0x14062E080 (MiLockVadRange.c)
 *     MiCfgInitializeProcess @ 0x1406EF6BC (MiCfgInitializeProcess.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406F0160 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiHotPatchProcess @ 0x1408CCE98 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x1408D3780 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x1408D3860 (MmIsFileMapped.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D7528 (MiAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1408DC7A4 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1408DCB50 (MiFreeLargePageView.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 1224, 0LL);
  *(_BYTE *)(a1 + 1304) |= 2u;
  return result;
}
