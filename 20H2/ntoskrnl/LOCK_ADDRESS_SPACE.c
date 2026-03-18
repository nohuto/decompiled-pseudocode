/*
 * XREFs of LOCK_ADDRESS_SPACE @ 0x14022C3E0
 * Callers:
 *     MiDeleteEmptyPageTables @ 0x1403F3750 (MiDeleteEmptyPageTables.c)
 *     MiMapViewOfDataSection @ 0x140622CE0 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x1406242E8 (MmCleanProcessAddressSpace.c)
 *     MiReserveUserMemory @ 0x140625E30 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 *     MiLockVadRange @ 0x14062E080 (MiLockVadRange.c)
 *     MiFindNextEnclaveBoundary @ 0x14067A340 (MiFindNextEnclaveBoundary.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140686200 (MiAllocateFromSubAllocatedRegion.c)
 *     MiInitializeVadBitMap @ 0x1406EED74 (MiInitializeVadBitMap.c)
 *     MiMapLockedPagesInUserSpace @ 0x140767510 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407BE808 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x1408D4698 (MiAllocateEnclaveVad.c)
 *     MiResizeAweBitMap @ 0x1408D8D24 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x1408D9040 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall LOCK_ADDRESS_SPACE(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 1224, 0LL);
  *(_BYTE *)(a1 + 1304) |= 1u;
}
