/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x14025B210
 * Callers:
 *     MmGetImageInformation @ 0x1405CF098 (MmGetImageInformation.c)
 *     MiLockVadRange @ 0x14061DC20 (MiLockVadRange.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14061E590 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmQueryVirtualMemory @ 0x14061E930 (MmQueryVirtualMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1406EB24C (MmCleanProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x1407120DC (MiCfgInitializeProcess.c)
 *     MiHotPatchProcess @ 0x1408CA658 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x1408D0F40 (MmCheckForSafeExecution.c)
 *     MmIsFileMapped @ 0x1408D1020 (MmIsFileMapped.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4CE8 (MiAllocateUserPhysicalPages.c)
 *     MiCreateLargePageVad @ 0x1408D9F64 (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x1408DA310 (MiFreeLargePageView.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  result = ExAcquirePushLockSharedEx(a2 + 1224, 0LL);
  *(_BYTE *)(a1 + 1304) |= 2u;
  return result;
}
