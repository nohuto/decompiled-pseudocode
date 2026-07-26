/*
 * XREFs of ?ndisVerifierInitialization@@YAEXZ @ 0x1C0039FB4
 * Callers:
 *     ?ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E3@Z @ 0x1C0012F28 (-ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E.c)
 *     DriverEntry @ 0x1C01438B0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

unsigned __int8 ndisVerifierInitialization(void)
{
  char v0; // bl
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  VerifierFlags = 0;
  if ( MmIsVerifierEnabled(&VerifierFlags) >= 0 )
  {
    ndisVerifierWdmDispatch = (struct _VF_WDM_DISPATCH_TABLE *)VfQueryDispatchTable(0LL, 80LL);
    if ( ndisVerifierWdmDispatch )
    {
      ndisVerifierNdisDispatch = (struct _VF_NDIS_DISPATCH_TABLE *)VfQueryDispatchTable(2LL, 168LL);
      if ( ndisVerifierNdisDispatch )
      {
        ndisVerifierLevel = VerifierFlags;
        if ( (ndisFlags & 4) != 0 )
          ndisVerifierLevel = VerifierFlags | 4;
        if ( MmAddVerifierThunks(&off_1C00C8D40, 0x190u) >= 0 )
        {
          qword_1C00E62D0 = (__int64)&ndisMiniportTrackAllocList;
          ndisMiniportTrackAllocList.Flink = &ndisMiniportTrackAllocList;
          qword_1C00E62C0 = (__int64)&ndisDriverTrackAllocList;
          ndisDriverTrackAllocList.Flink = &ndisDriverTrackAllocList;
          KeInitializeSpinLock(&ndisTrackMemLock);
          return 1;
        }
      }
    }
  }
  return v0;
}
