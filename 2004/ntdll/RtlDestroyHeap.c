/*
 * XREFs of RtlDestroyHeap @ 0x180009680
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     RtlDetectHeapLeaks @ 0x180060190 (RtlDetectHeapLeaks.c)
 *     RtlHeapTrkInitialize @ 0x1800FD790 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlpHpTagDestroyHeap @ 0x1800024D4 (RtlpHpTagDestroyHeap.c)
 *     RtlpHpHeapDestroy @ 0x1800048E4 (RtlpHpHeapDestroy.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x180009638 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpDestroyHeapSegment @ 0x1800098EC (RtlpDestroyHeapSegment.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180009AF4 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpMoveHeapBetweenLists @ 0x18000E2A8 (RtlpMoveHeapBetweenLists.c)
 *     RtlDeleteCriticalSection @ 0x180010FC0 (RtlDeleteCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     DbgPrint @ 0x180050960 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     RtlpCallInterceptRoutine @ 0x1800F32B4 (RtlpCallInterceptRoutine.c)
 *     RtlDebugDestroyHeap @ 0x1800F8F88 (RtlDebugDestroyHeap.c)
 *     RtlpHeapHandleError @ 0x180107ED0 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeDestroy @ 0x180107F8C (RtlpHeapLogRangeDestroy.c)
 *     RtlpHeapLogRangeRelease @ 0x180108014 (RtlpHeapLogRangeRelease.c)
 */

__int64 __fastcall RtlDestroyHeap(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v17; // ecx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-31h] BYREF
  __int64 v25; // [rsp+48h] [rbp-29h] BYREF
  __int64 v26; // [rsp+50h] [rbp-21h] BYREF
  __int64 v27; // [rsp+58h] [rbp-19h] BYREF
  char v28[6]; // [rsp+60h] [rbp-11h] BYREF
  __int16 v29; // [rsp+66h] [rbp-Bh]
  __int64 v30; // [rsp+80h] [rbp+Fh]
  char v31[6]; // [rsp+88h] [rbp+17h] BYREF
  __int16 v32; // [rsp+8Eh] [rbp+1Dh]
  __int64 v33; // [rsp+A8h] [rbp+37h]

  if ( !a1 )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("(HeapHandle != NULL)");
      RtlpHeapHandleError(2LL);
    }
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      v17 = *(_DWORD *)(a1 + 24);
      if ( v17 )
        RtlpCallInterceptRoutine(v17, a1, 0, 8, 0LL);
      RtlpHpStackTraceHeapDestroy(a1);
      RtlpHpTagDestroyHeap(a1);
      RtlpMoveHeapBetweenLists(a1, 1LL, 0LL);
      RtlpHpHeapDestroy((__int128 *)a1);
      return 0LL;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_1801649F0)();
    v2 = *(_DWORD *)(a1 + 144);
    if ( v2 )
      RtlpCallInterceptRoutine(v2, a1, 0, 8, 0LL);
    RtlpHpStackTraceHeapDestroy(a1);
    if ( ((*(_DWORD *)(a1 + 112) & 0x61000000) == 0
       || (*(_DWORD *)(a1 + 112) & 0x10000000) != 0
       || (unsigned __int8)RtlDebugDestroyHeap(a1))
      && (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      RtlpMoveHeapBetweenLists(a1, 1LL, 0LL);
      v4 = 2147353480LL;
      v5 = *(_QWORD **)(a1 + 272);
      while ( (_QWORD *)(a1 + 272) != v5 )
      {
        v18 = (unsigned __int64)v5;
        v5 = (_QWORD *)*v5;
        v23 = 0LL;
        v24 = v18 & 0xFFFFFFFFFFFF0000uLL;
        RtlpSecMemFreeVirtualMemory(v3, &v24, &v23, 0x8000LL);
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v20, v19) )
          v3 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v3 = 2147353480LL;
        if ( *(_BYTE *)v3 )
          RtlpHeapLogRangeRelease(a1, v24, v23);
      }
      if ( *(_BYTE *)(a1 + 418) == 2 )
        v6 = *(_QWORD *)(a1 + 408);
      else
        v6 = 0LL;
      if ( v6 )
      {
        v26 = v6;
        v25 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, &v26, &v25, 0x8000LL);
      }
      if ( *(_QWORD *)(a1 + 232) )
      {
        v27 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, a1 + 232, &v27, 0x8000LL);
        *(_QWORD *)(a1 + 232) = 0LL;
      }
      if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
      {
        if ( *(int *)(a1 + 112) >= 0 )
          RtlDeleteCriticalSection(*(_QWORD *)(a1 + 352));
        *(_QWORD *)(a1 + 352) = 0LL;
      }
      do
      {
        v7 = *(_QWORD *)(a1 + 296) - 24LL;
        RtlpDestroyHeapSegment(v7);
      }
      while ( v7 != a1 );
      v11 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, v8) )
        v12 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v12 = 2147353472LL;
      if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, v10) )
          v11 = (__int64)NtCurrentPeb()->SharedData + 550;
        v21 = *(unsigned __int8 *)v11;
        v30 = a1;
        v29 = 4131;
        NtTraceEvent(v21, 1026LL, 8LL, v28);
      }
      v14 = 2147353482LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v12, v10) )
        v15 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v15 = 2147353482LL;
      if ( *(_BYTE *)v15 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v15, v13) )
          v14 = (__int64)NtCurrentPeb()->SharedData + 560;
        v22 = *(unsigned __int8 *)v14;
        v33 = a1;
        v32 = 4131;
        NtTraceEvent(v22, 1026LL, 8LL, v31);
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v15, v13) )
        v4 = (__int64)NtCurrentPeb()->SharedData + 558;
      if ( *(_BYTE *)v4 )
        RtlpHeapLogRangeDestroy(a1);
      return 0LL;
    }
  }
  return a1;
}
