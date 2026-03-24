/*
 * XREFs of MmPageEntireDriver @ 0x1406D0C20
 * Callers:
 *     <none>
 * Callees:
 *     MiSetPagingOfDriver @ 0x14026DB1C (MiSetPagingOfDriver.c)
 *     MiLookupDataTableEntry @ 0x1402E776C (MiLookupDataTableEntry.c)
 *     KeFlushQueuedDpcs @ 0x1402EC6E0 (KeFlushQueuedDpcs.c)
 *     MiGetPteAddress @ 0x140318100 (MiGetPteAddress.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14031CBD0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     MiCancelPhase0Locking @ 0x1406D0BAC (MiCancelPhase0Locking.c)
 */

PVOID __stdcall MmPageEntireDriver(PVOID AddressWithinSection)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rsi
  void *v6; // rbp
  unsigned __int64 *PteAddress; // rdi
  unsigned __int64 *v8; // rbx

  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)AddressWithinSection) )
    return 0LL;
  v4 = MiLookupDataTableEntry((unsigned __int64)AddressWithinSection, 1LL, v2, v3);
  v5 = v4;
  if ( !v4 )
    return 0LL;
  v6 = *(void **)(v4 + 48);
  if ( (dword_140CFB174 & 1) == 0 && (unsigned int)MiGetSystemRegionType((unsigned __int64)AddressWithinSection) != 1 )
  {
    KeFlushQueuedDpcs();
    PteAddress = (unsigned __int64 *)MiGetPteAddress((unsigned __int64)v6);
    v8 = &PteAddress[(unsigned __int64)*(unsigned int *)(v5 + 64) >> 12];
    MiCancelPhase0Locking(v5);
    MiSetPagingOfDriver(v5, PteAddress, (unsigned __int64)(v8 - 1));
  }
  return v6;
}
