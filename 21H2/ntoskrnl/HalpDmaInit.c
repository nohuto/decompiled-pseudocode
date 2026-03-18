/*
 * XREFs of HalpDmaInit @ 0x140B1D878
 * Callers:
 *     HalpDmaInitSystem @ 0x140A5A5D0 (HalpDmaInitSystem.c)
 * Callees:
 *     HalpDmaAlwaysReserveLogicalAddressRange @ 0x1403CE1A4 (HalpDmaAlwaysReserveLogicalAddressRange.c)
 *     HalpDmaInitializeControllers @ 0x1403CE2B4 (HalpDmaInitializeControllers.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B1D9DC (HalpDmaInitializeMasterAdapter.c)
 *     HalpDmaInitializeDomain @ 0x140B1DB9C (HalpDmaInitializeDomain.c)
 *     HalpDmaAllocateMappingResources @ 0x140B1DD34 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140B1DEB4 (HalpDmaAllocateEmergencyResources.c)
 */

__int64 HalpDmaInit()
{
  __int64 result; // rax

  HalpCoreDmaAlignment = KeLargestCacheLine;
  result = HalpDmaInitializeMasterAdapter(&MasterAdapter24V2, qword_140C4DF40, (unsigned int)dword_140C4DF38, 0LL);
  if ( (int)result >= 0 )
  {
    qword_140C4DF08 = 0xFFFFFFLL;
    dword_140C4DF14 = 2;
    result = HalpDmaInitializeMasterAdapter(&MasterAdapter24V3, qword_140C4E100, (unsigned int)dword_140C4E0F8, 0LL);
    if ( (int)result >= 0 )
    {
      qword_140C4E0C8 = 0xFFFFFFLL;
      dword_140C4E0D4 = 3;
      result = HalpDmaInitializeMasterAdapter(&MasterAdapterV2, qword_140C4E020, (unsigned int)dword_140C4E018, 0LL);
      if ( (int)result >= 0 )
      {
        dword_140C4DFF4 = 2;
        result = HalpDmaInitializeMasterAdapter(&MasterAdapterV3, qword_140C4E1E0, (unsigned int)dword_140C4E1D8, 0LL);
        if ( (int)result >= 0 )
        {
          dword_140C4E1B4 = 3;
          result = HalpDmaAllocateEmergencyResources();
          if ( (int)result >= 0 )
          {
            result = HalpDmaAllocateMappingResources();
            if ( (int)result >= 0 )
            {
              result = HalpDmaInitializeControllers();
              if ( (int)result >= 0 )
              {
                result = HalpDmaAlwaysReserveLogicalAddressRange(0LL, 0x200000uLL);
                if ( (int)result >= 0 )
                {
                  result = HalpDmaAlwaysReserveLogicalAddressRange(0xFEE00000uLL, 0x100000uLL);
                  if ( (int)result >= 0 )
                    return HalpDmaInitializeDomain();
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
