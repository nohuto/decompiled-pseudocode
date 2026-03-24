/*
 * XREFs of VidSchiProcessDpcPreemptedPacket @ 0x1C0012F8C
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0006AC0 (VidSchDdiNotifyDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C002FF94 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000B670 (VidSchiProfilePerformanceTick.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0013758 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C0013828 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     ?VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z @ 0x1C00138B8 (-VidSchiAddGpuWorkEntry@@YAXPEAU_VIDSCH_CONTEXT@@_N@Z.c)
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C0013934 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     VidSchiRewindPacket @ 0x1C0013970 (VidSchiRewindPacket.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C0013A24 (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C0013B00 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiCompleteRewindPacket @ 0x1C0013D54 (VidSchiCompleteRewindPacket.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 */

LONG __fastcall VidSchiProcessDpcPreemptedPacket(__int64 a1)
{
  signed __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbp
  LARGE_INTEGER *v5; // r12
  LARGE_INTEGER v6; // rax
  LARGE_INTEGER v7; // rcx
  LARGE_INTEGER v8; // r8
  unsigned __int64 QuadPart; // r15
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // r8
  int v15; // r15d
  __int64 v16; // rcx
  struct _KEVENT *v17; // rcx
  LONG result; // eax
  __int64 v19; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-58h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A8h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(v2 + 96);
  v4 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 14;
  if ( *(_QWORD *)(a1 + 56) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 56LL) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 52LL) = 14;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1712), &LockHandle);
  v5 = (LARGE_INTEGER *)(*(_QWORD *)(v3 + 184) + 112LL * *(unsigned int *)(v3 + 196));
  memset(v5, 0, 0x70uLL);
  *(_DWORD *)(v3 + 196) = (*(_DWORD *)(v3 + 196) + 1) & (*(_DWORD *)(v3 + 192) - 1);
  v5->LowPart = 5;
  PerformanceFrequency.QuadPart = 0LL;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v5[1] = v6;
  QuadPart = v6.QuadPart;
  v10 = *(unsigned int *)(v3 + 1552);
  if ( v2 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v10 + 1560), 0LL, v2) )
  {
    v19 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(
            (LARGE_INTEGER)v7.QuadPart,
            0LL,
            (LARGE_INTEGER)v8.QuadPart);
    *(_QWORD *)(v19 + 24) = v4;
    *(_QWORD *)(v19 + 32) = v2;
    WdLogEvent5_WdAssertion(v19);
  }
  *(_QWORD *)(v3 + 224) = v2;
  *(_DWORD *)(v3 + 1552) = ((_BYTE)v10 + 1) & 0xF;
  v11 = *(_QWORD *)(a1 + 56);
  if ( v11 )
  {
    *(_QWORD *)(*(_QWORD *)(v11 + 88) + 168LL) = *(_QWORD *)(v11 + 112);
    v5[3] = *(LARGE_INTEGER *)(v11 + 112);
    _InterlockedAdd((volatile signed __int32 *)(v11 + 128), 1u);
    VidSchiRewindPacket(v11, 1LL, 0LL, 1LL);
  }
  if ( (*(_DWORD *)(a1 + 92) & 0x200) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 804));
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 720));
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 2880));
  VidSchiStopExecutionTimeAtThisPriority(
    (struct _VIDSCH_NODE *)v3,
    *(_DWORD *)(v2 + 404),
    QuadPart,
    PerformanceFrequency.QuadPart);
  v12 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1552) + 1560);
  if ( v12 )
    VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v3, *(_DWORD *)(v12 + 404), QuadPart);
  if ( *(int *)(v3 + 2864) > 0 )
    RtlSetBitEx(v4 + 480);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 788), 0xFFFFFFFF) == 1 )
  {
    *(_DWORD *)(v2 + 184) &= ~8u;
    if ( (*(_DWORD *)(v2 + 184) & 0x20) != 0 )
      *(_DWORD *)(v2 + 184) &= ~0x20u;
    if ( (*(_DWORD *)(v2 + 184) & 0x10) != 0 )
      *(_DWORD *)(v2 + 184) &= ~0x10u;
    if ( (*(_DWORD *)(v2 + 184) & 0x40) != 0 )
      *(_DWORD *)(v2 + 184) &= ~0x40u;
    *(_DWORD *)(v2 + 184) &= ~2u;
    v13 = VidSchiCompleteRewindPacket(v2, 1LL);
    LOBYTE(v14) = 1;
    v15 = v13;
    VidSchiSetTransferContextRunningTime(v2, 0LL, v14);
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v2 + 404) + 1768);
    v16 = *(unsigned int *)(v2 + 404);
    if ( !*(_DWORD *)(v3 + 4 * v16 + 1768) )
      *(_DWORD *)(v3 + 1764) &= ~(1 << v16);
    VidSchiFinishMeasuringPreemptionTime(v2);
  }
  else
  {
    v15 = 0;
  }
  v5[2] = *(LARGE_INTEGER *)(a1 + 104);
  _m_prefetchw((const void *)(v3 + 96));
  while ( _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v3 + 96),
            *(_QWORD *)(a1 + 104),
            *(_QWORD *)(v3 + 96)) != *(_QWORD *)(a1 + 104) )
    ;
  if ( bTracingEnabled )
    VidSchiAddGpuWorkEntry(*(struct _VIDSCH_CONTEXT **)(a1 + 48), 0);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  VidSchiProfilePerformanceTick(11LL, v4, v3, 0LL, 0LL, 0LL, a1, 0LL);
  v17 = *(struct _KEVENT **)(a1 + 200);
  if ( v17 )
    KeSetEvent(v17, 0, 0);
  VidSchiSignalRegisteredEvent(v4, v2 + 376);
  VidSchiSignalRegisteredEvent(v4, v3 + 408);
  VidSchiSignalRegisteredEvent(v4, v4 + 1624);
  *(_QWORD *)(v2 + 352) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v2 + 320), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v4 + 1432) = MEMORY[0xFFFFF78000000320];
  result = KeSetEvent((PRKEVENT)(v4 + 1400), 0, 0);
  if ( v15 )
  {
    *(_QWORD *)(v4 + 1208) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(v4 + 1176), 0, 0);
  }
  return result;
}
