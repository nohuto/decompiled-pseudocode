/*
 * XREFs of MmAllocateMappingAddress @ 0x1406D9530
 * Callers:
 *     SmFpPreAllocate @ 0x1403C4A94 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F393C (HvlpInitializeHvCrashdump.c)
 *     PspInitPhase0 @ 0x140A3A1E4 (PspInitPhase0.c)
 *     HalpDmaAllocateReservedMapping @ 0x140A5E4AC (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140A5E508 (HalpDmaAllocateEmergencyResources.c)
 * Callees:
 *     MmAllocateMappingAddressEx @ 0x1406D9550 (MmAllocateMappingAddressEx.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  return (PVOID)MmAllocateMappingAddressEx(NumberOfBytes, PoolTag, 0LL);
}
