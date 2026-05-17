/*
 * XREFs of _RtlDestroyHeap@4 @ 0x4B2AF870
 * Callers:
 *     _RtlDetectHeapLeaks@0 @ 0x4B2DD8C0 (_RtlDetectHeapLeaks@0.c)
 *     _LdrEnsureMrdataHeapExists@0 @ 0x4B2E1C77 (_LdrEnsureMrdataHeapExists@0.c)
 *     _RtlHeapTrkInitialize@4 @ 0x4B364170 (_RtlHeapTrkInitialize@4.c)
 * Callees:
 *     _RtlpMoveHeapBetweenLists@16 @ 0x4B2A914A (_RtlpMoveHeapBetweenLists@16.c)
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlpDestroyHeapSegment@4 @ 0x4B2AFA04 (_RtlpDestroyHeapSegment@4.c)
 *     _RtlpSecMemFreeVirtualMemory@16 @ 0x4B2AFA7A (_RtlpSecMemFreeVirtualMemory@16.c)
 *     _RtlpRemoveHeapFromUnprotectedList@4 @ 0x4B2AFAAC (_RtlpRemoveHeapFromUnprotectedList@4.c)
 *     _RtlDeleteCriticalSection@4 @ 0x4B2AFB90 (_RtlDeleteCriticalSection@4.c)
 *     _RtlpHpStackTraceHeapDestroy@4 @ 0x4B2AFD4E (_RtlpHpStackTraceHeapDestroy@4.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpCallInterceptRoutine@20 @ 0x4B35773E (_RtlpCallInterceptRoutine@20.c)
 *     _RtlDebugDestroyHeap@4 @ 0x4B35F6BF (_RtlDebugDestroyHeap@4.c)
 *     _RtlpHeapLogRangeDestroy@4 @ 0x4B36D816 (_RtlpHeapLogRangeDestroy@4.c)
 *     _RtlpHeapLogRangeRelease@12 @ 0x4B36D880 (_RtlpHeapLogRangeRelease@12.c)
 *     _RtlpReportHeapFailure@4 @ 0x4B36FAE5 (_RtlpReportHeapFailure@4.c)
 *     _RtlpHpTagDestroyHeap@4 @ 0x4B37013C (_RtlpHpTagDestroyHeap@4.c)
 *     _RtlpHpHeapDestroy@4 @ 0x4B378C76 (_RtlpHpHeapDestroy@4.c)
 */

int __stdcall RtlDestroyHeap(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // ebx
  int v3; // eax
  int v4; // esi
  int v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  unsigned int v11; // eax
  int v12; // eax
  unsigned __int8 v13; // al
  unsigned __int8 v14; // al
  _DWORD v15[2]; // [esp+10h] [ebp-60h] BYREF
  _DWORD v16[2]; // [esp+18h] [ebp-58h] BYREF
  int v17; // [esp+20h] [ebp-50h] BYREF
  char v18[6]; // [esp+24h] [ebp-4Ch] BYREF
  __int16 v19; // [esp+2Ah] [ebp-46h]
  int v20; // [esp+44h] [ebp-2Ch]
  char v21[6]; // [esp+48h] [ebp-28h] BYREF
  __int16 v22; // [esp+4Eh] [ebp-22h]
  int v23; // [esp+68h] [ebp-8h]

  if ( !a1 )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("(HeapHandle != NULL)");
      if ( !byte_4B3A5DA8 )
        RtlpReportHeapFailure(2);
    }
    return 0;
  }
  if ( *(_DWORD *)(a1 + 8) == -571548178 )
  {
    if ( (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      if ( *(_DWORD *)(a1 + 16) )
        RtlpCallInterceptRoutine(0, 8, 0);
      RtlpHpStackTraceHeapDestroy(a1);
      RtlpHpTagDestroyHeap(a1);
      RtlpMoveHeapBetweenLists(a1, 1, 0, 0);
      RtlpHpHeapDestroy(a1);
      return 0;
    }
    return a1;
  }
  if ( (*(_DWORD *)(a1 + 68) & 0x1000000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 88) )
      RtlpCallInterceptRoutine(0, 8, 0);
    RtlpHpStackTraceHeapDestroy(a1);
    if ( ((*(_DWORD *)(a1 + 64) & 0x61000000) == 0
       || (*(_DWORD *)(a1 + 64) & 0x10000000) != 0
       || (unsigned __int8)RtlDebugDestroyHeap(a1))
      && (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
      RtlpRemoveHeapFromUnprotectedList(a1);
      RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
      v1 = (_DWORD *)(a1 + 156);
      v2 = *(_DWORD **)(a1 + 156);
      while ( v1 != v2 )
      {
        v11 = (unsigned int)v2;
        v2 = (_DWORD *)*v2;
        v15[1] = v11 & 0xFFFF0000;
        v15[0] = 0;
        RtlpSecMemFreeVirtualMemory(v15, 0x8000);
        if ( RtlGetCurrentServiceSessionId() )
          v12 = (int)NtCurrentPeb()->SharedData + 558;
        else
          v12 = 2147353480;
        if ( *(_BYTE *)v12 )
          RtlpHeapLogRangeRelease(v15[0]);
        v1 = (_DWORD *)(a1 + 156);
      }
      if ( *(_BYTE *)(a1 + 234) == 2 )
        v3 = *(_DWORD *)(a1 + 228);
      else
        v3 = 0;
      if ( v3 )
      {
        v16[1] = v3;
        v16[0] = 0;
        RtlpSecMemFreeVirtualMemory(v16, 0x8000);
      }
      if ( *(_DWORD *)(a1 + 136) )
      {
        v17 = 0;
        RtlpSecMemFreeVirtualMemory(&v17, 0x8000);
        *(_DWORD *)(a1 + 136) = 0;
      }
      if ( (*(_BYTE *)(a1 + 64) & 1) == 0 )
      {
        if ( *(int *)(a1 + 64) >= 0 )
          RtlDeleteCriticalSection(*(_DWORD *)(a1 + 200));
        *(_DWORD *)(a1 + 200) = 0;
      }
      do
      {
        v4 = *(_DWORD *)(a1 + 168) - 16;
        RtlpDestroyHeapSegment(v4);
      }
      while ( v4 != a1 );
      v5 = 2147353472;
      if ( RtlGetCurrentServiceSessionId() )
        v6 = (int)NtCurrentPeb()->SharedData + 550;
      else
        v6 = 2147353472;
      if ( *(_BYTE *)v6 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v5 = (int)NtCurrentPeb()->SharedData + 550;
        v13 = *(_BYTE *)v5;
        v19 = 4131;
        v20 = a1;
        NtTraceEvent(v13, 1026, 4, v18);
      }
      v7 = 2147353482;
      if ( RtlGetCurrentServiceSessionId() )
        v8 = (int)NtCurrentPeb()->SharedData + 560;
      else
        v8 = 2147353482;
      if ( *(_BYTE *)v8 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v7 = (int)NtCurrentPeb()->SharedData + 560;
        v14 = *(_BYTE *)v7;
        v22 = 4131;
        v23 = a1;
        NtTraceEvent(v14, 1026, 4, v21);
      }
      if ( RtlGetCurrentServiceSessionId() )
        v9 = (int)NtCurrentPeb()->SharedData + 558;
      else
        v9 = 2147353480;
      if ( *(_BYTE *)v9 )
        RtlpHeapLogRangeDestroy(a1);
      return 0;
    }
    return a1;
  }
  return dword_4B3A3758(dword_4B3A3758, a1);
}
