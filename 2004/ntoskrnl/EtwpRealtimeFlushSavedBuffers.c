/*
 * XREFs of EtwpRealtimeFlushSavedBuffers @ 0x1406CA4C8
 * Callers:
 *     EtwpLogger @ 0x1406C9F80 (EtwpLogger.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     EtwpSendSessionNotification @ 0x1406328F8 (EtwpSendSessionNotification.c)
 *     EtwpRealtimeDeliverBuffer @ 0x14069C05C (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1407AC550 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1407BA768 (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeResetReferenceTime @ 0x14093E6D0 (EtwpRealtimeResetReferenceTime.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpRealtimeFlushSavedBuffers(__int64 a1)
{
  PVOID PoolWithTag; // rax
  __int64 v4; // rsi
  int v5; // edx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r8
  bool v9; // sf

  if ( !*(_DWORD *)(a1 + 440) || !*(_DWORD *)(a1 + 360) )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 4), 0x50777445u);
  v4 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, *(unsigned int *)(a1 + 4));
    v5 = *(_DWORD *)(a1 + 440);
    if ( v5 )
    {
      while ( *(_DWORD *)(a1 + 360) )
      {
        v6 = *(_QWORD *)(a1 + 408);
        if ( (int)EtwpRealtimeRestoreBuffer(a1, v4) < 0 )
        {
          *(_DWORD *)(a1 + 276) += *(_DWORD *)(a1 + 440);
          *(_DWORD *)(a1 + 440) = 0;
          *(_QWORD *)(a1 + 424) = 0LL;
          *(_DWORD *)(a1 + 464) = 3;
          EtwpSendSessionNotification(a1, 4u, 0xC0000102);
          EtwpRealtimeZeroTruncateLogfile(a1);
          ExFreePoolWithTag((PVOID)v4, 0);
          if ( (*(_DWORD *)(a1 + 832) & 1) != 0 )
            EtwpRealtimeResetReferenceTime(a1);
          return 3221225730LL;
        }
        if ( (int)EtwpRealtimeDeliverBuffer(a1, v4) < 0 )
        {
          v5 = *(_DWORD *)(a1 + 440);
          *(_QWORD *)(a1 + 408) = v6;
          break;
        }
        if ( (*(_DWORD *)(a1 + 832) & 1) != 0 && *(_WORD *)(v4 + 54) == 3 )
          *(_OWORD *)(a1 + 448) = *(_OWORD *)(v4 + 56);
        v7 = *(_QWORD *)(a1 + 424);
        v5 = *(_DWORD *)(a1 + 440) - 1;
        *(_DWORD *)(a1 + 440) = v5;
        v8 = v7 - *(unsigned int *)(v4 + 48);
        v9 = *(int *)(a1 + 16) < 0;
        *(_QWORD *)(a1 + 424) = v8;
        if ( v9
          && *(_QWORD *)(a1 + 432) - v8 > (unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 252)) )
        {
          _InterlockedExchange((volatile __int32 *)(a1 + 16), 0);
          v5 = *(_DWORD *)(a1 + 440);
        }
        if ( !v5 )
          goto LABEL_14;
      }
      if ( v5 )
        goto LABEL_15;
    }
LABEL_14:
    EtwpRealtimeZeroTruncateLogfile(a1);
LABEL_15:
    ExFreePoolWithTag((PVOID)v4, 0);
    return 0LL;
  }
  return 3221225495LL;
}
