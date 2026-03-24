/*
 * XREFs of MmAllocateMappingAddress @ 0x1406AE480
 * Callers:
 *     SmFpPreAllocate @ 0x1403C8F94 (SmFpPreAllocate.c)
 *     HvlpInitializeHvCrashdump @ 0x1404F939C (HvlpInitializeHvCrashdump.c)
 *     PspInitPhase0 @ 0x140A3DC68 (PspInitPhase0.c)
 *     HalpDmaAllocateReservedMapping @ 0x140A65ECC (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140A65F28 (HalpDmaAllocateEmergencyResources.c)
 * Callees:
 *     MmAllocateMappingAddressEx @ 0x1406AE4A0 (MmAllocateMappingAddressEx.c)
 */

PVOID __stdcall MmAllocateMappingAddress(SIZE_T NumberOfBytes, ULONG PoolTag)
{
  return (PVOID)MmAllocateMappingAddressEx(NumberOfBytes, PoolTag, 0LL);
}
