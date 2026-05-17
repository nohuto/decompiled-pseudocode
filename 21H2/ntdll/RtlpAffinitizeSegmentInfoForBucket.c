/*
 * XREFs of RtlpAffinitizeSegmentInfoForBucket @ 0x180072784
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x180003FA4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180072938 (RtlpExtendLowFragHeapSegment.c)
 */

__int64 __fastcall RtlpAffinitizeSegmentInfoForBucket(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  int v4; // edi
  __int64 *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r15
  __int64 v8; // r14
  int v9; // edi
  __int64 v10; // rax
  _WORD *v11; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  if ( (*(_BYTE *)(a1 + 672) & 1) != 0 )
    return (unsigned int)-1073741823;
  v4 = RtlpAffinityState[0];
  if ( LODWORD(RtlpAffinityState[0]) <= 1 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    RtlEnterCriticalSection(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 352LL));
    if ( *(_QWORD *)(a1 + 8 * v3 + 2224) )
    {
      v9 = -1073741302;
    }
    else
    {
      v7 = (unsigned int)(v4 - 1);
      v8 = v7;
      v9 = RtlpExtendLowFragHeapSegment(a1, 192 * v7, &v13);
      if ( v9 >= 0 )
      {
        v10 = v13;
        if ( (_DWORD)v7 )
        {
          v11 = (_WORD *)(v13 + 172);
          v5 = (__int64 *)v13;
          v6 = a1 + 3312;
          do
          {
            *v5 = v6;
            v6 += 48LL;
            *v11 = v3;
            v5 += 24;
            v11 += 96;
            --v8;
          }
          while ( v8 );
        }
        *(_QWORD *)(a1 + 8 * v3 + 2224) = v10;
      }
    }
    RtlLeaveCriticalSection(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 352LL), (__int64)v5, v6);
  }
  return (unsigned int)v9;
}
