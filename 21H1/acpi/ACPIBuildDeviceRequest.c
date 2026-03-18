/*
 * XREFs of ACPIBuildDeviceRequest @ 0x1C001B20C
 * Callers:
 *     OSNotifyCreateDevice @ 0x1C001B15C (OSNotifyCreateDevice.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C001C644 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     ExFreeToNPagedLookasideList @ 0x1C004C858 (ExFreeToNPagedLookasideList.c)
 */

__int64 __fastcall ACPIBuildDeviceRequest(__int64 a1)
{
  PVOID v2; // rax
  __int64 v3; // rbx
  __int64 *v4; // rax

  v2 = ExAllocateFromNPagedLookasideList(&BuildRequestLookAsideList);
  v3 = (__int64)v2;
  if ( !v2 )
    return 3221225626LL;
  if ( *(_DWORD *)(a1 + 692) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 692));
    memset(v2, 0, 0x88uLL);
    *(_DWORD *)(v3 + 16) = 1599293264;
    *(_QWORD *)(v3 + 128) = &AcpiBuildDeviceList;
    *(_DWORD *)(v3 + 24) = 3;
    *(_QWORD *)(v3 + 40) = a1;
    *(_DWORD *)(v3 + 20) = 4105;
    KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
    if ( AcpiTableLoadDelta )
      *(_DWORD *)(v3 + 20) |= 0x40u;
    v4 = (__int64 *)qword_1C0082418;
    if ( *(__int64 **)qword_1C0082418 != &AcpiBuildQueueList )
      __fastfail(3u);
    *(_QWORD *)v3 = &AcpiBuildQueueList;
    *(_QWORD *)(v3 + 8) = v4;
    *v4 = v3;
    qword_1C0082418 = v3;
    KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
    return 259LL;
  }
  else
  {
    ExFreeToNPagedLookasideList(&BuildRequestLookAsideList, v2);
    return 3221226166LL;
  }
}
