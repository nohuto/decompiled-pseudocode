/*
 * XREFs of MmAllocateMappingAddress @ 0x14060CD20
 * Callers:
 *     SmFpPreAllocate @ 0x1403C9134 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F931C (HvlpInitializeHvCrashdump.c)
 *     PspInitPhase0 @ 0x140A3EC68 (PspInitPhase0.c)
 *     HalpDmaAllocateReservedMapping @ 0x140A66ECC (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140A66F28 (HalpDmaAllocateEmergencyResources.c)
 * Callees:
 *     MmAllocateMappingAddressEx @ 0x14060CD40 (MmAllocateMappingAddressEx.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  return (PVOID)MmAllocateMappingAddressEx(NumberOfBytes, PoolTag, 0LL);
}
