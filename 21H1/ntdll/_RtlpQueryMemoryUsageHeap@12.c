/*
 * XREFs of _RtlpQueryMemoryUsageHeap@12 @ 0x4B35970A
 * Callers:
 *     _RtlpHeapQueryTotalReserveSize@8 @ 0x4B358310 (_RtlpHeapQueryTotalReserveSize@8.c)
 *     _RtlpQueryExtendedInformationHeap@8 @ 0x4B358EC0 (_RtlpQueryExtendedInformationHeap@8.c)
 * Callees:
 *     _RtlpGetNextRegionHeap@16 @ 0x4B357FF1 (_RtlpGetNextRegionHeap@16.c)
 *     _RtlpGetLowFragHeapMetadataSize@12 @ 0x4B370F75 (_RtlpGetLowFragHeapMetadataSize@12.c)
 */

int __fastcall RtlpQueryMemoryUsageHeap(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v5; // esi
  int v6; // eax
  _DWORD *v7; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v8; // [esp+8h] [ebp-8h] BYREF
  int v9; // [esp+Ch] [ebp-4h]

  v9 = a1;
  if ( (*(_DWORD *)(a1 + 68) & 0x1000000) != 0 )
    return -1073741822;
  v5 = 0;
  *a2 = 0;
  *a3 = 0;
  RtlpGetLowFragHeapMetadataSize(a3);
  while ( RtlpGetNextRegionHeap(v9, (unsigned int)v5, &v8, &v7) )
  {
    v5 = v8;
    if ( v8 )
    {
      *a2 += v8[8] << 12;
      v6 = (v5[8] - v5[11]) << 12;
    }
    else
    {
      v5 = v7;
      *a2 += v7[5];
      v6 = v5[4];
    }
    *a3 += v6;
  }
  return 0;
}
