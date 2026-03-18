/*
 * XREFs of EtwpSendDbgId @ 0x140939750
 * Callers:
 *     EtwpSendTraceEvent @ 0x1405A56BC (EtwpSendTraceEvent.c)
 *     EtwpProviderArrivalCallback @ 0x1406FAA60 (EtwpProviderArrivalCallback.c)
 *     EtwpUpdateTrace @ 0x140780C28 (EtwpUpdateTrace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1406C7790 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpGetMaxTrackingEventBufferSize @ 0x1406CAB18 (EtwpGetMaxTrackingEventBufferSize.c)
 *     EtwpAddDebugInfoEvents @ 0x1406CAD88 (EtwpAddDebugInfoEvents.c)
 *     EtwpSendBufferToDebugger @ 0x140939634 (EtwpSendBufferToDebugger.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpSendDbgId(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  volatile signed __int64 *v4; // rsi
  unsigned int MaxTrackingEventBufferSize; // eax
  int v6; // ebp
  __int128 *v7; // rdi
  __int128 *PoolWithTag; // rax

  if ( (*(_DWORD *)(a1 + 836) & 0x800) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 836));
    v2 = *(_DWORD *)(a1 + 836);
    do
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 836), v2 & 0xFFFFF7FF, v2);
    }
    while ( v3 != v2 );
    if ( (v2 & 0x800) != 0 )
    {
      v4 = (volatile signed __int64 *)(a1 + 704);
      ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
      MaxTrackingEventBufferSize = EtwpGetMaxTrackingEventBufferSize(a1);
      v6 = MaxTrackingEventBufferSize;
      if ( MaxTrackingEventBufferSize )
      {
        PoolWithTag = (__int128 *)ExAllocatePoolWithTag(NonPagedPoolNx, MaxTrackingEventBufferSize, 0x62777445u);
        v7 = PoolWithTag;
        if ( PoolWithTag )
        {
          EtwpInitializeProviderInfoBuffer(a1, (__int64)PoolWithTag, v6);
          EtwpAddDebugInfoEvents(a1, (__int64)v7, v6, 0LL, 0);
        }
      }
      else
      {
        v7 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
      KeAbPostRelease(a1 + 704);
      if ( v7 )
      {
        EtwpSendBufferToDebugger(v7);
        ExFreePoolWithTag(v7, 0);
      }
    }
  }
}
