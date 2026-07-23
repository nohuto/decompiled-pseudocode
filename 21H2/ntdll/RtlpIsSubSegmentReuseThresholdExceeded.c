/*
 * XREFs of RtlpIsSubSegmentReuseThresholdExceeded @ 0x1800235A0
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x180003FA4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpIsSubSegmentReuseable @ 0x180023574 (RtlpIsSubSegmentReuseable.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlpLogHeapReuseThresholdActivate @ 0x18010A434 (RtlpLogHeapReuseThresholdActivate.c)
 */

bool __fastcall RtlpIsSubSegmentReuseThresholdExceeded(__int64 a1, __int64 a2)
{
  bool v3; // bl
  _DWORD *SharedData; // rcx
  __int64 v5; // rcx
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rax

  v3 = (RtlpLowFragHeapGlobalFlags & 4) == 0
    && (v9 = *(unsigned __int16 *)(a1 + 172), (unsigned int)v9 <= 0x70)
    && *(_DWORD *)(a1 + 160) >= 16 * (unsigned int)RtlpBucketSizeIndexReuseThreshold[v9]
    && *(_WORD *)(a2 + 32) < (unsigned int)(*(_WORD *)(a2 + 40) >> 2);
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v5 = (__int64)NtCurrentPeb()->SharedData + 560;
  else
    v5 = 2147353482LL;
  if ( *(_BYTE *)v5
    || ((v6 = NtCurrentPeb()->SharedData) == 0LL || !*v6
      ? (v7 = 2147353472LL)
      : (v7 = (__int64)NtCurrentPeb()->SharedData + 550),
        *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
  {
    if ( v3 )
      RtlpLogHeapReuseThresholdActivate(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL),
        *(_QWORD *)(a2 + 8),
        *(unsigned __int16 *)(a1 + 172));
  }
  return v3;
}
