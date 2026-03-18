/*
 * XREFs of ACPITableLoad @ 0x1C001F8F0
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C00BD6E4 (ACPIInitializeDDBs.c)
 * Callees:
 *     ACPIBuildScheduleDpc @ 0x1C000C2F4 (ACPIBuildScheduleDpc.c)
 *     ACPIGpeBuildEventMasks @ 0x1C001B8FC (ACPIGpeBuildEventMasks.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C001CB58 (ACPIBuildSpecialSynchronizationRequest.c)
 *     ACPIBuildRunMethodRequest @ 0x1C001FB38 (ACPIBuildRunMethodRequest.c)
 *     ACPIGpeClearEventMasks @ 0x1C001FC84 (ACPIGpeClearEventMasks.c)
 *     EnableDisableCMOSRegions @ 0x1C0020180 (EnableDisableCMOSRegions.c)
 *     ACPIQueryDeviceLockMutexSupport @ 0x1C0020370 (ACPIQueryDeviceLockMutexSupport.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C0020398 (ACPIEcInitOpRegionHandler.c)
 *     ACPIRootInitialize @ 0x1C008F8C0 (ACPIRootInitialize.c)
 */

__int64 __fastcall ACPITableLoad(__int64 a1, int a2, __int64 a3)
{
  KIRQL v4; // al
  int v5; // ebx
  __int64 i; // rcx
  KIRQL v7; // si
  int v8; // ebx
  KIRQL v9; // bl
  KIRQL v11; // al
  int v12; // ebx
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0;
  if ( a2 == 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v5 = ++AcpiTableLoadDelta;
    KeReleaseSpinLock(&AcpiBuildQueueLock, v4);
    if ( v5 == 1 && !*((_BYTE *)AcpiInformation + 133) )
      ACPIGpeClearEventMasks();
  }
  else
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v12 = --AcpiTableLoadDelta;
    if ( !AcpiTableLoadDelta )
    {
      for ( i = AcpiBuildQueueList; (__int64 *)i != &AcpiBuildQueueList; i = *(_QWORD *)i )
        *(_DWORD *)(i + 20) &= ~0x40u;
    }
    KeReleaseSpinLock(&AcpiBuildQueueLock, v11);
    if ( !v12 )
    {
      if ( !*((_BYTE *)AcpiInformation + 133) )
        ACPIGpeBuildEventMasks();
      if ( (gOverrideFlags & 2) == 0 )
        ACPIEcInitOpRegionHandler();
      if ( !*(_QWORD *)(RootDeviceExtension + 760) )
        ACPIRootInitialize();
      v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v8 = ACPIBuildRunMethodRequest(RootDeviceExtension, 0, 0, 1229867359, 7, 0);
      ACPIQueryDeviceLockMutexSupport(&v13);
      if ( v13 )
        v8 = ACPIBuildRunMethodRequest(RootDeviceExtension, 0, 0, 1296843871, 388, 0);
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
      if ( v8 < 0
        || (EnableDisableCMOSRegions(*(_QWORD *)(RootDeviceExtension + 760)),
            (int)ACPIBuildSpecialSynchronizationRequest(
                   RootDeviceExtension,
                   (__int64)ACPITableLoadCallBack,
                   a3 == 0,
                   127,
                   0) < 0) )
      {
        KeBugCheckEx(0xA3u, 1uLL, 0x110292uLL, 0LL, 0LL);
      }
      v9 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      ACPIBuildScheduleDpc();
      KeReleaseSpinLock(&AcpiBuildQueueLock, v9);
    }
  }
  return 0LL;
}
