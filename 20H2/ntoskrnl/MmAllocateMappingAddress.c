/*
 * XREFs of MmAllocateMappingAddress @ 0x1406CF8C0
 * Callers:
 *     SmFpPreAllocate @ 0x1403C83F4 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F77FC (HvlpInitializeHvCrashdump.c)
 *     PspInitPhase0 @ 0x140A400E8 (PspInitPhase0.c)
 *     HalpDmaAllocateReservedMapping @ 0x140A648AC (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140A64908 (HalpDmaAllocateEmergencyResources.c)
 * Callees:
 *     MmAllocateMappingAddressEx @ 0x1406CF8E0 (MmAllocateMappingAddressEx.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  return (PVOID)MmAllocateMappingAddressEx(NumberOfBytes, PoolTag, 0LL);
}
