/*
 * XREFs of MmAllocateMappingAddress @ 0x1407F9D30
 * Callers:
 *     SmFpPreAllocate @ 0x1403D735C (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x14054B14C (HvlpInitializeHvCrashdump.c)
 *     PspInitPhase0 @ 0x140AFD7A4 (PspInitPhase0.c)
 *     HalpDmaAllocateReservedMapping @ 0x140B1DE58 (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140B1DEB4 (HalpDmaAllocateEmergencyResources.c)
 * Callees:
 *     MmAllocateMappingAddressEx @ 0x1407F9D50 (MmAllocateMappingAddressEx.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  return (PVOID)MmAllocateMappingAddressEx(NumberOfBytes, PoolTag, 0LL);
}
