/*
 * XREFs of _RtlpHpSegAlloc@20 @ 0x4B37B40B
 * Callers:
 *     _RtlpHpAllocateHeapInternal@20 @ 0x4B3781B0 (_RtlpHpAllocateHeapInternal@20.c)
 *     _RtlpHpMetadataAlloc@20 @ 0x4B379349 (_RtlpHpMetadataAlloc@20.c)
 *     _RtlpHpSegSubAllocate@20 @ 0x4B37D9D6 (_RtlpHpSegSubAllocate@20.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpHpSegMgrCheckOpportunisticLargePage@12 @ 0x4B37BF0E (_RtlpHpSegMgrCheckOpportunisticLargePage@12.c)
 *     _RtlpHpSegPageRangeAllocate@12 @ 0x4B37C863 (_RtlpHpSegPageRangeAllocate@12.c)
 *     _RtlpHpSegPageRangeCommit@24 @ 0x4B37CC3B (_RtlpHpSegPageRangeCommit@24.c)
 *     _RtlpHpSegPageRangeShrink@16 @ 0x4B37D0E7 (_RtlpHpSegPageRangeShrink@16.c)
 */

void *__fastcall RtlpHpSegAlloc(int a1, int a2, int a3, int a4, unsigned int a5)
{
  unsigned int v5; // esi
  void *v7; // esi
  int v8; // eax
  int v9; // ebx
  int v10; // edx
  unsigned int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // esi
  size_t v16; // [esp-4h] [ebp-24h]
  int v17; // [esp+Ch] [ebp-14h]
  int v18; // [esp+10h] [ebp-10h]
  unsigned int Size_4; // [esp+18h] [ebp-8h]

  Size_4 = (unsigned int)(a4 + 4095) >> 12;
  v5 = (unsigned int)(a3 + 4095) >> 12;
  if ( (a5 & 4) != 0 )
    ++v5;
  if ( (a5 & 0x800000) != 0 && (unsigned int)-*(_DWORD *)a1 > 0x200000 )
    return 0;
  v8 = RtlpHpSegPageRangeAllocate(a5);
  v9 = v8;
  if ( !v8 )
    return 0;
  v10 = *(unsigned __int8 *)(v8 + 15);
  v17 = v10;
  v18 = (unsigned __int16)~(*(_DWORD *)(v8 + 12) >> 8);
  if ( Size_4 )
  {
    v11 = a5;
    if ( v18 )
      v11 = a5 & 0xFFFFFFFD;
    if ( (int)RtlpHpSegPageRangeCommit(0, Size_4, v11, 0) < 0 )
    {
      v7 = 0;
LABEL_21:
      if ( v9 )
        RtlpHpSegPageRangeShrink(0, a5);
      return v7;
    }
    v10 = v17;
  }
  if ( (a5 & 4) != 0 )
    RtlpHpSegPageRangeCommit(v5 - 1, v5 - (v10 << *(_BYTE *)(a1 + 5)) - 1, 0, 0);
  v12 = a2;
  *(_DWORD *)(v9 + 4) = (v17 << *(_BYTE *)(a1 + 4)) - a2;
  v13 = v9 & *(_DWORD *)a1;
  v14 = v9 - v13;
  v9 = 0;
  v7 = (void *)(v13 + (v14 >> 4 << *(_BYTE *)(a1 + 4)));
  if ( (a5 & 2) != 0 )
  {
    if ( !v18 && BYTE1(*(_DWORD *)(a1 + 28)) < 2u )
    {
      if ( !RtlpHpSegMgrCheckOpportunisticLargePage(a2) )
        return v7;
      v12 = a2;
    }
    LODWORD(v16) = v12;
    memset(v7, 0, v16);
    goto LABEL_21;
  }
  return v7;
}
