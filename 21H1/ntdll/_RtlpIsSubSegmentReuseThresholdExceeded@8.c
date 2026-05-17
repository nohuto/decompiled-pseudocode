/*
 * XREFs of _RtlpIsSubSegmentReuseThresholdExceeded@8 @ 0x4B2EBEDC
 * Callers:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlpLocalInfoAllocFromCache@8 @ 0x4B37109C (_RtlpLocalInfoAllocFromCache@8.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpLogHeapReuseThresholdActivate@12 @ 0x4B36F1DA (_RtlpLogHeapReuseThresholdActivate@12.c)
 */

bool __fastcall RtlpIsSubSegmentReuseThresholdExceeded(int a1, int a2)
{
  bool v3; // bl
  int v4; // eax
  int v5; // eax
  unsigned int v7; // eax

  v3 = (RtlpLowFragHeapGlobalFlags & 4) == 0
    && (v7 = *(unsigned __int16 *)(a1 + 92), v7 <= 0x70)
    && *(_DWORD *)(a1 + 80) >= 16 * (unsigned int)(unsigned __int16)RtlpBucketSizeIndexReuseThreshold[v7]
    && *(_WORD *)(a2 + 16) < (unsigned int)(*(_WORD *)(a2 + 24) >> 2);
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (int)NtCurrentPeb()->SharedData + 560;
  else
    v4 = 2147353482;
  if ( *(_BYTE *)v4
    || (RtlGetCurrentServiceSessionId() ? (v5 = (int)NtCurrentPeb()->SharedData + 550) : (v5 = 2147353472),
        *(_BYTE *)v5 && (NtCurrentPeb()->TracingFlags & 1) != 0) )
  {
    if ( v3 )
      RtlpLogHeapReuseThresholdActivate(*(unsigned __int16 *)(a1 + 92));
  }
  return v3;
}
