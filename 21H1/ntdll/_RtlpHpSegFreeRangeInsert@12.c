/*
 * XREFs of _RtlpHpSegFreeRangeInsert@12 @ 0x4B37B9EA
 * Callers:
 *     _RtlpHpSegContextCompact@8 @ 0x4B37B591 (_RtlpHpSegContextCompact@8.c)
 *     _RtlpHpSegContextReserve@12 @ 0x4B37B777 (_RtlpHpSegContextReserve@12.c)
 *     _RtlpHpSegLargeRangeAllocate@16 @ 0x4B37BBBC (_RtlpHpSegLargeRangeAllocate@16.c)
 *     _RtlpHpSegPageRangeAllocate@12 @ 0x4B37C863 (_RtlpHpSegPageRangeAllocate@12.c)
 *     _RtlpHpSegPageRangeShrink@16 @ 0x4B37D0E7 (_RtlpHpSegPageRangeShrink@16.c)
 * Callees:
 *     _RtlRbInsertNodeEx@16 @ 0x4B2CEB50 (_RtlRbInsertNodeEx@16.c)
 *     _RtlpHpTlLogMemStats@8 @ 0x4B3709FD (_RtlpHpTlLogMemStats@8.c)
 */

int __fastcall RtlpHpSegFreeRangeInsert(int a1, int a2, int a3)
{
  int v5; // ebx
  int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // eax

  if ( !a3 && (*(_BYTE *)(a1 + 9) & 0x10) != 0 && *(unsigned __int8 *)(a2 + 15) == 256 - *(unsigned __int8 *)(a1 + 6) )
  {
    v5 = a2 & *(_DWORD *)a1;
    *(_DWORD *)a2 = -857879297;
    return v5;
  }
  v6 = a1 + 80;
  v5 = 0;
  v7 = *(_DWORD *)(a1 + 80);
  if ( (*(_BYTE *)(a1 + 84) & 1) != 0 )
  {
    if ( v7 )
      v7 ^= v6;
    else
      v7 = 0;
  }
  if ( !v7 )
  {
LABEL_21:
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 80), (PRTL_BALANCED_NODE)v7, 0, (PRTL_BALANCED_NODE)a2);
    goto LABEL_22;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(a2 + 12) < *(_DWORD *)(v7 + 12) )
    {
      v8 = *(_DWORD *)v7;
      if ( (*(_BYTE *)(a1 + 84) & 1) != 0 )
      {
        if ( !v8 )
          goto LABEL_21;
        v8 ^= v7;
      }
      if ( !v8 )
        goto LABEL_21;
      goto LABEL_20;
    }
    v8 = *(_DWORD *)(v7 + 4);
    if ( (*(_BYTE *)(a1 + 84) & 1) != 0 )
    {
      if ( !v8 )
        break;
      v8 ^= v7;
    }
    if ( !v8 )
      break;
LABEL_20:
    v7 = v8;
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 80), (PRTL_BALANCED_NODE)v7, 1u, (PRTL_BALANCED_NODE)a2);
LABEL_22:
  _InterlockedExchangeAdd(
    (volatile signed __int32 *)(a1 + *(__int16 *)(a1 + 18) + 8),
    (unsigned __int16)~(*(_DWORD *)(a2 + 12) >> 8));
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogMemStats(*(_DWORD *)(a1 + 36), (int *)(a1 + *(__int16 *)(a1 + 18)));
  return v5;
}
