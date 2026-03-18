/*
 * XREFs of EtwpRealtimeNotifyConsumers @ 0x1406CAA0C
 * Callers:
 *     EtwpLogger @ 0x1406C9F80 (EtwpLogger.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x14069C1A0 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1406C7790 (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpGetMaxTrackingEventBufferSize @ 0x1406CAB18 (EtwpGetMaxTrackingEventBufferSize.c)
 *     EtwpAddDebugInfoEvents @ 0x1406CAD88 (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x140939A08 (EtwpAddBinaryInfoEvents.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpRealtimeNotifyConsumers(__int64 a1)
{
  volatile signed __int64 *v1; // rbp
  unsigned int MaxTrackingEventBufferSize; // eax
  unsigned int v4; // r14d
  _DWORD *v5; // rdi
  unsigned int v6; // ebx
  char v7; // al
  _DWORD *PoolWithTag; // rax
  __int64 i; // rsi
  __int64 *j; // rax
  __int64 **v12; // rbx
  __int64 *k; // rax
  unsigned int v14; // r12d

  v1 = (volatile signed __int64 *)(a1 + 704);
  ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  MaxTrackingEventBufferSize = EtwpGetMaxTrackingEventBufferSize(a1);
  v4 = MaxTrackingEventBufferSize;
  if ( MaxTrackingEventBufferSize )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, MaxTrackingEventBufferSize, 0x62777445u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      EtwpInitializeProviderInfoBuffer(a1, (__int64)PoolWithTag, v4);
      for ( i = *(_QWORD *)(a1 + 344); i != a1 + 344; i = *(_QWORD *)i )
      {
        v14 = (*(_BYTE *)(i + 90) & 8) != 0 ? 4 : 1;
        EtwpAddDebugInfoEvents(a1, (_DWORD)v5, v4, 0, v14);
        if ( *(_QWORD *)(a1 + 1024) != a1 + 1024 && (*(_DWORD *)(a1 + 832) & 0x2000000) != 0 )
          EtwpAddBinaryInfoEvents(a1, v5, v4, v14);
        *(_BYTE *)(i + 90) |= 8u;
        if ( v5[12] > 0x48u )
        {
          EtwpRealtimeInjectEtwBuffer((_DWORD *)a1, i, (__int64)v5);
          v5[12] = 72;
        }
      }
      for ( j = *(__int64 **)(a1 + 128); j && !*((_BYTE *)j + 40); j = (__int64 *)*j )
        *((_BYTE *)j + 40) = 1;
      v12 = (__int64 **)(a1 + 112);
      for ( k = *v12; k != (__int64 *)v12; k = (__int64 *)*k )
        *((_BYTE *)k + 16) = 1;
      v6 = 0;
    }
    else
    {
      v6 = -1073741801;
    }
  }
  else
  {
    v5 = 0LL;
    v6 = -2147483622;
  }
  v7 = _InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock(v1);
  KeAbPostRelease((ULONG_PTR)v1);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
