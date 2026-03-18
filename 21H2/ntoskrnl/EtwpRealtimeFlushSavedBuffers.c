/*
 * XREFs of EtwpRealtimeFlushSavedBuffers @ 0x14079A870
 * Callers:
 *     EtwpLogger @ 0x140799440 (EtwpLogger.c)
 * Callees:
 *     EtwpSendSessionNotification @ 0x1406EF58C (EtwpSendSessionNotification.c)
 *     EtwpRealtimeDeliverBuffer @ 0x140798E18 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeRestoreBuffer @ 0x14084BFF4 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x14085CC28 (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeResetReferenceTime @ 0x1409EDE34 (EtwpRealtimeResetReferenceTime.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpRealtimeFlushSavedBuffers(__int64 a1)
{
  __int64 Pool2; // rsi
  __int64 v4; // rbx
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // r8
  bool v8; // sf
  int v9; // eax

  if ( !*(_DWORD *)(a1 + 424) || !*(_DWORD *)(a1 + 344) )
    return 0LL;
  Pool2 = ExAllocatePool2(256LL, *(unsigned int *)(a1 + 4), 1350005829LL);
  if ( Pool2 )
  {
    if ( *(_DWORD *)(a1 + 424) )
    {
      while ( *(_DWORD *)(a1 + 344) )
      {
        v4 = *(_QWORD *)(a1 + 392);
        if ( (int)EtwpRealtimeRestoreBuffer(a1, Pool2) < 0 )
        {
          *(_DWORD *)(a1 + 260) += *(_DWORD *)(a1 + 424);
          *(_DWORD *)(a1 + 424) = 0;
          *(_QWORD *)(a1 + 408) = 0LL;
          *(_DWORD *)(a1 + 448) = 3;
          EtwpSendSessionNotification(a1, 4u, 0xC0000102);
          EtwpRealtimeZeroTruncateLogfile(a1);
          ExFreePoolWithTag((PVOID)Pool2, 0);
          if ( (*(_DWORD *)(a1 + 816) & 1) != 0 )
            EtwpRealtimeResetReferenceTime(a1);
          return 3221225730LL;
        }
        if ( (int)EtwpRealtimeDeliverBuffer(a1, Pool2) < 0 )
        {
          v9 = *(_DWORD *)(a1 + 424);
          *(_QWORD *)(a1 + 392) = v4;
          if ( v9 )
            break;
          goto LABEL_14;
        }
        if ( (*(_DWORD *)(a1 + 816) & 1) != 0 && *(_WORD *)(Pool2 + 54) == 3 )
          *(_OWORD *)(a1 + 432) = *(_OWORD *)(Pool2 + 56);
        v5 = *(_QWORD *)(a1 + 408);
        v6 = *(_DWORD *)(a1 + 424) - 1;
        *(_DWORD *)(a1 + 424) = v6;
        v7 = v5 - *(unsigned int *)(Pool2 + 48);
        v8 = *(int *)(a1 + 16) < 0;
        *(_QWORD *)(a1 + 408) = v7;
        if ( v8
          && *(_QWORD *)(a1 + 416) - v7 > (unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 236)) )
        {
          _InterlockedExchange((volatile __int32 *)(a1 + 16), 0);
          v6 = *(_DWORD *)(a1 + 424);
        }
        if ( !v6 )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      EtwpRealtimeZeroTruncateLogfile(a1);
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 0LL;
  }
  return 3221225495LL;
}
