/*
 * XREFs of _RtlpHpSegSegmentAllocate@12 @ 0x4B37D5F7
 * Callers:
 *     _RtlpHpSegContextReserve@12 @ 0x4B37B777 (_RtlpHpSegContextReserve@12.c)
 *     _RtlpHpSegPageRangeAllocate@12 @ 0x4B37C863 (_RtlpHpSegPageRangeAllocate@12.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpHeapLogRangeReserve@12 @ 0x4B36D8FF (_RtlpHeapLogRangeReserve@12.c)
 *     _RtlpLogHeapCommit@16 @ 0x4B36EE23 (_RtlpLogHeapCommit@16.c)
 *     _RtlpHpTlLogMemStats@8 @ 0x4B3709FD (_RtlpHpTlLogMemStats@8.c)
 *     _RtlpHpSegMgrAllocate@12 @ 0x4B37BE2B (_RtlpHpSegMgrAllocate@12.c)
 *     _RtlpHpSegSegmentFree@16 @ 0x4B37D796 (_RtlpHpSegSegmentFree@16.c)
 *     _RtlCSparseBitmapBitmaskWrite@16 @ 0x4B37DD69 (_RtlCSparseBitmapBitmaskWrite@16.c)
 */

int __fastcall RtlpHpSegSegmentAllocate(int a1, int a2, int a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // ecx
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  unsigned int v12; // [esp+Ch] [ebp-14h]
  int v13; // [esp+10h] [ebp-10h]
  unsigned int v14; // [esp+14h] [ebp-Ch]
  unsigned int v15; // [esp+18h] [ebp-8h]

  v13 = 0;
  v14 = a2 + 1;
  v4 = RtlpHpSegMgrAllocate(a1, a2 + 1, a3);
  v5 = v4;
  if ( !v4 )
    return 0;
  v12 = -*(_DWORD *)a1;
  v7 = (v12 != 0x100000) + 1;
  v8 = 2 * ((unsigned int)(v4 - dword_4B3A6DC4) >> 20);
  v15 = v8 + 2 * (v12 >> 20);
  if ( v8 >= v15 )
  {
LABEL_6:
    v13 = 1;
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + *(__int16 *)(a1 + 18)), v12 >> 12);
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + *(__int16 *)(a1 + 18) + 4), v14);
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (int)NtCurrentPeb()->SharedData + 550;
    else
      v9 = 2147353472;
    if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapCommit(*(_DWORD *)(a1 + 36), v5, v14 << 12, 12);
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (int)NtCurrentPeb()->SharedData + 558;
    else
      v10 = 2147353480;
    if ( *(_BYTE *)v10 )
      RtlpHeapLogRangeReserve(*(_DWORD *)(a1 + 36), v5, v12);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_DWORD *)(a1 + 36), (int *)(a1 + *(__int16 *)(a1 + 18)));
    v6 = v5;
    v5 = 0;
  }
  else
  {
    while ( (int)RtlCSparseBitmapBitmaskWrite(v7, v7) >= 0 )
    {
      v7 = (v12 != 0x100000) + 1;
      v8 += 2;
      if ( v8 >= v15 )
        goto LABEL_6;
    }
    v6 = 0;
  }
  if ( v5 )
    RtlpHpSegSegmentFree(v14, v13);
  return v6;
}
