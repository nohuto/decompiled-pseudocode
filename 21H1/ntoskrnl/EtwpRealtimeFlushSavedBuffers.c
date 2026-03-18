/*
 * XREFs of EtwpRealtimeFlushSavedBuffers @ 0x14067B44C
 * Callers:
 *     EtwpLogger @ 0x14067AF70 (EtwpLogger.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpSendSessionNotification @ 0x14067D228 (EtwpSendSessionNotification.c)
 *     EtwpRealtimeDeliverBuffer @ 0x140704958 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1407A93F0 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1407B75F8 (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeResetReferenceTime @ 0x14093D450 (EtwpRealtimeResetReferenceTime.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpRealtimeFlushSavedBuffers(__int64 a1)
{
  char *PoolWithTag; // rax
  char *v4; // rsi
  int v5; // edx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r8
  bool v9; // sf

  if ( !*(_DWORD *)(a1 + 440) || !*(_DWORD *)(a1 + 360) )
    return 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 4), 0x50777445u);
  v4 = PoolWithTag;
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
          EtwpSendSessionNotification(a1, 4LL, 3221225730LL);
          EtwpRealtimeZeroTruncateLogfile(a1);
          ExFreePoolWithTag(v4, 0);
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
        if ( (*(_DWORD *)(a1 + 832) & 1) != 0 && *((_WORD *)v4 + 27) == 3 )
          *(_OWORD *)(a1 + 448) = *(_OWORD *)(v4 + 56);
        v7 = *(_QWORD *)(a1 + 424);
        v5 = *(_DWORD *)(a1 + 440) - 1;
        *(_DWORD *)(a1 + 440) = v5;
        v8 = v7 - *((unsigned int *)v4 + 12);
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
    ExFreePoolWithTag(v4, 0);
    return 0LL;
  }
  return 3221225495LL;
}
