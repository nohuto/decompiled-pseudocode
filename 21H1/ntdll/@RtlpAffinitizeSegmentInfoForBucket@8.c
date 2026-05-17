/*
 * XREFs of @RtlpAffinitizeSegmentInfoForBucket@8 @ 0x4B2AE1C2
 * Callers:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlpLocalInfoAllocFromCache@8 @ 0x4B37109C (_RtlpLocalInfoAllocFromCache@8.c)
 * Callees:
 *     @RtlpExtendLowFragHeapSegment@12 @ 0x4B2AE2E8 (@RtlpExtendLowFragHeapSegment@12.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 */

int __fastcall RtlpAffinitizeSegmentInfoForBucket(int a1, int a2)
{
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v10; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+14h] [ebp-4h]

  if ( (*(_BYTE *)(a1 + 440) & 1) != 0 )
    return -1073741823;
  v11 = RtlpAffinityState;
  if ( (unsigned int)RtlpAffinityState <= 1 )
    return -1073741823;
  RtlEnterCriticalSection(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 200));
  if ( *(_DWORD *)(a1 + 4 * a2 + 1476) )
  {
    v4 = -1073741302;
  }
  else
  {
    v4 = RtlpExtendLowFragHeapSegment(&v10);
    if ( v4 >= 0 )
    {
      v5 = v11;
      v6 = v10;
      v11 = v10;
      v7 = v5 - 1;
      if ( v7 )
      {
        v8 = a1 + 2024;
        do
        {
          *(_DWORD *)v6 = v8;
          v8 += 24;
          *(_WORD *)(v6 + 92) = a2;
          v6 += 104;
          --v7;
        }
        while ( v7 );
        v6 = v11;
      }
      *(_DWORD *)(a1 + 4 * a2 + 1476) = v6;
    }
  }
  RtlLeaveCriticalSection(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 200));
  return v4;
}
