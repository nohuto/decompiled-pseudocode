/*
 * XREFs of _RtlpIsSubSegmentReuseable@8 @ 0x4B2C3AA6
 * Callers:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 *     _RtlpLocalInfoAllocFromCache@8 @ 0x4B37109C (_RtlpLocalInfoAllocFromCache@8.c)
 *     _RtlpLowFragHeapFlushCaches@4 @ 0x4B37172A (_RtlpLowFragHeapFlushCaches@4.c)
 * Callees:
 *     _RtlpLogHeapReuseThresholdActivate@12 @ 0x4B36F1DA (_RtlpLogHeapReuseThresholdActivate@12.c)
 */

char __fastcall RtlpIsSubSegmentReuseable(int a1, int a2)
{
  char v3; // dl
  bool v4; // bl
  _DWORD *SharedData; // eax
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  unsigned int v10; // eax

  if ( !*(_WORD *)(a2 + 16) )
    return 0;
  v3 = 1;
  v4 = (RtlpLowFragHeapGlobalFlags & 4) == 0
    && (v10 = *(unsigned __int16 *)(a1 + 92), v10 <= 0x70)
    && *(_DWORD *)(a1 + 80) >= 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v10]
    && *(_WORD *)(a2 + 16) < (unsigned int)(*(_WORD *)(a2 + 24) >> 2);
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v6 = (int)NtCurrentPeb()->SharedData + 560;
  else
    v6 = 2147353482;
  if ( *(_BYTE *)v6
    || ((v7 = NtCurrentPeb()->SharedData) == 0 || !*v7
      ? (v8 = 2147353472)
      : (v8 = (int)NtCurrentPeb()->SharedData + 550),
        *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
  {
    if ( !v4 )
      return v3;
    RtlpLogHeapReuseThresholdActivate(*(unsigned __int16 *)(a1 + 92));
    v3 = 1;
  }
  if ( v4 )
    return 0;
  return v3;
}
