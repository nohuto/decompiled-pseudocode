/*
 * XREFs of MmAllocateMappingAddress @ 0x1406FCC20
 * Callers:
 *     SmFpPreAllocate @ 0x1403C5A04 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F3F8C (HvlpInitializeHvCrashdump.c)
 *     PspInitPhase0 @ 0x140A3A054 (PspInitPhase0.c)
 *     HalpDmaAllocateReservedMapping @ 0x140A5D54C (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140A5D5A8 (HalpDmaAllocateEmergencyResources.c)
 * Callees:
 *     MmAllocateMappingAddressEx @ 0x1406FCC40 (MmAllocateMappingAddressEx.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  return (PVOID)MmAllocateMappingAddressEx(NumberOfBytes, PoolTag, 0LL);
}
