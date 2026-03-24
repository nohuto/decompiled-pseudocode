/*
 * XREFs of ACPIBuildSynchronizationRequestInternal @ 0x1C002C8F0
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C001CDD0 (ACPIBuildDeviceDpc.c)
 *     ACPIGetWorkerForInteger @ 0x1C0026CF0 (ACPIGetWorkerForInteger.c)
 *     OSNotifyDeviceEnum @ 0x1C002F0AC (OSNotifyDeviceEnum.c)
 *     ACPIBuildSynchronizationRequest @ 0x1C004C564 (ACPIBuildSynchronizationRequest.c)
 *     OSNotifyDeviceCheck @ 0x1C0058AC4 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEject @ 0x1C0058C58 (OSNotifyDeviceEject.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C001C8A4 (ExAllocateFromNPagedLookasideList.c)
 *     ACPIBuildScheduleDpc @ 0x1C001E54C (ACPIBuildScheduleDpc.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     ExFreeToNPagedLookasideList @ 0x1C004C9C8 (ExFreeToNPagedLookasideList.c)
 */

__int64 __fastcall ACPIBuildSynchronizationRequestInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD *v8; // rbx
  KIRQL v9; // si
  KIRQL v10; // al
  __int64 v11; // rdx
  KIRQL v12; // di

  v8 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
  if ( !v8 )
    return 3221225626LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( *(_DWORD *)(a1 + 692) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 692));
    memset(v8, 0, 0x88uLL);
    *((_DWORD *)v8 + 4) = 1599293264;
    v8[16] = &AcpiBuildSynchronizationList;
    *((_DWORD *)v8 + 6) = 3;
    v8[10] = &AcpiBuildDeviceList;
    v8[8] = a2;
    v8[9] = a3;
    v8[5] = a1;
    *((_DWORD *)v8 + 5) = 4106;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
    v10 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v11 = AcpiBuildQueueList;
    v12 = v10;
    if ( *(__int64 **)(AcpiBuildQueueList + 8) != &AcpiBuildQueueList )
      __fastfail(3u);
    *v8 = AcpiBuildQueueList;
    v8[1] = &AcpiBuildQueueList;
    *(_QWORD *)(v11 + 8) = v8;
    AcpiBuildQueueList = (__int64)v8;
    if ( a5 )
      ACPIBuildScheduleDpc();
    KeReleaseSpinLock(&AcpiBuildQueueLock, v12);
    return 259LL;
  }
  else
  {
    ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v8);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
    return 3221226166LL;
  }
}
