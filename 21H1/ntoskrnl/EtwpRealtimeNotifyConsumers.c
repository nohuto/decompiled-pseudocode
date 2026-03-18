/*
 * XREFs of EtwpRealtimeNotifyConsumers @ 0x14067B8E4
 * Callers:
 *     EtwpLogger @ 0x14067AF70 (EtwpLogger.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x140678D0C (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpAddDebugInfoEvents @ 0x14067AD64 (EtwpAddDebugInfoEvents.c)
 *     EtwpGetMaxTrackingEventBufferSize @ 0x14067B9F0 (EtwpGetMaxTrackingEventBufferSize.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140704A9C (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpAddBinaryInfoEvents @ 0x140938768 (EtwpAddBinaryInfoEvents.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
  __int64 *i; // rsi
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
      for ( i = *(__int64 **)(a1 + 344); i != (__int64 *)(a1 + 344); i = (__int64 *)*i )
      {
        v14 = (*((_BYTE *)i + 90) & 8) != 0 ? 4 : 1;
        EtwpAddDebugInfoEvents(a1, (__int64)v5, v4, 0LL, v14);
        if ( *(_QWORD *)(a1 + 1024) != a1 + 1024 && (*(_DWORD *)(a1 + 832) & 0x2000000) != 0 )
          EtwpAddBinaryInfoEvents(a1, v5, v4, v14);
        *((_BYTE *)i + 90) |= 8u;
        if ( v5[12] > 0x48u )
        {
          EtwpRealtimeInjectEtwBuffer(a1, i, v5);
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
