/*
 * XREFs of LOCK_ADDRESS_SPACE @ 0x1402A195C
 * Callers:
 *     MiDeleteEmptyPageTables @ 0x1403EDF80 (MiDeleteEmptyPageTables.c)
 *     MiFindNextEnclaveBoundary @ 0x1406207C0 (MiFindNextEnclaveBoundary.c)
 *     MiMapViewOfDataSection @ 0x140632720 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x1406339B8 (MmCleanProcessAddressSpace.c)
 *     MiReserveUserMemory @ 0x1406343A0 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1406362B0 (MiMapViewOfImageSection.c)
 *     MiLockVadRange @ 0x140637338 (MiLockVadRange.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140639628 (MiAllocateFromSubAllocatedRegion.c)
 *     MiInitializeVadBitMap @ 0x14064F13C (MiInitializeVadBitMap.c)
 *     MiMapLockedPagesInUserSpace @ 0x140756C50 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407AD768 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x1408CD508 (MiAllocateEnclaveVad.c)
 *     MiResizeAweBitMap @ 0x1408D1B94 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x1408D1EB0 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall LOCK_ADDRESS_SPACE(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 1224, 0LL);
  *(_BYTE *)(a1 + 1304) |= 1u;
}
