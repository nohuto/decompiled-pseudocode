/*
 * XREFs of _LdrpWorkCallback@12 @ 0x4B2B71B0
 * Callers:
 *     _TppWorkpExecuteCallback@8 @ 0x4B2B6B30 (_TppWorkpExecuteCallback@8.c)
 * Callees:
 *     _LdrpUpdateStatistics@0 @ 0x4B2B7214 (_LdrpUpdateStatistics@0.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _LdrpProcessWork@8 @ 0x4B2CE6E8 (_LdrpProcessWork@8.c)
 */

void __stdcall LdrpWorkCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WORK a3)
{
  int *v3; // esi
  int v4; // eax
  int v5; // edx

  if ( !LdrpDetourExist )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v3 = (int *)LdrpWorkQueue;
    if ( *(int **)(LdrpWorkQueue + 4) != &LdrpWorkQueue
      || (v4 = *(_DWORD *)LdrpWorkQueue, *(_DWORD *)(*(_DWORD *)LdrpWorkQueue + 4) != LdrpWorkQueue) )
    {
      __fastfail(3u);
    }
    LdrpWorkQueue = *(_DWORD *)LdrpWorkQueue;
    *(_DWORD *)(v4 + 4) = &LdrpWorkQueue;
    if ( v3 != &LdrpWorkQueue )
    {
      ++LdrpWorkInProgress;
      LdrpUpdateStatistics();
    }
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( v3 != &LdrpWorkQueue )
    {
      LOBYTE(v5) = 0;
      LdrpProcessWork(v3 - 9, v5);
    }
  }
}
