/*
 * XREFs of EtwpFailLoggingOld @ 0x14041A870
 * Callers:
 *     EtwpEventWriteFull @ 0x140300E50 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1407B4D70 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpUpdateEventsLostCount @ 0x14022A874 (EtwpUpdateEventsLostCount.c)
 *     EtwpReleaseTraceBuffer @ 0x14022B0A0 (EtwpReleaseTraceBuffer.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402F69F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1402FE2A0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1403031F0 (EtwpLevelKeywordEnabled.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     EtwpTraceLostEventOld @ 0x14041A410 (EtwpTraceLostEventOld.c)
 */

void __fastcall EtwpFailLoggingOld(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        int a6,
        __int16 *a7,
        char a8,
        unsigned int a9,
        __int64 a10,
        char a11)
{
  __int64 v11; // rbp
  unsigned __int8 v14; // r9
  __int64 v15; // rdi
  unsigned __int16 *v16; // r14
  unsigned __int8 v17; // r14
  bool i; // zf
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 v25; // [rsp+88h] [rbp+10h]

  v25 = a2;
  v11 = *(_QWORD *)(a3 + 392);
  v14 = a1;
  if ( *(_DWORD *)(a4 + 384) )
  {
    v15 = 0LL;
    do
    {
      v16 = *(unsigned __int16 **)(a4 + 48 * v15);
      if ( (*((_DWORD *)v16 + 3) & 0x8000000) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(a4 + 48 * v15 + 8) + 2LL) = -16371;
        EtwpUpdateEventsLostCount((__int64)v16);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEventOld((_QWORD *)(a3 + 40), a7, v16 + 68, a6, a9, a10, a8, a11);
      }
      EtwpReleaseTraceBuffer((signed __int64 *)(a4 + 16 + 48 * v15));
      if ( a8 )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v11 + 448) + 8LL * *(unsigned int *)v16),
          1u);
      v15 = (unsigned int)(v15 + 1);
    }
    while ( (unsigned int)v15 < *(_DWORD *)(a4 + 384) );
    a2 = v25;
    v14 = a1;
  }
  v17 = a5;
  for ( i = !_BitScanForward((unsigned int *)&v19, a5); !i; i = !_BitScanForward((unsigned int *)&v19, v17) )
  {
    v17 &= v17 - 1;
    if ( EtwpLevelKeywordEnabled(a3 + 32 * (v19 + 4), v14, a2) )
    {
      v21 = *(unsigned __int16 *)(v20 + 6);
      v22 = v21;
      if ( !a8
        || ExAcquireRundownProtectionCacheAwareEx(
             *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v11 + 448) + 8 * v21),
             1u) )
      {
        if ( (unsigned int)v21 < *(_DWORD *)(v11 + 16) )
        {
          v23 = *(_QWORD *)(*(_QWORD *)(v11 + 456) + 8 * v21);
          if ( (v23 & 1) == 0 )
          {
            EtwpUpdateEventsLostCount(v23);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
              EtwpTraceLostEventOld((_QWORD *)(a3 + 40), a7, (unsigned __int16 *)(v23 + 136), a6, a9, a10, a8, a11);
          }
        }
        if ( a8 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v11 + 448) + 8 * v22), 1u);
      }
    }
    a2 = v25;
    v14 = a1;
  }
}
