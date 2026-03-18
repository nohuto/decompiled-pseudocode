/*
 * XREFs of MiReloadBootLoadedDrivers @ 0x140B04F8C
 * Callers:
 *     MiInitializeDriverImages @ 0x140B05E40 (MiInitializeDriverImages.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     RtlIsImageFullyRetpolined @ 0x1402D9A20 (RtlIsImageFullyRetpolined.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiMapRetpolineStubs @ 0x1405A1F60 (MiMapRetpolineStubs.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x1405EF24C (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 *     MiProcessLoadConfigForDriver @ 0x14075C2E0 (MiProcessLoadConfigForDriver.c)
 *     MiLogRetpolineImageLoadEvents @ 0x1407615BC (MiLogRetpolineImageLoadEvents.c)
 *     VslReserveProtectedPages @ 0x14080C778 (VslReserveProtectedPages.c)
 *     MiMarkRetpolineBits @ 0x140970C6C (MiMarkRetpolineBits.c)
 *     MiHandleBootImage @ 0x140B050A8 (MiHandleBootImage.c)
 *     MiApplyImportOptimizationToBootDrivers @ 0x140B07074 (MiApplyImportOptimizationToBootDrivers.c)
 */

__int64 __fastcall MiReloadBootLoadedDrivers(__int64 a1)
{
  ULONG_PTR *v2; // rdi
  ULONG_PTR *i; // rbx
  ULONG_PTR *k; // rbx
  ULONG_PTR v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 v10; // r9
  int v11; // eax
  ULONG_PTR j; // rbx
  _QWORD v13[14]; // [rsp+50h] [rbp-158h] BYREF
  _QWORD v14[24]; // [rsp+C0h] [rbp-E8h] BYREF

  memset(v14, 0, 0xB8uLL);
  v14[3] = 0LL;
  LODWORD(v14[1]) = 20;
  MmAcquireLoadLock();
  v2 = (ULONG_PTR *)(a1 + 16);
  for ( i = *(ULONG_PTR **)(a1 + 16); i != v2; i = (ULONG_PTR *)*i )
  {
    if ( PsNtosImageBase != i[6] )
      MiProcessLoadConfigForDriver((__int64)i);
    MiHandleBootImage(a1, i, v14);
  }
  MiFlushTbList((__int64)v14);
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    v6 = *v2;
    if ( (ULONG_PTR *)*v2 != v2 )
    {
      do
      {
        v7 = *(_QWORD *)(v6 + 48);
        v8 = ((unsigned __int64)*(unsigned int *)(v6 + 64) + 4095) >> 12;
        v9 = RtlImageNtHeader(v7);
        MiLogRetpolineImageLoadEvents(v6);
        if ( (KiSpeculationFeatures & 0x20000000000LL) != 0
          && v7 != PsNtosImageBase
          && v7 != PsHalImageBase
          && (*(_BYTE *)(v9 + 22) & 1) == 0
          && *(_DWORD *)(v9 + 132) > 5u )
        {
          if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(v6 + 48)) )
          {
            v10 = MiMapRetpolineStubs(v7, v8);
            if ( (MiFlags & 0x8000) != 0 )
            {
              memset(v13, 0, 0x68uLL);
              v13[1] = v7;
              LOBYTE(v13[2]) = 1;
              v11 = VslpEnterIumSecureMode(2u, 221, 0, (__int64)v13);
            }
            else
            {
              v11 = RtlPerformRetpolineRelocationsOnImageEx(
                      v7,
                      v7,
                      *(_DWORD *)(v6 + 64),
                      v10,
                      (__int64)Base,
                      1,
                      0LL,
                      0LL,
                      0);
            }
            if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741637 )
              KeBugCheckEx(0x1Au, 0x1080uLL, v6, *(_QWORD *)(v6 + 48), v11);
          }
          if ( (unsigned int)RtlIsImageFullyRetpolined(*(_QWORD *)(v6 + 48)) )
            MiMarkRetpolineBits(*(_QWORD *)(v6 + 48));
        }
        v6 = *(_QWORD *)v6;
      }
      while ( (ULONG_PTR *)v6 != v2 );
      for ( j = *(_QWORD *)(a1 + 16); (ULONG_PTR *)j != v2; j = *(_QWORD *)j )
      {
        if ( (*(_DWORD *)(j + 104) & 0x1000000) == 0 && !(unsigned int)RtlIsImageFullyRetpolined(*(_QWORD *)(j + 48)) )
          MiMarkRetpolineBits(*(_QWORD *)(j + 48));
      }
    }
  }
  MiApplyImportOptimizationToBootDrivers(a1);
  if ( (MiFlags & 0x4000) != 0 )
  {
    for ( k = (ULONG_PTR *)*v2; k != v2; k = (ULONG_PTR *)*k )
      VslReserveProtectedPages(0LL, k[6], 0, 2u);
  }
  MmReleaseLoadLock((__int64)KeGetCurrentThread());
  return 1LL;
}
