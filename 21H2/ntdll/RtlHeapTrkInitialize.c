/*
 * XREFs of RtlHeapTrkInitialize @ 0x1800FDB40
 * Callers:
 *     <none>
 * Callees:
 *     RtlDestroyHeap @ 0x180009680 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlSetHeapInformation @ 0x180074DE0 (RtlSetHeapInformation.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009DB40 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009DB80 (NtUnmapViewOfSection.c)
 *     NtQueryPerformanceCounter @ 0x18009DC60 (NtQueryPerformanceCounter.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800F2CA8 (RtlSetHeapDebuggingInformation.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800FDEDC (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x1800FE3EC (RtlpHeapTrkGenerateHashRandoms.c)
 */

__int64 __fastcall RtlHeapTrkInitialize(void *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *Heap; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // r8
  char *v12; // rcx
  _QWORD *v13; // rax
  _QWORD v14[2]; // [rsp+60h] [rbp-1h] BYREF
  __int128 v15; // [rsp+70h] [rbp+Fh]
  __int64 v16; // [rsp+80h] [rbp+1Fh]
  __int64 (__fastcall *v17)(); // [rsp+88h] [rbp+27h]
  int v18; // [rsp+C8h] [rbp+67h] BYREF
  __int64 v19; // [rsp+D0h] [rbp+6Fh]
  __int64 v20; // [rsp+D8h] [rbp+77h]
  __int64 v21; // [rsp+E0h] [rbp+7Fh] BYREF

  v20 = 0x10000LL;
  v19 = 0LL;
  v21 = 0LL;
  if ( Handle )
    return 3221225473LL;
  if ( !a1 || (int)ZwMapViewOfSection() < 0 )
    return 3221225485LL;
  if ( *(_QWORD *)v19 < 0x400uLL )
    return 3221225507LL;
  if ( *(_DWORD *)(v19 + 52) > 0x40u
    || *(_DWORD *)(v19 + 56) > 2u
    || !*(_QWORD *)(v19 + 8)
    || *(_QWORD *)(v19 + 8) == -1LL
    || !*(_QWORD *)(v19 + 16)
    || *(_QWORD *)(v19 + 16) == -1LL
    || !*(_QWORD *)(v19 + 24)
    || *(_QWORD *)(v19 + 24) == -1LL )
  {
    return 3221225485LL;
  }
  result = NtQueryPerformanceCounter();
  if ( (int)result >= 0 )
  {
    if ( qword_18016D768 )
    {
      dword_18016DA98 = *(_DWORD *)(v19 + 56);
      RtlpHeapTrkGenerateHashRandoms((unsigned int)dword_18016DA98, v3, v4, v5, 0LL, &v21);
      Heap = (_DWORD *)RtlCreateHeap(
                         *(_DWORD *)(v19 + 52) == 0 ? 2 : 0,
                         0LL,
                         (unsigned int)(*(_DWORD *)(v19 + 52) << 20),
                         0LL,
                         0LL,
                         0LL);
      qword_18016DC10 = (__int64)Heap;
      if ( Heap )
      {
        v18 = 2;
        RtlSetHeapInformation(Heap, 0, (__int64)&v18, 4uLL);
        dword_18016DC00 = NtCurrentPeb()->NumberOfProcessors;
        if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_18016D770, &qword_18016DC18, 32LL) )
        {
          if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_18016DBF0, &qword_18016DBE8, 8LL) )
          {
            if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_18016DC08, &qword_18016DBE0, 8LL) )
            {
              qword_18016DA80 = RtlAllocateHeap(qword_18016DC10, 0, 126704LL);
              if ( qword_18016DA80 )
              {
                v7 = RtlAllocateHeap(qword_18016DC10, 0, 126704LL);
                qword_18016DA90 = v7;
                if ( v7 )
                {
                  v8 = (_QWORD *)qword_18016DA80;
                  v9 = 7919LL;
                  Handle = a1;
                  v10 = qword_18016DA80 - v7;
                  dword_18016DA88 = 0;
                  v11 = v7 - qword_18016DA80;
                  do
                  {
                    v12 = (char *)v8 + v11;
                    *v8 = v8;
                    *(_QWORD *)&v12[v10 + 8] = v8;
                    v13 = (_QWORD *)((char *)v8 + v11);
                    v8 += 2;
                    *((_QWORD *)v12 + 1) = v13;
                    *v13 = v13;
                    --v9;
                  }
                  while ( v9 );
                  v14[0] = RtlpHeapTrkInterceptor;
                  v14[1] = 0LL;
                  v16 = 0LL;
                  v17 = RtlpHeapTrkLeakCallback;
                  v15 = 0LL;
                  if ( (int)RtlSetHeapDebuggingInformation(0LL, (__int64)v14) >= 0 )
                  {
                    NtUnmapViewOfSection();
                    return 0LL;
                  }
                }
              }
            }
          }
        }
        RtlDestroyHeap(qword_18016DC10);
        qword_18016DC10 = 0LL;
        qword_18016DC18 = 0LL;
        qword_18016DA80 = 0LL;
        qword_18016DBF0 = 0LL;
        qword_18016DBE8 = 0LL;
        qword_18016DA90 = 0LL;
        qword_18016DC08 = 0LL;
        qword_18016DBE0 = 0LL;
        if ( v19 )
          NtUnmapViewOfSection();
        if ( Handle )
        {
          NtClose(Handle);
          Handle = 0LL;
        }
      }
    }
    return 3221225473LL;
  }
  return result;
}
