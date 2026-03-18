/*
 * XREFs of MiUpdateVadStartVpn @ 0x14030B420
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x140693498 (MiMapLockedPagesInUserSpace.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x1406AC778 (MiFindEmptyAddressRangeDownTree.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406BF9AC (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateVad @ 0x1406C3FB4 (MiAllocateVad.c)
 *     MiUnmapViewOfSection @ 0x1406F8D30 (MiUnmapViewOfSection.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x140852834 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x140978F40 (MiAllocateEnclaveVad.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUpdateVadStartVpn(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 24) = a2;
  *(_BYTE *)(a1 + 32) = BYTE4(a2);
}
