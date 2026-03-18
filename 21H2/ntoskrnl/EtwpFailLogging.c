/*
 * XREFs of EtwpFailLogging @ 0x14022A6DC
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
 *     EtwpTraceLostEvent @ 0x14062CE84 (EtwpTraceLostEvent.c)
 */

void __fastcall EtwpFailLogging(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        int a6,
        char a7,
        __int64 a8,
        char a9,
        int a10,
        __int64 a11,
        char a12)
{
  __int64 v12; // r14
  __int64 v13; // r15
  unsigned __int8 v15; // bp
  bool i; // zf
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // rdi
  unsigned int *v27; // rbp
  __int64 v29; // [rsp+98h] [rbp+10h]

  v29 = a2;
  v12 = *(_QWORD *)(a3 + 392);
  v13 = a4;
  LOBYTE(a4) = a1;
  if ( *(_DWORD *)(v13 + 384) )
  {
    v26 = 0LL;
    do
    {
      v27 = *(unsigned int **)(v13 + 48 * v26);
      if ( (v27[3] & 0x8000000) == 0 )
      {
        *(_WORD *)(*(_QWORD *)(v13 + 48 * v26 + 8) + 2LL) = -16371;
        EtwpUpdateEventsLostCount(v27, a2, a3, a4);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(a3 + 40, a8, (_DWORD)v27 + 136, a6, a7, a10, a11, a9, a12);
      }
      EtwpReleaseTraceBuffer(v13 + 16 + 48 * v26, a2, a3, a4);
      if ( a9 )
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v12 + 448) + 8LL * *v27),
          1u);
      v26 = (unsigned int)(v26 + 1);
    }
    while ( (unsigned int)v26 < *(_DWORD *)(v13 + 384) );
    a2 = v29;
    LOBYTE(a4) = a1;
  }
  v15 = a5;
  for ( i = !_BitScanForward((unsigned int *)&v17, a5); !i; i = !_BitScanForward((unsigned int *)&v17, v15) )
  {
    v18 = a2;
    LOBYTE(a2) = a4;
    v15 &= v15 - 1;
    if ( (unsigned __int8)EtwpLevelKeywordEnabled(a3 + 32 * (v17 + 4), a2, v18) )
    {
      v23 = *(unsigned __int16 *)(v20 + 6);
      v24 = v23;
      if ( !a9
        || ExAcquireRundownProtectionCacheAwareEx(
             *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v12 + 448) + 8 * v23),
             1u) )
      {
        if ( (unsigned int)v23 < *(_DWORD *)(v12 + 16) )
        {
          v25 = *(_QWORD *)(*(_QWORD *)(v12 + 456) + 8 * v23);
          if ( (v25 & 1) == 0 )
          {
            EtwpUpdateEventsLostCount(v25, v19, v21, v22);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
              EtwpTraceLostEvent(a3 + 40, a8, v25 + 136, a6, a7, a10, a11, a9, a12);
          }
        }
        if ( a9 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v12 + 448) + 8 * v24), 1u);
      }
    }
    a2 = v29;
    LOBYTE(a4) = a1;
  }
}
