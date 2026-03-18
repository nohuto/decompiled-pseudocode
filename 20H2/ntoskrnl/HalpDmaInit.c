/*
 * XREFs of HalpDmaInit @ 0x140A643A8
 * Callers:
 *     HalpDmaInitSystem @ 0x1409A2B20 (HalpDmaInitSystem.c)
 * Callees:
 *     HalpLaAddReservation @ 0x1403BB708 (HalpLaAddReservation.c)
 *     HalpDmaInitializeControllers @ 0x1403BB7A4 (HalpDmaInitializeControllers.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A6450C (HalpDmaInitializeMasterAdapter.c)
 *     HalpDmaInitializeDomain @ 0x140A646CC (HalpDmaInitializeDomain.c)
 *     HalpDmaAllocateMappingResources @ 0x140A64788 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140A64908 (HalpDmaAllocateEmergencyResources.c)
 */

__int64 HalpDmaInit()
{
  __int64 result; // rax

  HalpCoreDmaAlignment = KeLargestCacheLine;
  result = HalpDmaInitializeMasterAdapter(&MasterAdapter24V2, qword_140C4BA40, (unsigned int)dword_140C4BA38, 0LL);
  if ( (int)result >= 0 )
  {
    qword_140C4BA08 = 0xFFFFFFLL;
    dword_140C4BA14 = 2;
    result = HalpDmaInitializeMasterAdapter(&MasterAdapter24V3, qword_140C4BC00, (unsigned int)dword_140C4BBF8, 0LL);
    if ( (int)result >= 0 )
    {
      qword_140C4BBC8 = 0xFFFFFFLL;
      dword_140C4BBD4 = 3;
      result = HalpDmaInitializeMasterAdapter(&MasterAdapterV2, qword_140C4BB20, (unsigned int)dword_140C4BB18, 0LL);
      if ( (int)result >= 0 )
      {
        dword_140C4BAF4 = 2;
        result = HalpDmaInitializeMasterAdapter(&MasterAdapterV3, qword_140C4BCE0, (unsigned int)dword_140C4BCD8, 0LL);
        if ( (int)result >= 0 )
        {
          dword_140C4BCB4 = 3;
          result = HalpDmaAllocateEmergencyResources();
          if ( (int)result >= 0 )
          {
            result = HalpDmaAllocateMappingResources();
            if ( (int)result >= 0 )
            {
              result = HalpDmaInitializeControllers();
              if ( (int)result >= 0 )
              {
                result = HalpDmaInitializeDomain();
                if ( (int)result >= 0 )
                {
                  result = HalpLaAddReservation(0LL, 1LL);
                  if ( (int)result >= 0 )
                    return HalpLaAddReservation(4276092928LL, 0x100000LL);
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
