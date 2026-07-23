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
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v11; // [esp+10h] [ebp-8h] BYREF
  int v12; // [esp+14h] [ebp-4h]

  if ( (*(_BYTE *)(a1 + 440) & 1) != 0 )
    return -1073741823;
  v4 = RtlpAffinityState;
  v12 = RtlpAffinityState;
  if ( (unsigned int)RtlpAffinityState <= 1 )
    return -1073741823;
  RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(*(_DWORD *)(a1 + 12) + 200));
  if ( *(_DWORD *)(a1 + 4 * a2 + 1476) )
  {
    v5 = -1073741302;
  }
  else
  {
    v5 = RtlpExtendLowFragHeapSegment(a1, 104 * (v4 - 1), &v11);
    if ( v5 >= 0 )
    {
      v6 = v12;
      v7 = v11;
      v12 = v11;
      v8 = v6 - 1;
      if ( v8 )
      {
        v9 = a1 + 2024;
        do
        {
          *(_DWORD *)v7 = v9;
          v9 += 24;
          *(_WORD *)(v7 + 92) = a2;
          v7 += 104;
          --v8;
        }
        while ( v8 );
        v7 = v12;
      }
      *(_DWORD *)(a1 + 4 * a2 + 1476) = v7;
    }
  }
  RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(*(_DWORD *)(a1 + 12) + 200));
  return v5;
}
