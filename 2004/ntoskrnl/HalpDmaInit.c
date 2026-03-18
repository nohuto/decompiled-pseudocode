/*
 * XREFs of HalpDmaInit @ 0x140A5D048
 * Callers:
 *     HalpDmaInitSystem @ 0x14099CA20 (HalpDmaInitSystem.c)
 * Callees:
 *     HalpLaAddReservation @ 0x1403B8C68 (HalpLaAddReservation.c)
 *     HalpDmaInitializeControllers @ 0x1403B8D04 (HalpDmaInitializeControllers.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A5D1AC (HalpDmaInitializeMasterAdapter.c)
 *     HalpDmaInitializeDomain @ 0x140A5D36C (HalpDmaInitializeDomain.c)
 *     HalpDmaAllocateMappingResources @ 0x140A5D428 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140A5D5A8 (HalpDmaAllocateEmergencyResources.c)
 */

__int64 HalpDmaInit()
{
  __int64 result; // rax

  HalpCoreDmaAlignment = KeLargestCacheLine;
  result = HalpDmaInitializeMasterAdapter(&MasterAdapter24V2, qword_140C4B9C0, (unsigned int)dword_140C4B9B8, 0LL);
  if ( (int)result >= 0 )
  {
    qword_140C4B988 = 0xFFFFFFLL;
    dword_140C4B994 = 2;
    result = HalpDmaInitializeMasterAdapter(&MasterAdapter24V3, qword_140C4BB80, (unsigned int)dword_140C4BB78, 0LL);
    if ( (int)result >= 0 )
    {
      qword_140C4BB48 = 0xFFFFFFLL;
      dword_140C4BB54 = 3;
      result = HalpDmaInitializeMasterAdapter(&MasterAdapterV2, qword_140C4BAA0, (unsigned int)dword_140C4BA98, 0LL);
      if ( (int)result >= 0 )
      {
        dword_140C4BA74 = 2;
        result = HalpDmaInitializeMasterAdapter(&MasterAdapterV3, qword_140C4BC60, (unsigned int)dword_140C4BC58, 0LL);
        if ( (int)result >= 0 )
        {
          dword_140C4BC34 = 3;
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
