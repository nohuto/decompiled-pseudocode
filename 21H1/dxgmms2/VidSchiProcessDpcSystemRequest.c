/*
 * XREFs of VidSchiProcessDpcSystemRequest @ 0x1C000E810
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0006330 (VidSchDdiNotifyDpc.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C0030064 (VidSchiProcessDpcDmaPacket.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C0006940 (VidSchiUpdateContextStatus.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1C000A2C0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiProfilePerformanceTick @ 0x1C000AC50 (VidSchiProfilePerformanceTick.c)
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x1C000E580 (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000EBF8 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x1C000F1E8 (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     VidSchiDecrementContextReference @ 0x1C0010EB0 (VidSchiDecrementContextReference.c)
 */

__int64 __fastcall VidSchiProcessDpcSystemRequest(__int64 a1)
{
  signed __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // rbp
  LARGE_INTEGER v6; // rax
  LARGE_INTEGER v7; // rdx
  LARGE_INTEGER v8; // rcx
  LARGE_INTEGER v9; // r8
  __int64 v10; // r15
  LARGE_INTEGER v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _KEVENT *v14; // rcx
  __int64 v15; // r8
  __int64 result; // rax
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 *v19; // rax
  __int64 **v20; // rdx
  __int64 v21; // rax
  __int64 **v22; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(v1 + 96);
  v4 = *(_QWORD *)(v1 + 104);
  v5 = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 13;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1712), &LockHandle);
  PerformanceFrequency.QuadPart = 0LL;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v10 = *(unsigned int *)(v3 + 1552);
  v11 = v6;
  if ( v1 != _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 8 * v10 + 1560), 0LL, v1) )
  {
    v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(
            (LARGE_INTEGER)v8.QuadPart,
            (LARGE_INTEGER)v7.QuadPart,
            (LARGE_INTEGER)v9.QuadPart);
    *(_QWORD *)(v17 + 24) = v5;
    *(_QWORD *)(v17 + 32) = v1;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( *(_DWORD *)(a1 + 88) != 3 )
    *(_QWORD *)(v3 + 224) = v1;
  *(_DWORD *)(v3 + 1552) = ((_BYTE)v10 + 1) & 0xF;
  _InterlockedAdd((volatile signed __int32 *)(v5 + 720), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 2880), 0xFFFFFFFF);
  VidSchiStopExecutionTimeAtThisPriority(
    (struct _VIDSCH_NODE *)v3,
    *(_DWORD *)(v1 + 404),
    v11.QuadPart,
    PerformanceFrequency.QuadPart);
  v12 = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1552) + 1560);
  if ( v12 )
    VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v3, *(_DWORD *)(v12 + 404), v11.QuadPart);
  if ( *(int *)(v3 + 2864) > 0 )
    RtlSetBitEx(v5 + 480);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 788), 0xFFFFFFFF) == 1 )
  {
    if ( (*(_DWORD *)(v1 + 184) & 1) != 0 )
      *(_DWORD *)(v1 + 184) &= ~2u;
    else
      VidSchiUpdateContextStatus(v1, 0LL, 11924LL);
    --*(_DWORD *)(v3 + 4LL * *(unsigned int *)(v1 + 404) + 1768);
    v13 = *(unsigned int *)(v1 + 404);
    if ( !*(_DWORD *)(v3 + 4 * v13 + 1768) )
      *(_DWORD *)(v3 + 1764) &= ~(1 << v13);
  }
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v3 + 2892), 0xFFFFFFFF);
    _InterlockedAdd((volatile signed __int32 *)(v3 + 2888), 0xFFFFFFFF);
    _InterlockedAdd((volatile signed __int32 *)(v5 + 724), 0xFFFFFFFF);
    _m_prefetchw((const void *)(v3 + 120));
    while ( _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v3 + 120),
              *(_QWORD *)(a1 + 104),
              *(_QWORD *)(v3 + 120)) != *(_QWORD *)(a1 + 104) )
      ;
  }
  _InterlockedAdd((volatile signed __int32 *)(v5 + 716), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v3 + 2876), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 1580), 0xFFFFFFFF);
  _InterlockedAdd((volatile signed __int32 *)(v1 + 784), 0xFFFFFFFF);
  VidSchiCheckPendingDeviceCommand((_QWORD *)v4);
  VidSchiProfilePerformanceTick(9LL, v5, v3, 0LL, 0LL, 0LL, a1, 0LL);
  VidSchiSignalRegisteredEvent(v5, v1 + 376);
  VidSchiSignalRegisteredEvent(v5, v3 + 408);
  VidSchiSignalRegisteredEvent(v5, v5 + 1624);
  *(_QWORD *)(v1 + 352) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v1 + 320), 0, 0);
  *(_QWORD *)(v3 + 272) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 240), 0, 0);
  *(_QWORD *)(v5 + 1432) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1400), 0, 0);
  VidSchiSignalRegisteredEvent(v5, v3 + 424);
  VidSchiSignalRegisteredEvent(v5, v5 + 1640);
  *(_QWORD *)(v3 + 328) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v3 + 296), 0, 0);
  *(_QWORD *)(v5 + 1488) = MEMORY[0xFFFFF78000000320];
  KeSetEvent((PRKEVENT)(v5 + 1456), 0, 0);
  v14 = *(struct _KEVENT **)(a1 + 200);
  if ( v14 )
    KeSetEvent(v14, 0, 0);
  if ( *(_DWORD *)(a1 + 88) == 3 )
  {
    v15 = *(_QWORD *)(v3 + 232);
    if ( v15 )
    {
      if ( (*(_DWORD *)(v15 + 184) & 1) != 0 )
      {
        v18 = (__int64 *)(v15 + 8);
        v19 = *(__int64 **)(v15 + 8);
        if ( v19[1] != v15 + 8
          || (v20 = *(__int64 ***)(v15 + 16), *v20 != v18)
          || (*v20 = v19,
              v19[1] = (__int64)v20,
              v21 = v3 + 16 * (*(unsigned int *)(v15 + 404) + 128LL),
              v22 = *(__int64 ***)(v21 + 8),
              *v22 != (__int64 *)v21) )
        {
          __fastfail(3u);
        }
        *v18 = v21;
        *(_QWORD *)(v15 + 16) = v22;
        *v22 = v18;
        *(_QWORD *)(v21 + 8) = v18;
      }
      VidSchiDecrementContextReference((struct _VIDSCH_CONTEXT *)v15);
      *(_QWORD *)(v3 + 232) = 0LL;
    }
    *(_QWORD *)(v3 + 384) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 352), 0, 0);
    if ( *(_DWORD *)(v5 + 716) )
    {
      *(_QWORD *)(*(_QWORD *)(v4 + 32) + 1208LL) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(*(_QWORD *)(v4 + 32) + 1176LL), 0, 0);
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 80) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 72) = 16;
  return result;
}
