/*
 * XREFs of RtlpHeapTrkInterceptor @ 0x1800FE160
 * Callers:
 *     RtlpCallInterceptRoutine @ 0x1800F32B4 (RtlpCallInterceptRoutine.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x18009D430 (NtQueryPerformanceCounter.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A1A60 (RtlGetCurrentProcessorNumber.c)
 *     RtlpHeapTrkTrackAdd @ 0x1800FE69C (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x1800FE778 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FE864 (RtlpHeapTrkTrackRemoveHeap.c)
 */

__int64 __fastcall RtlpHeapTrkInterceptor(__int64 a1, unsigned __int64 a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  unsigned __int64 v8; // rbx
  unsigned int CurrentProcessorNumber; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  signed __int32 v12; // eax
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp+8h]

  if ( a1 == qword_18016BBD0 || dword_18016BBFC == 1 )
    return 0LL;
  v4 = a3 - 2;
  if ( !v4 )
  {
LABEL_11:
    if ( a2 )
    {
      v8 = (a2 >> 3) | 0xE000000000000000uLL;
      if ( dword_18016BA58 == 1 )
      {
        RtlpHeapTrkTrackAdd(a1, v8);
      }
      else if ( dword_18016BA58 == 2 )
      {
        CurrentProcessorNumber = RtlGetCurrentProcessorNumber(a1);
        v10 = CurrentProcessorNumber < dword_18016BBC0 ? CurrentProcessorNumber : 0;
        v11 = (unsigned int)v10;
        v12 = **(_DWORD **)(qword_18016B738 + 8 * v10);
        v13 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
        if ( (unsigned int)(v13 - v12) >= 0x3E8
          && v12 == _InterlockedCompareExchange(
                      *(volatile signed __int32 **)(qword_18016B738 + 8LL * (unsigned int)v10),
                      v13,
                      v12) )
        {
          _InterlockedExchange64(
            (volatile __int64 *)(*(_QWORD *)(qword_18016B738 + 8LL * (unsigned int)v10) + 8LL),
            qword_18016B730 / 100);
        }
        v14 = *(_QWORD *)(qword_18016B738 + 8LL * (unsigned int)v10);
        if ( *(__int64 *)(v14 + 8) <= 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24));
        }
        else
        {
          NtQueryPerformanceCounter();
          RtlpHeapTrkTrackAdd(a1, v8);
          NtQueryPerformanceCounter();
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(qword_18016B738 + 8 * v11) + 8LL),
            ~(v17 - v16));
          _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(qword_18016B738 + 8 * v11) + 16LL));
        }
      }
    }
    return 0LL;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 2;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 2 )
          RtlpHeapTrkTrackRemoveHeap();
        return 0LL;
      }
      goto LABEL_11;
    }
  }
  if ( a2 )
    RtlpHeapTrkTrackRemove(a1, (a2 >> 3) | 0xE000000000000000uLL);
  return 0LL;
}
