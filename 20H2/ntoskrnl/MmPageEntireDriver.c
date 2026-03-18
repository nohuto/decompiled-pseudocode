/*
 * XREFs of MmPageEntireDriver @ 0x1406B94A0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140295510 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLookupDataTableEntry @ 0x14030CDEC (MiLookupDataTableEntry.c)
 *     MiSetPagingOfDriver @ 0x14030CEC4 (MiSetPagingOfDriver.c)
 *     KeFlushQueuedDpcs @ 0x14030D5C0 (KeFlushQueuedDpcs.c)
 *     MiCancelPhase0Locking @ 0x1406B9644 (MiCancelPhase0Locking.c)
 */

PVOID __stdcall MmPageEntireDriver(PVOID AddressWithinSection)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  void *v4; // rbp
  unsigned __int64 PteAddress; // rdi
  unsigned __int64 v6; // rbx

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return 0LL;
  v2 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 1);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  v4 = *(void **)(v2 + 48);
  if ( (dword_140CFB174 & 1) == 0 && (unsigned int)MiGetSystemRegionType((unsigned __int64)AddressWithinSection) != 1 )
  {
    KeFlushQueuedDpcs();
    PteAddress = MiGetPteAddress((unsigned __int64)v4);
    v6 = PteAddress + 8 * ((unsigned __int64)*(unsigned int *)(v3 + 64) >> 12);
    MiCancelPhase0Locking(v3);
    MiSetPagingOfDriver(v3, PteAddress, v6 - 8);
  }
  return v4;
}
