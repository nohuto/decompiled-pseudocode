/*
 * XREFs of _RtlpHpSegContextReserve@12 @ 0x4B37B777
 * Callers:
 *     _RtlpHpHeapCreate@20 @ 0x4B378A0E (_RtlpHpHeapCreate@20.c)
 * Callees:
 *     _RtlpHpSegFreeRangeInsert@12 @ 0x4B37B9EA (_RtlpHpSegFreeRangeInsert@12.c)
 *     _RtlpHpSegHeapAddSegment@8 @ 0x4B37BB8C (_RtlpHpSegHeapAddSegment@8.c)
 *     _RtlpHpSegSegmentAllocate@12 @ 0x4B37D5F7 (_RtlpHpSegSegmentAllocate@12.c)
 *     _RtlpHpSegSegmentInitialize@12 @ 0x4B37D82A (_RtlpHpSegSegmentInitialize@12.c)
 */

int __fastcall RtlpHpSegContextReserve(int a1, int a2, int a3)
{
  unsigned int v3; // edi
  int v4; // ebx
  unsigned int v5; // esi
  unsigned int v7; // [esp+Ch] [ebp-10h]
  int v8; // [esp+10h] [ebp-Ch]
  unsigned int v9; // [esp+14h] [ebp-8h]

  v3 = (256 - *(unsigned __int8 *)(a1 + 6)) << *(_BYTE *)(a1 + 5);
  v4 = 0;
  v7 = (~*(_DWORD *)a1 + a2) / (unsigned int)-*(_DWORD *)a1;
  v5 = (unsigned int)(a3 + 4095) >> 12;
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = v5 <= v3 ? v5 : v3;
      v8 = RtlpHpSegSegmentAllocate(0);
      if ( !v8 )
        break;
      RtlpHpSegSegmentInitialize(v9);
      RtlpHpSegFreeRangeInsert(a1, v8 + 16 * *(unsigned __int8 *)(a1 + 6), 1);
      RtlpHpSegHeapAddSegment(a1, v8);
      --v7;
      v5 = v3 < v5 ? v5 - v3 : 0;
      if ( !v7 )
        return v4;
    }
    return -1073741670;
  }
  return v4;
}
